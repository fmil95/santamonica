/**
 * @file clock.h
 *
 * @brief Engine clock.
 */
#ifndef CLOCK_H
#define CLOCK_H

#include "common.h"

typedef unsigned long long TICK;

/**
 * @brief Engine clock.
 */
struct CLOCK
{
    int fEnabled; // clock enabled flag
    float t;      // current time
    float dt;     // time since last frame
    float dtPrev; // dt from previous frame
    float tReal;  // t factoring in EE clock cyclerate
    float dtReal; // dt factoring in EE clock cyclerate
    TICK tickFrame;
};

extern float D_0024CD4C;

extern float g_rtClock;
extern float g_rtClockPowerUp;
extern CLOCK g_clock;
// extern TICK s_tickLastRaw; // Should be static.
extern ulong cWrapAround; // Should be static, and not initialized. Replace once bss section of the TU is migrated.

/**
 * @brief Sets the global clock rate multiplier and enables/disables the clock.
 *
 * @param rt The new clock rate multiplier (1.0 = normal, > 1.0 = faster).
 */
void SetClockRate(float rt);

/**
 * @brief Updates clock state based on elapsed time, with clamping and scaling.
 *
 * @details Clamps delta time to 1-2 frames, applies rate multipliers if enabled.
 *
 * @param pclock Pointer to the clock to update.
 */
void MarkClockTick(CLOCK *pclock);

/**
 * @brief Updates clock with raw elapsed time only (no clamping or scaling).
 *
 * @param pclock Pointer to the clock to update.
 */
void MarkClockTickRealOnly(CLOCK *pclock);

/**
 * @brief Resets the clock's accumulated time to a specific value.
 *
 * @param pclock Pointer to the clock to reset.
 * @param t Time value in seconds to set.
 */
void ResetClock(CLOCK *pclock, float t);

/**
 * @brief Enables or disables a clock instance.
 *
 * @param pclock Pointer to the clock.
 * @param fEnabled Non-zero to enable, zero to disable.
 */
void SetClockEnabled(CLOCK *pclock, int fEnabled);

/**
 * @brief Initializes the clock system.
 */
void StartupClock();

/**
 * @brief Returns a 64-bit tick count derived from the 32-bit hardware counter.
 *
 * @details Extends the 32-bit CP0 Count register to 64 bits by tracking overflows.
 *
 * @return 64-bit tick value: upper 32 bits = wraparound count, lower 32 bits =
 * Count register.
 */
const TICK TickNow();

#endif // CLOCK_H
