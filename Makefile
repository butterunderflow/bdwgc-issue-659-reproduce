libtest.dll: test.cpp
	g++ test.cpp bdwgc/build/libgc.dll -o libtest.dll --shared

main.exe: main.cpp libtest.dll
	g++ main.cpp libtest.dll -o main.exe
