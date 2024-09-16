#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
 printf("before fork\n");
 pid_t p=fork();
 if(p<0)
 {
  printf("fork failed\n"); 
 }
else if(p==0)
 {
 printf("my is :%d\n", getpid());
 printf("my parent id is :%d\n", getppid());
 }
 else
{
 printf("my id is :%d\n", getpid());
 printf("my child's id is :%d\n",p);
}
printf("done\n");
}
