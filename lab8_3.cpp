#include<iostream>
using namespace std;

char before(char i){
	//Write your function definition here
	//ไม่ต้องเติม function main()
    int a = i ;
	char b = a ;
	if(a <= 91 && a > 48)
	{
		 a--;
		 if(a < 65)
		 {
			a += 26 ;
		 }
	
	}else 
		{
			a = 48 ;
		}
		 b= a ;
		return b ;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
