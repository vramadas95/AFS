#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
    int fd = open("/tmp/fs/a.txt", O_CREAT|O_RDWR);
    char *c = (char*)calloc (100, sizeof(char));
    if (fd == -1) {
        printf("ERROR Could not open file\n");
    }
    else {
        int sz = read (fd, c, 5);
        c[sz] = '\0';
        printf("Read - %s\n", c);
        return 0;
    }

}
