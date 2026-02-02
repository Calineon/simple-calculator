#include <iostream>
void calculator() {
	while (true) {
		int num1, num2;
		char opreator;
		int result;
		std::cout << "enter frist number";
		std::cin >> num1;
		std::cin >> opreator;
		std::cout << opreator;
		std::cout << "enter secend number";
		std::cin >> num2;
		if(operator=='+'){
        result=num1+num2;
		std::cout<<"result sum is"<<result;
	    }
	   if(operator=='-'){
       result=num1-num2;
	   std::cout<<"result sum is"<<result;
	   }
       if(operator=='*'){
       result=num1*num2;
	   std::cout<<"result sum is"<<result;
	   }
       else if(operator=='/'){
         if(num2!=2/0){
		result=num1/num2;
		std::cout<<"result sum is"<<result;
		}
	}
int main() {
	calculator();
	return 0;
}
