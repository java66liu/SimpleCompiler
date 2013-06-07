CC = cc
DEL = del

ROOT_PATH = ../../
CODE_PATH = $(ROOT_PATH)code/
TEST_FILE_PATH = $(ROOT_PATH)test/testfile
TEST_CODE_PATH = $(ROOT_PATH)test/testcode

PREPROC_OBJ = $(CODE_PATH)base/lib.o $(CODE_PATH)base/list.o $(CODE_PATH)base/stack.o preproc.o

%.o : %.c 
	$(CC) -c $*.c -o $*.o -I $(CODE_PATH)
	
.PHONY : clean preproc

preproc : $(PREPROC_OBJ)
	$(CC) $(PREPROC_OBJ) -o preproc
	preproc.exe

clean :
	$(DEL) *.o
	$(DEL) *.exe

