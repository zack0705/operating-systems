echo "enter rows"
read z

for((i=1;i<=z;i++))
{
	for((j=1;j<=i;j++))
	{
		echo -n $i
	}
	echo " "
}

echo "enter rows"
read z

for((i=1;i<=z;i++))
{
	for((j=1;j<=i;j++))
	{
		echo -n $j
	}
	echo " "
}

echo "enter rows"
read z

for((i=1;i<=z;i++))
{
	for((j=0;j<i;j++))
	{
		if [ $((j%2)) -eq 0 ]
		then
			echo -n "|"
		else
			echo -n " "
		fi
	}
	echo -n "_"
	echo ""
}

echo "enter rows"
read z
for((i=0;i<z;i++))
{
	for((j=0;j<=i;j++))
	{
		echo -n "*"
	}
	echo
}

echo "enter rows"
read z
for((i=0;i<z;i++))
{
	for((j=0;j<=i;j++))
	{
		echo -n "*"
	}
	echo
	
}
for((i=z;i>=0;i--))
{
	for((j=0;j<=i;j++))
	{
		echo -n "*"
	}
	echo
	
}

echo "enter rows"
read z
for((i=0;i<z;i++))
{
	for k in $(seq 0 $((z-2-i)))
	do
		echo -n " "
	done
	
	for k in $(seq 0 $((1+2*i)))
	{
		if [ $((i+1%2)) -eq 0 ]
		then
			if [ $((k%2)) -eq 0 ]
			then
				echo -n " "
			else
				echo -n $((i+1))
			fi
		else
			if [ $((k%2)) -eq 0 ]
			then
				echo -n $((i+1))
			else
				echo -n " "
			fi
		fi
	}
	echo " "
}

echo "enter rows"
read z
for((i=0;i<=(z/2);i++))
{
	for k in $(seq 0 $((z/2-i)))
	do  
		echo -n " "
	done
	
	for k in $(seq 0 $((1+2*i)))
	{
		if [ $((i+1%2)) -eq 0 ]
		then
			if [ $((k%2)) -eq 0 ]
			then
				echo -n " "
			else
				echo -n "*"
			fi
		else
			if [ $((k%2)) -eq 0 ]
			then
				echo -n "*"
			else
				echo -n " "
			fi
		fi
	}
	echo " "
}
for i in $(seq 0 $((z/2-1)))
{
	for k in $(seq 0 $((i+1)))
	do
		echo -n " "
	done
	
	for k in $(seq 0 $((1+2*(z/2-1-i))))
	{
		if [ $((i+1%2)) -eq 0 ]
		then
			if [ $((k%2)) -eq 0 ]
			then
				echo -n " "
			else
				echo -n "*"
			fi
		else
			if [ $((k%2)) -eq 0 ]
			then
				echo -n "*"
			else
				echo -n " "
			fi
		fi
	}
	echo " "
}







