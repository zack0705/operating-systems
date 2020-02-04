echo "enter string"
read a
j=0
for((i=0; i<${#a}; i++))
{
	if [ ${a:i:1} != ${a:${#a}-i-1:1} ]
	then
		j=1
	fi
}

if [ $j -eq 0 ]
then 
	echo "ok"
else
	echo "no"
fi

