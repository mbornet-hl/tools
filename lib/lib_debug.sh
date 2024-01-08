#!/bin/bash
#  ============================================================================
#  This program is free software: you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 3 of the License, or
#  (at your option) any later version.
# 
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
# 
#  You should have received a copy of the GNU General Public License
#  along with this program.  If not, see <http://www.gnu.org/licenses/>.
# 
#    Author       :     Martial BORNET (MB) - 8th of January, 2024
# 
#    Description  :     Debug tools for bash scripts
# 
#    File         :     aj_lib_debug.sh
# 
#    @(#)  [MB] aj_lib_debug.sh Version 1.1 du 24/01/08 - 
# 
#  Sources from the original hl command are available on :
#  https://github.com/mbornet-hl/tools
# 
# /

lineno()
{
     printf "%s::%s() line %d\n" \
          "${BASH_SOURCE[1]}" "${FUNCNAME[1]}" \
          "${BASH_LINENO[0]}"
}

stack()
{
     cpt=0
     for key in ${!FUNCNAME[@]}
     do
          printf "[%2d] %s::%s() at line %d\n"            \
               "$cpt"                                     \
               "${BASH_SOURCE[$key]}" "${FUNCNAME[$key]}" \
               "${BASH_LINENO[$key]}"

          cpt=$((cpt + 1))
     done
     echo
}
