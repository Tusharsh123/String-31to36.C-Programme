#include <stdio.h>
int removefirst(char*a, char*b)
{   
     int i,j; 
       for(i=j=0;a[i];i++){ 
        if(a[i]==b[j])
         j++;
        else if (a[i]==b[0])
         j=1;
        else
          j=0;
        if(b[j]=='\0'){
          for(i=i+1-j;a[i]=a[i+j];i++);
          break;        
     }
         
   }
    
}
int main(){
printf("%d",search("corporation","or"));
removefirst(a,b);
puts(a);
}

