#include <stdio.h>
//tabuada 1 a 10 
int main(){
    int x,y=1,b; 
    for (x=0;x<=10;x++){
        b=y*x;
        printf("\n%i x %i = %i",y,x,b);
        if (x==10){
            y+=1;
            x=0;
            if (y==11){
                break;
            }
        }
        
    }

    return 0;
}
