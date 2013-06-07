#ifndef __FLAG__
#define __FLAG__

//$文件：flag.h
//$描述：定义了各种全局的功能标志，这些标志都由main函数解析输入并且初始化。

int param_error = 0;
int preproc_error = 0;
int lexical_error = 0;
int grammar_error = 0;
int syntax_error = 0;
int intermediate_error = 0;
int assembly_error = 0;

#define OPTIMIZE_NONE 0
#define OPTIMIZE_SPEED 1
#define OPTIMIZE_SPACE 2

int optimize_flag;

int preproc_flag;

#define FLEICAL_SIMPLE 0
#define FLEICAL_COMPLETE 1
int lexical_flag;

#endif
