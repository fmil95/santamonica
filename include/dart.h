/**
 * @file dart.h
 *
 * @brief Dartgun projectiles.
 */
#ifndef DART_H
#define DART_H

#include "common.h"
#include <bis.h>
#include <mq.h>
#include <so.h>
#include <po.h>

// Forward.
struct EXPL;
struct DARTGUN;

/**
 * @brief Dart State.
 */
enum DARTS
{
    DARTS_Nil = -1,
    DARTS_AvailToFire = 0,
    DARTS_ReadyToFire = 1,
    DARTS_Airborne = 2,
    DARTS_Sticking = 3,
    DARTS_Stuck = 4,
    DARTS_Fading = 5,
    DARTS_Max = 6
};

/**
 * @class DART
 * @brief Projectile for dartguns.
 */
struct DART : public SO
{
    /* 0x550 */ DARTS darts;
    /* 0x554 */ float tDarts;
    /* 0x558 */ float svDart;
    /* 0x55c */ float sRadiusFireCloud;
    /* 0x560 */ float sRadiusStrikeCloud;
    /* 0x564 */ float dtFade;
    /* 0x568 */ float dtMaxStuck;
    /* 0x56c */ DLE dleDartFree;
    /* 0x574 */ ASEG *pasegSticking;
    /* 0x578 */ ASEGA *pasegaSticking;
    /* 0x57c */ ALO *paloTarget;
    /* 0x580 */ float dtLaunchToTarget;
    /* 0x584 */ float dzTarget;
    /* 0x588 */ DARTGUN *pdartgunFiredFrom;
    /* 0x58c */ EXPL *pexpl;
};

/**
 * @brief Unknown.
 * @todo Implement the struct. Move elsewhere?
 */
struct HBSK
{
    // ...
};

void InitDart(DART *pdart);

void OnDartAdd(DART *pdart);

void RemoveDart(DART *pdart);

void CloneDart(DART *pdart, DART *pdartBase);

void LoadDartFromBrx(DART *pdart, CBinaryInputStream *pbis);

void HandleDartMessage(DART *pdart, MSGID msgid, void *pv);

void PostDartLoad(DART *pdart);

void UpdateDart(DART *pdart, float dt);

void SetDartDarts(DART *pdart, DARTS darts);

void ApplyDartThrow(DART *pdart, PO *ppo);

void UpdateDartAirborne(DART *pdart, float dt);

#endif // DART_H
