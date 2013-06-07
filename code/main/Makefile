CC = cc
DEL = del

ROOT_PATH = ../../
CODE_PATH = $(ROOT_PATH)code/
TEST_FILE_PATH = $(ROOT_PATH)test/testfile/
TEST_CASE_PATH = $(ROOT_PATH)test/testcase/

%.o : %.c
	$(CC) -c $*.c -o $*.o
	
%.exe : %.c
	$(CC) $*.c -o $*.exe
	
main.exe : main.c path.o path.h flag.h
	$(CC) main.c path.o -o main.exe
	
.PHONY : clean

clean :
	$(DEL) *.o
	$(DEL) *.exe
