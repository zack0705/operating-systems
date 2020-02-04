cal
date +"%D %R"
a=$(date +"%H")
if [ $a -lt 12 ]
then 
	echo "good morning"
elif [ $a -lt 16 ]
then
	echo "good afternoon"
else
	echo "good evening"
fi
a=$(whoami)
echo $a $HOME
who | cut -c10-13
echo $TERM
hostname
who --count

