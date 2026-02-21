/**
 * @file dartgun.h
 */
#ifndef DARTGUN_H
#define DARTGUN_H

#include "common.h"
#include <break.h>
#include <rat.h>
#include <oid.h>
#include <so.h>
#include <mq.h>

/**
 * @class DARTGUN
 * @brief Dart gun used in High Class Heist?
 */
struct DARTGUN : public BRK
{
    // ...
    /* 0x744 */ int coidRatTarget;
    /* 0x748 */ OID aoidRatTarget[8];
    // ...
    /* 0x78c */ int cpratInTargetArea;
    /* 0x790 */ RAT *apratInTargetArea[8];
    /* 0x7b0 */ int fJtInTargetArea;
};

void InitDartgun(DARTGUN *pdartgun);

void HandleDartgunMessage(DARTGUN *pdartgun, MSGID msgid, void *pv);

void BindDartgun(DARTGUN *pdartgun);

void PostDartgunLoad(DARTGUN *pdartgun);

void UpdateDartgun(DARTGUN *pdartgun, float dt);

int FIgnoreDartgunIntersection(DARTGUN *pdartgun, SO *psoOther);

void BreakDartgun(DARTGUN *pdartgun);

void SetDartgunGoalState(DARTGUN *pdartgun, OID oidStateGoal);

void TrackDartgun(DARTGUN *pdartgun, OID *poidStateGoal);

int FPrepareDartgunToFire(DARTGUN *pdartgun);

void FireDartgun(DARTGUN *pdartgun);

void AgeDartgunStuckDart(DARTGUN *pdartgun);

RAT *PratGetDartgunRatTarget(DARTGUN *pdartgun);

void AddDartgunRatTarget(DARTGUN *pdartgun, OID oid);

void StartDartgunTargetAreaChange(DARTGUN *pdartgun);

void AddDartgunTargetAreaTarget(DARTGUN *pdartgun, ALO *paloTarget);

#endif // DARTGUN_H
