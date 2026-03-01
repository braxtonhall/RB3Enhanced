#ifndef _GAMECONFIG_H
#define _GAMECONFIG_H

#include "rb3/BandUser.h"
#include "rb3/PlayerTrackConfigList.h"

extern ChangeDifficulty(BandUser bandUser, int difficulty);
extern PlayerTrackConfigList *GetConfigList();

#endif // _GAMECONFIG_H