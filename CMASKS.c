#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&y);
        if((x*100)>(y*10))
        printf("cloth\n");
        else if((x*100)<(y*10))
        printf("Disposable\n");
        else
        printf("cloth\n");
        
    }
	return 0;
}

