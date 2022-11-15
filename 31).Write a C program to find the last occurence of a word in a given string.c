#include <stdio.h>
int search(char*a, char*b)
{   
     int i,j,index=-1; 
       for(i=0;a[i];i++){ 
        if(a[i]==b[j])
         j++;
        else if (a[i]==b[0])
         j=1;
        else
          j=0;
        if(b[j]=='\0'){
         return i+1-j;
          j=0;
        }
         
    }
    return -1;
}
int main(){
printf("%d",search("programming","in"));
printf("%d",search("Tushar","ar"));
printf("%d",search("obdure","re"));
printf("%d",search("infotech","pq"));
}

//output
8 4 4 -1