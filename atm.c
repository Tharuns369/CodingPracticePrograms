#include <stdio.h>

int main() {
	// your code goes here
	int x;
	float y;
	scanf("%d%f", &x, &y);
	if(x+0.50 > y){
	    printf("%.2f", y);
	}else if(x%5!=0){
	    printf("%.2f", y);
	}else{
	    printf("%.2f", y-x-0.50);
	}
	return 0;
}
