#pragma once

#include <hardware.h>

static inline void __attribute__((noreturn)) hang_cpu() {
	/* disable interrupts  */
	__asm__ __volatile__ ("di");

	/* loop */
	for (;;) {
		__asm__ __volatile__ ("nop");
	}
}