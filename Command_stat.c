#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

//      ./statx    FileName
//      argv[0]     argv[1]
//      argc = 2

/*
    Accept File Name from Command Line
    Call access to check the existance of file
    Call stat system call to get file's meta data
    Display the metadata
*/

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Error : Insufficient Arguments\n");
        printf("Use as : ./statx FileName\n");

        return -1;
    }

    if(access(argv[1], F_OK) == 0)
    {
        struct stat sobj;
        int iRet = 0;

        iRet = stat(argv[1], &sobj);

        if(iRet == -1)
        {
            printf("Error : Unable to fetch statistical information\n");

            return -1;
        }

        printf("File name : %s\n", argv[1]);
        printf("File size : %ld\n", (long)sobj.st_size);
        printf("Inode number : %ld\n", (long)sobj.st_ino);
        
    }
    else
    {
        printf("Error : File Not Found\n");
        return -1;
    }
    
    return 0;
}