echo "enter 3 nos"
read a
read b
read c
if [ $a -gt $b -a $a -gt $c ]
then
	echo $a
elif [ $b -gt $c ]
then
	echo $b
else
	echo $c
fi
tot=$((a+b+c))
avg=$((tot/3))
echo -n "avg is "
echo "scale=2;($a + $b + $c)/3"|bc
echo "total is $tot"

