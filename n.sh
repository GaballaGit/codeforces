mkdir $1

GEN_SHELL="$1/run${1}.sh"


# Make files
cp template.cpp $1/${1}.cpp
#touch $TEST_SHELL 
#touch $GEN_SHELL
touch $1/input.txt


# Gen and Test bash
echo "echo \"Generating binary\"" >> $GEN_SHELL
echo "g++ -o $1.exe $1.cpp" >> $GEN_SHELL

echo "echo \"Running test\"" >> $GEN_SHELL
echo "./$1.exe < input.txt" >> $GEN_SHELL

echo "rm ./$1.exe" >> $GEN_SHELL

chmod +x $GEN_SHELL


