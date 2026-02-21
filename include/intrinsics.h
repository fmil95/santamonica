/**
 * @file intrinsics.h
 *
 * @brief Hardware intrinsics and inline assembly macros for MIPS/PS2 EE.
 */
#ifndef INTRINSICS_H
#define INTRINSICS_H

/**
 * @brief Hardware square root using MIPS FPU sqrt.s instruction.
 *
 * @details Inline assembly to invoke the standard MIPS II FPU sqrt.s
 * instruction. Available on R5900 (PS2 EE) and most MIPS processors with an
 * FPU.
 *
 * @param value Expression to compute square root of
 * @return Square root result as a float
 */
#define SQRTF(value)                                                           \
    ({                                                                         \
        float __result;                                                        \
        __asm__ volatile("sqrt.s %0, %1"                                       \
                         : "=&f"(__result)                                     \
                         : "f"(value)                                          \
                         : "memory");                                          \
        __result;                                                              \
    })

/**
 * @brief Read MIPS CP0 Count register (register $9).
 *
 * @details The Count register increments automatically every CPU cycle and is
 *          used for high-resolution timing. On PS2 EE, it runs at 294.912 MHz.
 *          https://psi-rockin.github.io/ps2tek/#eecop0timer
 *
 * @return 32-bit Count value as unsigned long
 */
#define READ_CP0_COUNT()                                                       \
    ({                                                                         \
        unsigned long __result;                                                \
        __asm__ volatile("mfc0 %0, $9" : "=r"(__result));                      \
        __result;                                                              \
    })

#endif // INTRINSICS_H
