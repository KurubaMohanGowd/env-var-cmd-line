#include<stdio.h>
//envp, the 3rd parameter of main function will take the environment variable array pointer
int main(int args,char **argv, char **envp)
{
    for(int i=0;envp[i]!=NULL;i++)
    {
        printf("\"%s\"\n",envp[i]);
    }
}
