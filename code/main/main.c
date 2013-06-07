#include <stdio.h>

#include "flag.h"
#include "path.h"

//$文件：main.c
//$描述：Simple Compiler的运行从这里开始。主要负责解析用户的输入，然后依次调用各个模块的主函数。

//$函数：int main (int argc, char *argv[])
//$描述：一切程序的起点
//$参数：argc
//$描述：传入的参数的个数
//$参数：argv
//$描述：指向每一个传入参数的指针
int main (int argc, char *argv[])
{
	int i;
	
	path_list[npath++] = "\0";
	for (i = 0; i < argc; i++)
		path_list[npath++] = argv[i];
		
	if (search_file ("t.c") == NULL)
		printf ("no such file.\n");
	else
		printf ("file opened.\n");
}
