Install MINGW-W64 and add 'bin' folder path in environment variables.
Install GitBash and check if 'bin' folder path is added in environment variables.
Install cxxtest-4.4, keep a copy of the folder in 'C' drive; add the 'bin' folder path in environment variables and make a copy of 'cxxtest' folder to the 'include' folder of MINGW-W64.



Test and validate the written code in Local machine
Open the terminal in VSCode and then open GitBash and type the following command:

Command 1 To create test.cpp file from the test.h file in the folder 
  cxxtestgen --error-printer test.h -o test.cpp 

Command 2 To create the executable file, that is, runner.exe.
  g++ bitmap.c test.cpp -o runner.exe

Command 3 To view test report in Local Machine
  ./runner.exe 
