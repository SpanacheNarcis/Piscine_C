find . -type f -name "*.sh" | rev | cut -c4- | rev | cut -d "/" -f2
