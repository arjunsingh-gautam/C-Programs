#include<stdio.h>
int main()
{
    union Data{
        int i;
        float f;
        char str[20];
    };
    union Data d;
    d.i=20;
    d.f=45.393;
    printf("Enter a string:");
    fgets(d.str,20,stdin);
    printf("d.i=%d\nd.f=%f\nd.str=%s\n",d.i,d.f,d.str);
   /* 
    Output:
    d.i=1969910337 // Union can only read the element last written which is str
    d.f=297195998394172212569924245127168.000000 // Union can only read the element last written which is str
    d.str=Arjun
     */
    return 0;


}