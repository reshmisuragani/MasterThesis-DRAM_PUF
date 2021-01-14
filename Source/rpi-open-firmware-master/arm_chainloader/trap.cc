/*
 * trap.cc
 * Copyright (c) 2017 Kristina Brooks
 *
 * ARM trap handling code.
 */

#include <lib/runtime.h>

struct arm_saved_state {
	uint32_t	r[13];		/* General purpose register r0-r12 */
	uint32_t	sp;			/* Stack pointer r13 */
	uint32_t	lr;			/* Link register r14 */
	uint32_t	pc;			/* Program counter r15 */
	uint32_t	cpsr;		/* Current program status register */
	uint32_t	fsr;		/* Fault status */
	uint32_t	far;		/* Virtual Fault Address */
	uint32_t	exception;	/* exception number */
};
typedef struct arm_saved_state arm_saved_state_t;

#define REGISTER_FORMAT_STRING(prefix) \
	prefix "  r0: 0x%08x  r1: 0x%08x  r2: 0x%08x  r3: 0x%08x\n" \
	prefix "  r4: 0x%08x  r5: 0x%08x  r6: 0x%08x  r7: 0x%08x\n" \
	prefix "  r8: 0x%08x  r9: 0x%08x r10: 0x%08x r11: 0x%08x\n" \
	prefix " r12: 0x%08x  sp: 0x%08x  lr: 0x%08x  pc: 0x%08x\n" \
	prefix "cpsr: 0x%08x\n"

#define REGISTER_PRINTF_LIST(regs) regs->r[0], regs->r[1], regs->r[2], regs->r[3],\
	regs->r[4], regs->r[5], regs->r[6], regs->r[7], \
	regs->r[8], regs->r[9], regs->r[10], regs->r[11], \
	regs->r[12], regs->sp, regs->lr, regs->pc, regs->cpsr

extern "C" void fatal_exception(arm_saved_state_t* regs, const char* fmt, ...)
{
	va_list va;

	printf("Fatal Exception: ");
	va_start(va, fmt);
	vprintf(fmt, va);
	va_end(va);
	printf("\n");

	printf("ARM registers: \n");
	printf(REGISTER_FORMAT_STRING("    "), REGISTER_PRINTF_LIST(regs));

	panic("Fatal CPU exception!");
}

extern "C" void sleh_undef(arm_saved_state_t* regs) {
	fatal_exception(regs, "Undefined instruction");
}

extern "C" void sleh_prefabt(arm_saved_state_t* regs) {
	fatal_exception(regs, "Prefetch abort");
}

extern "C" void sleh_dataabt(arm_saved_state_t* regs) {
	fatal_exception(regs, "Data abort");
}
extern "C" void sleh_addrexc(arm_saved_state_t* regs) {
	fatal_exception(regs, "Address exception");
}

extern "C" void sleh_irq(arm_saved_state_t* regs) {
	fatal_exception(regs, "IRQ");
}

extern "C" void sleh_fiq(arm_saved_state_t* regs) {
	fatal_exception(regs, "FIQ");
}