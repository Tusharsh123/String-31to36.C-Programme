#include <stdio.h>
int search(char*a, char*b)
{   
     int i,j=0; 
       for(i=0;a[i];i++){ 
        if(a[i]==b[j])
         j++;
        else if (a[i]==b[0])
         j=1;
        else
          j=0;
        if(b[j]=='\0')
         return i+1-j;
         
    }
    return -1;
}
int main(){
printf("%d",search("programming","ro"));
printf("%d",search("Tushar","us"));
printf("%d",search("obdure","ob"));
printf("%d",search("infotech","pq"));
}

//output
//110-1
