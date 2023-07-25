id -Gn $FT_USER | tr ' ' ',' | sed 's/_\([^,]\)/\1/g'

