#include <stdio.h>

int main(void) {
    int n;
	float x,y;
scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%f %f",&x,&y);
    if((y/x)>=1.07)
        printf("NO\n");
    else
    printf("YES\n");
}

	return 0;
}


