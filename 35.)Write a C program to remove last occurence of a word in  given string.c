#include <stdio.h>
char* removelast(char*a, char*b)
{   
     int i,j,index=-1,len; 
       for(i=j=0;a[i];i++){ 
        if(a[i]==b[j])
         j++;
        else if (a[i]==b[0])
         j=1;
        else
          j=0;
        if(b[j]=='\0'){
          index=i+1-j;
          len=j;
          j=0;       
     }
         
   }
    if(index!=-1)
       for(i=index;a[i]=a[i+len];i++);
     return a;    
}
void main(){
char a[100],b[100];
gets(a);
gets(b);
printf("%s\n",removelast(a,b));
puts(a);
}