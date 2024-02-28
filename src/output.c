/*
 *   OUTPUT.C :     Affichage permanent de lignes differentes a l'ecran
 *   =============  (test remote login / driver tty / ...)
 *
 *   %Z%  %M%  %I%  %E%  %Y%  %Q%
 *
 *   AUTEUR:   MB
 *
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
