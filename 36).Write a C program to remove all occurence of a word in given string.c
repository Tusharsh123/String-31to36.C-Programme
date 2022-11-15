#include <stdio.h>
char* removeall(char*a, char*b)
{   
     int i,j,k; 
       for(i=0;a[i];i++){ 
        if(a[i]==b[j])
         j++;
        else if (a[i]==b[0])
         j=1;
        else
          j=0;
        if(b[j]=='\0'){
          i=i+1-j;
          for(k=i;a[k]=a[k+j];k++);
          j=0;       
     }
         
   }
    
    return a;    
}
void main(){
char a[100],b[100];
gets(a);
gets(b);
printf("%s\n",removeall(a,b));
printf("\n%s",a);
}