#include<stdio.h>
int global_init=10;
int global_uninit;
void mem_check(){
    int local_var1=7;
    printf("Memory address of local_var1:%p\n",(void*)&local_var1);
}
int main()
{
    printf("Memory address of global initialised variable:%p\n",(void*)&global_init);
    printf("Memory address of global uninitialised variable:%p\n",(void*)&global_uninit);
    printf("Memory address of main():%p\n",(void*)&main);
    printf("Memory address of mem_check():%p\n",(void*)&mem_check);
    mem_check();
    return 0;
}