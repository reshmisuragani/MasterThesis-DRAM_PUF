/*
 * VideoCore4_Drivers
 * Copyright (c) 2017 Authors of rpi-open-firmware
 *
 * USB PHY initialization driver.
 */

#include <drivers/IODevice.hpp>

enum BCM2708PinmuxSetting {
	kBCM2708PinmuxIn = 0,
	kBCM2708PinmuxOut = 1,
	kBCM2708Pinmux_ALT5 = 2,
	kBCM2708Pinmux_ALT4 = 3,
	kBCM2708Pinmux_ALT0 = 4,
	kBCM2708Pinmux_ALT1 = 5,
	kBCM2708Pinmux_ALT2 = 6,
	kBCM2708Pinmux_ALT3 = 7
};

struct BCM2708Gpio : IODevice {
	IODriverConstructor(BCM2708Gpio);

	void setFunction(uint32_t pin, BCM2708PinmuxSetting function);
	virtual void init();
};