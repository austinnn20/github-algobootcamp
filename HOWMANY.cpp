#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	scanf("%d", &a);
	if(a/10 < 1){
	    printf("1");
	}else if(a/10 >= 1 && a/10 < 10){
	    printf("2");
	}else if(a/10 >= 10 && a/10 < 100){
	    printf("3");
	}else{
	    printf("More than 3 digits");
	}
	return 0;
}
