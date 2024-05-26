#include<iostream>

int main()
{
	int a=0,b=0;
	std::cout << "Nhap so a : " ;
	std::cin >> a;
	std::cout << "Nhap so b : " ;
	std::cin >> b;
	if(a>b){
		std::cout << "a lon hon b" << std::endl;
	}else if(a < b){
		std::cout << "a be hon b" << std::endl;
	}else{
		std::cout << "a bang b" << std::endl;
	}
	return 0;
}
