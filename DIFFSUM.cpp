#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a > b){
	    printf("%d", a-b);
	}else{
	    printf("%d", a+b);
	}
	return 0;
}
