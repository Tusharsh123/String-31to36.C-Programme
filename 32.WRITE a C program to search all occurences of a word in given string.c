#include <stdio.h>
int search(char*a, char*b)
{   
     int i,j,c=0; 
       for(i=0;a[i];i++){ 
        if(a[i]==b[j])
         j++;
        else if (a[i]==b[0])
         j=1;
        else
          j=0;
        if(b[j]=='\0'){
          c++;
          j=0;
        }
         
    }
    return c;
}
int main(){
printf("%d",search("oracle corporation","or"));
printf("%d",search("Tusharsh","sh"));
}

//output
3 2