/* ============================================================================
 * Copyright (C) 2010-2024, Martial Bornet
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *   Author       :     Martial BORNET (MB) - July 1, 2010
 *
 *   File         :     aj_args_pid.c
 *
 *   @(#)  aj_args_pid.c  1.2  22/09/10  MB  
 *
 * ============================================================================
 */

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/******************************************************************************

                              MAIN

******************************************************************************/
int main(int argc, char *argv[])
{
     int   _i, _pid;

     _pid = getpid();

     for (_i = 1; _i < argc; _i++) {
          printf(" PROC %5d : ARGV[%3d] = \"%s\"\n", _pid, _i, argv[_i]);
     }

     return 0;
}
