#include "path.h"

static char path_buf[1024];

FILE *search_file (char *file_name)
{
	int i;
	FILE *file_in;
	
	for (i = 0; i < npath; i++) {
		strcpy (path_buf, path_list[i]);
		strcat (path_buf, file_name);
		
		if ((file_in = fopen (path_buf, "r")) != NULL)
			return file_in;
	}
	
	return NULL;
}
