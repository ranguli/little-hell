//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//      Configuration file interface.
//    


#ifndef __M_CONFIG__
#define __M_CONFIG__

#include "doomtype.h"

void M_LoadDefaults(void);
void M_SaveDefaults(void);
void M_SetConfigDir(const char *dir);
void M_BindIntVariable(const char *name, int *variable);
void M_BindFloatVariable(const char *name, float *variable);
void M_BindStringVariable(const char *name, char **variable);
int M_GetIntVariable(const char *name);
void M_SetConfigFilenames(const char *main_config, const char *extra_config);
char *M_GetSaveGameDir();

extern const char *configdir;

#endif
