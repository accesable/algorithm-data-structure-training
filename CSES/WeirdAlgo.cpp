#include <iostream>

int main(){
	long long n;
	std::cin>> n;
	while(1){
		std::cout << n <<" ";
		if(n==1){
			break;
		}
		else if(n%2==0){
			n/=2;
		}else{
			n=n*3+1;
		}
	}
	return 0;
}
