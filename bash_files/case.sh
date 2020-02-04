echo "enter choice"
read choice

case "$choice" in
1) ls -l ;;
2) who ;;
3) cat > file1 ;;
*) echo "Wrong"
esac

