echo "enter year"
read a
b=`expr $a % 100`
if [ $b -eq 0 ]
then
	c=`expr $a % 400`
	if [ $c -eq 0 ]
	then
		echo "yes"
	else
		echo "no"
	fi
else
	c=`expr $a % 4`
	if [ $c -eq 0 ]
	then
		echo "yes"
	else
		echo "no"
	fi
fi

