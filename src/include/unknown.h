/*  Princed V3 - Prince of Persia Level Editor for PC Version
    Copyright (C) 2003 Princed Development Team

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    The authors of this program may be contacted at http://forum.princed.org
*/

/*
unknown.h: Princed Resources : Unknown.xml generator headers
���������
 Copyright 2003 Princed Development Team
  Created: 24 Aug 2003

  Author: Enrique Calot <ecalot.cod@princed.org>
  Version: 1.01 (2003-Oct-23)

 Note:
  DO NOT remove this copyright notice
*/

#ifndef _PR_UNKNOWN_H_
#define _PR_UNKNOWN_H_

/* Note:
 * To use the functions as a library you must include pr.h
 */

/* Includes */
#include "parse.h"
#include "reslist.h"
#include "common.h" /* RES_FILE_TYPES_COUNT */
#include "tree.h" /* tTreeStatus */

typedef struct {
	char*        backupExtension;
	char*        currentDat;
	FILE*        fd;
	tTreeStatus  status;
	tTag*        tree;
	unsigned int optionflag;
	unsigned int typeCount[RES_FILE_TYPES_COUNT];
} tUnknownFile;

/* Resources extras */
void getFileName(char* vFileext,const char* vDirExt,const tResource* r,const char* vFiledat, const char* vDatFileName,int optionflag,const char* backupExtension,const char* format);

#endif
