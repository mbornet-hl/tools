#!/bin/sh
#
#	Initialisation du prompt principal
#	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#
#	@(#)	[MB] x_001_PS1.sh	Version 1.10 du 17/08/15 - 
#

R=31		# Red
G=32		# Green
Y=33		# Yellow
B=34		# Blue
M=35		# Magenta
C=36		# Cyan
W=37		# White

[ -f '/proc/cpuinfo' ] && grep -q QEMU '/proc/cpuinfo'
if [ $? = 0 ]
then
	# Machine virtuelle
	# ~~~~~~~~~~~~~~~~~
	Hcol=$B
else
	# Machine reelle
	# ~~~~~~~~~~~~~~
	case `hostname` in
		krypton)		Hcol=$R
					;;

		vps28020|vps28020.ovh.net)
					Hcol=$R
					;;

		rigel)		Hcol=$M
					;;

		dell01|hp04)	Hcol=$Y
					;;

		*)			Hcol=$C
					;;
	esac
fi

if [ "`id -u`" -eq 0 ]; then
	# Prompt pour root
	# ~~~~~~~~~~~~~~~~
	Ucol=$R
	PS1='\t [\[\033[01;${Hcol}m\]\h\[\033[0m\]-\[\033[01;${Ucol}m\]\u\[\033[0m\]-$TTY] \w # '
else
	# Prompt pour utilisateur non-privilegie
	# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	Ucol=$C
	PS1='\t [\[\033[01;${Hcol}m\]\h\[\033[0m\]-\[\033[01;${Ucol}m\]\u\[\033[0m\](\[\033[1;37m\033[48;5;90m\]$LABEL_ENV\[\033[0m\])-$TTY] \w $ '
fi

export PS1
