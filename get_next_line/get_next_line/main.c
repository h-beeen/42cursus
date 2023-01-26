#include "get_next_line.h"

int main() {
	char *line;
	int	fd;
    	int i = 1;
    
    if (!(fd = open("test.txt", O_RDONLY)))	// 1
    {
    	printf("\nError in open");
        return (0);
    }
    while (line = get_next_line(fd))		// 2
    {
    	printf("Gnl %d line : %s", i++, line);	
        free(line);				// 6	
    }
    printf("\n");
    free(line);
	close(fd);
	
    return (0);
}