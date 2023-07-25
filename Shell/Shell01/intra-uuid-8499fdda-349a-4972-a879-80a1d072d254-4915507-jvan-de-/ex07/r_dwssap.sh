cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | rev | sort -r | awk -v l1="$1" -v l2="$5" -F ':' 'NR >= l1 && NR <= l2 { printf "%s, ", $1 } END { if (NR >= l1 && NR <= l2) printf "\b\b.\n"; else print "" }'

