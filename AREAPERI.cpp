#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l, b;
	scanf("%d", &l);
	scanf("%d", &b);
	int a = l*b;
	int p = 2*(l + b);
	if(a > p){
	    printf("Area\n");
	    printf("%d", a);
	}else if(p > a){
	    printf("Peri\n");
	    printf("%d", p);
	}else if(p = a){
	    printf("Eq\n");
	    printf("%d", a);
	}
	return 0;
}
