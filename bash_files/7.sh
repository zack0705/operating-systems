echo "enter a"
read a
b=0
for((i=2; i<$a; i++))
{
	if [ $((a%i)) -eq 0 ]
	then
		b=1
	fi
}

if [ $b -eq 0 ]
then
	echo "prime"
else
	echo "not prime"
fi

