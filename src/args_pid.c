/* ============================================================================
 *   (C) Copyright Martial Bornet, 2014.
 *
 *   Auteur       :     Martial BORNET (MB) - 2 Juillet 2014
 *
 *   Description  :     Affichage des arguments passes en parametres
 *
 *   Fichier      :     aj_args.c
 *
 *   @(#)  aj_args_pid.c  1.2  22/09/10  MB  
 *
 *   Liste des fonctions de ce fichier :
 *   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   - main
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
