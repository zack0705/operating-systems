a=$1
b=1
c=0
while [ 1 ]
do
	if [ $((a/b)) -ne 0 ]
	then
		b=$((b*10))
		c=$(( c+( (a%b)-c ) / (b/10) ))
	else
		break
	fi
done
echo $c

if [ $((c%2)) -eq 0 ]
then
	echo "even"
else
	echo "odd"
fi

