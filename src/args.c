/* ============================================================================
 *   (C) Copyright Martial Bornet, 2014.
 *
 *   Auteur       :     Martial BORNET (MB) - 2 Juillet 2014
 *
 *   Description  :     Affichage des arguments passes en parametres
 *
 *   Fichier      :     aj_args.c
 *
 *   @(#)  [MB] aj_args.c Version 1.2 du 22/09/10 - 
 *
 *   Liste des fonctions de ce fichier :
 *   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *   - main
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
