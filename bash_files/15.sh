cat>file

for i in $*
do
	
	echo $(tail -n 3 $i) >> file
done


