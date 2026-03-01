#ifndef _PLAYERTRACKCONFIGLIST_H
#define _PLAYERTRACKCONFIGLIST_H

typedef struct _PlayerTrackConfigList
{
    int unknown_0x0;
    int unknown_0x4;
    int unknown_0x8;
    int unknown_0xc;
    int unknown_0x10;
    int unknown_0x14;
    int unknown_0x18;
    int unknown_0x1c;
    int unknown_0x20;
    bool mAutoVocals;
} PlayerTrackConfigList;

extern bool GetAutoVocals();

#endif // _PLAYERTRACKCONFIGLIST_H