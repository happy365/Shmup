/*
	This file is part of SHMUP.

    SHMUP is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SHMUP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with SHMUP.  If not, see <http://www.gnu.org/licenses/>.
*/    
/*
 *  sounds.h
 *  dEngine
 *
 *  Created by fabien sanglard on 10-06-06.
 *  Copyright 2010 Memset software Inc. All rights reserved.
 *
 */

#ifndef FD_SOUNDS
#define FD_SOUNDS

#include "wavfile.h"
#include "globals.h"
#include "target.h"



#define SND_PLASMA		0
#define SND_EXPLOSION	1
#define SND_GHOST_LAUNCH 2
#define SND_ENEMY_SHOT 3

#define NUM_SOURCES 8


#define SND_FORMAT_STEREO16 0
#define SND_FORMAT_MONO16   1
#define SND_FORMAT_STEREO8  2
#define SND_FORMAT_MONO8    3
    
    
typedef struct sound_t
{
	//uchar loaded;
	//char* path;
	
	soundInfo_t metaData;
	uchar* data;
	
    int format;
    
	int size;

	int lastTimePlayed ;
	
} sound_t;


int SND_Init(void);
void SND_UpdateRecord(void);
void SND_FinalizeRecord(void);
void SND_PlaySound(int sndId);

#endif
