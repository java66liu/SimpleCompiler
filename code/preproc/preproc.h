#include "base/list.h"
#include "base/stack.h"

struct LINE_NOTE;
struct FILE_INFO;

struct SLIST line_list;

void skip_space (char *in);
void skip_annotation ();

struct LINE_NOTE *new_line_note (char *line, int len, int line_no);

struct LINE_NOTE {
	int line_no;
	int str_len;
	char *line;
};

struct FILE_INFO {
	char *file_name;
	FILE *file_ptr;
	int cur_line_no;
};
