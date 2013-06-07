#include <stdio.h>
#include <string.h>
#include "preproc.h"

int main ()
{
	int len, no = 0;
	FILE *file;
	char buf[1024];
	struct SLIST *line_tail;
	struct LINE_NOTE *p;
	
	file = fopen ("../base/stack.h", "r");
	
	if (file == NULL) {
		printf ("wrong path.\n");
		return -1;
	}
	
	printf ("FILE size : %d\n", sizeof (FILE));
	
	line_tail = &line_list;
	while (fgets (buf, 1024, file) != NULL) {
		no ++;
		len = strlen (buf);
		p = new_line_note (buf, len, no);
		
		slist_insert_after (line_tail, p);
		line_tail = line_tail->next;
	}
	
	for (line_tail = line_list.next; line_tail != NULL; line_tail = line_tail->next) {
		p = (struct LINE_NOTE *)(line_tail->data);
		printf (p->line);
	}
	
	fclose (file);
	
	printf ("#################\n");
}

void skip_space (char *in) {
	if (*in == ' ' || *in == '\t')
		in++;
}

void skip_annotation () {}

struct LINE_NOTE *new_line_note (char *line, int len, int line_no) {
	struct LINE_NOTE *p;
	
	p = memalloc (sizeof (struct LINE_NOTE));
	
	p->line = memalloc (len + 1);
	strcpy (p->line, line);
	p->str_len = len;
	p->line_no = line_no;
}











/*

标记
line_start ：用于标记是否为行首部，判断是否为宏


while (文件栈不为空) {
	while (1) {
		
		int c = skip_space ();
		
		if ( c == '#')
			调用宏的处理函数
		else if ( c == 行注释 || c == 块注释)
			调用注释处理函数
		else if ( c == 引号 )
			调用跳过字符串函数
		else if ( c == 字母或下划线 )
			调用获取单词函数
		
	}
}

*/


