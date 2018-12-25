/*****************************************************************************\
     Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.
                This file is licensed under the Snes9x License.
   For further information, consult the LICENSE file in the root directory.
\*****************************************************************************/


#ifndef _SNAPSHOT_H_
#define _SNAPSHOT_H_

#define SNAPSHOT_MAGIC			"#!s9xsnp"
#define SNAPSHOT_VERSION		9

#define SUCCESS					1
#define WRONG_FORMAT			(-1)
#define WRONG_VERSION			(-2)
#define FILE_NOT_FOUND			(-3)
#define WRONG_MOVIE_SNAPSHOT	(-4)
#define NOT_A_MOVIE_SNAPSHOT	(-5)
#define SNAPSHOT_INCONSISTENT	(-6)

void S9xResetSaveTimer (bool8);
bool8 S9xFreezeGame (const char *);
bool8 S9xUnfreezeGame (const char *);
void S9xFreezeToStream (STREAM);
int	 S9xUnfreezeFromStream (STREAM);
bool8 S9xSPCDump (const char *);

#endif
