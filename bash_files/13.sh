a=$(who | grep $1 -wc)
if [ $a -eq 0 ]
then
	echo "no"
else
	echo "yes"
fi

