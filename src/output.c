/* ============================================================================
 * Copyright (C) 1992-2024, Martial Bornet
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
 *   Author       :     Martial BORNET (MB) - December 16, 1992
 *
 *	File         :     output.c
 *
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define   OUTSTR    "Line %10d: %s\n"

/******************************************************************************

                              MAIN

******************************************************************************/
int main(int argc, char *argv[])
{
     char       _buffer[1024], _str[1024], *_fmt, *_env_col_name,
                *_env_col_value;
     int        _i, _length, _col, _width;
     long       _l;

     if (argc != 1) {
          fprintf(stderr, "Usage: %s\n", argv[0]);
          exit(1);
     }

     _env_col_name = "COLUMNS";
     if ((_env_col_value = getenv(_env_col_name)) == 0) {
          _col      = 80;
     }
     else {
          _col      = atoi(_env_col_value);
     }

     _fmt      = OUTSTR;
     _length   = sprintf(_str, _fmt, 0, "");

     _width    = _col - _length;
     _l = 0;

     while (1) {
          /* Increment the number of lines
             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
          _l++;

          /* Buffer Initialization
             ~~~~~~~~~~~~~~~~~~~~~ */
          for (_i = 0; _i < _width; _i++) {
               _buffer[_i] = (_l + _i) % 95 + ' ';
          }
          _buffer[_i] = 0;
          printf(_fmt, _l, _buffer);
     }
}
