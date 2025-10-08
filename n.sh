mkdir $1

TEST_SHELL="$1/test${1}.sh"
GEN_SHELL="$1/gen${1}.sh"


# Make files
cp template.cpp $1/${1}.cpp
#touch $TEST_SHELL 
#touch $GEN_SHELL
touch $1/input.txt

#Make gen file
echo "echo \"Generating binary\"" >> $GEN_SHELL
echo "g++ -o $1.exe $1.cpp" >> $GEN_SHELL

#Make test file
echo "echo \"Running test\"" >> $TEST_SHELL
echo "./$1.exe < input.txt" >> $TEST_SHELL

chmod +x $TEST_SHELL
chmod +x $GEN_SHELL

cd $1/
