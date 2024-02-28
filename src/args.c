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
 *   File         :     aj_args.c
 *
 *   @(#)  [MB] aj_args.c Version 1.2 du 22/09/10 - 
 *
 * ============================================================================
 */

#include  <stdio.h>
#include  <string.h>

/******************************************************************************

                         MAIN

******************************************************************************/
int main(int argc, char *argv[])
{
     int        _i;

     printf("ARGC = %d\n", argc);

     for (_i = 1; _i < argc; _i++) {
          printf("ARGV[%3d : length = %3d] = [%s]\n",
                 _i, strlen(argv[_i]), argv[_i]);
     }
     return 0;
}
