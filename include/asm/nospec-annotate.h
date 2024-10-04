/* SPDX-License-Identifier: GPL-2.0 */

#ifndef _ASM_X86_NOSPEC_ANNOTATE_H_
#define _ASM_X86_NOSPEC_ANNOTATE_H_

#include <asm/asm.h>

#ifdef __ASSEMBLY__

/*
 * This should be used immediately before an indirect jump/call. It tells
 * objtool the subsequent indirect jump/call is vouched safe for retpoline
 * builds.
 */
.macro ANNOTATE_RETPOLINE_SAFE
	.Lannotate_\@:
	.pushsection .discard.retpoline_safe
	_ASM_PTR .Lannotate_\@
	.popsection
.endm

#else /* __ASSEMBLY__ */

#define ANNOTATE_RETPOLINE_SAFE					\
	"999:\n\t"						\
	".pushsection .discard.retpoline_safe\n\t"		\
	_ASM_PTR " 999b\n\t"					\
	".popsection\n\t"

#endif /* __ASSEMBLY__ */

#endif /* _ASM_X86_NOSPEC_ANNOTATE_H_ */
