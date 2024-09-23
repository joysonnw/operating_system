#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<stdio.h>
int main()
{
char* cmnd="ls";
char* argument[]={"ls", "-l", NULL};
printf("before execvp()\n");
pid_t p=fork();
if (p==0)
{
printf("child process\n");
int status = execvp(cmnd, argument);
if (status==-1)
{
printf("terminated\n");
exit(1);
}
}
else
{
printf("parent process\n");
wait(NULL);
printf("done\n");
}
}
