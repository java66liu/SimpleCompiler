#ifndef __PATH__
#define __PATH__

#include <stdio.h>
#include <string.h>

#define MAX_PATH 10

//$文件：path.h
//$描述：同时也包含一些关于路径以及输出文件名的字符串。

//$全局变量：
//$描述：
int npath;

//$全局变量：
//$描述：
char *path_list[MAX_PATH];

//$全局变量：input_file_name
//$类型：char *
//$描述：约定只能有一个输入文件。
char *input_file_name;

//$全局变量：output_file_name
//$类型：char *
//$描述：约定只能有一个输出文件。
char *output_file_name;

FILE *search_file (char *file_name);

#endif
