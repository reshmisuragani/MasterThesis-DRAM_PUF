/*
 * VideoCore4_Drivers
 * Copyright (c) 2017 Kristina Brooks
 *
 * BCM2708 power management driver.
 */

#include <drivers/IODevice.hpp>
#include <drivers/BCM2708PowerManagement.hpp>

static IODevice* startDeviceByTag(uint32_t tag) {
	IODevice* dev = IODevice::findByTag(tag);

	if (!dev) {
		panic("unable to find device with tag 0x%X in the registry", tag);
	}

	dev->start();
	return dev;
}

extern "C" void PEStartPlatform() {
	IODevice* imagePm = PowerManagementDomain::getDeviceForDomain(kCprPowerDomainImage);
	assert(imagePm);
	IODevice* usbPm = PowerManagementDomain::getDeviceForDomain(kCprPowerDomainUSB);
	assert(usbPm);

	/*
	 * All devices in the IMAGE domain have to be disabled before
	 * starting the domain itself.
	 */
	usbPm->stop();
	/* Bring up IMAGE power domain */
	imagePm->start();
	/* Now we can re-enable USB power domain */
	usbPm->start();

	/* Start USB PHY */
	startDeviceByTag('USBP');

	/* Start ARM */
	startDeviceByTag('ARMC');
}
