cat /etc/passwd | sed 's/#.*//' | sed 's/:.*//' | sed -n 'p;n'| rev | sort -r | head -n $FT_LINE2 | tail -n $FT_LINE1 | tr "\n"  " " | tr " " ","| sed "s/,/, /g" | rev | cut -c2- | rev | sed 's/.$/./' | cat -e
