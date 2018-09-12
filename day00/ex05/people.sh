ldapsearch "uid=z*" | grep -i '^cn:' | sort -r | cut -d ":" -f2
