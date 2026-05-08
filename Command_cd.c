#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

//      ./cdx       DirectoryPath
//      argv[0]     argv[1]
//      argc = 2

/*
    Accept New DirectoryPath
    Call chdir with that path
    Call getcwd to check the changed path
*/

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Error : Insufficient Arguments\n");
        printf("Use as : ./cdx DirectoryPath\n");

        return -1;
    }

    if(chdir(argv[1]) == -1)
    {
        printf("Error : Unable to change current directory\n");

        return -1;
    }

    char Buffer[1024] = {'\0'};

    getcwd(Buffer, sizeof(Buffer) - 1);

    printf("Current directory changed to %s\n", Buffer);
    
    return 0;
}