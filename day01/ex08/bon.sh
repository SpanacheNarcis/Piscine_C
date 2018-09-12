ldapsearch "cn=*bon*" | grep "cn:" | cut -d ":" -f2 | cut -d " " -f3 | grep -i "BON" | wc -l | cut -c6-
