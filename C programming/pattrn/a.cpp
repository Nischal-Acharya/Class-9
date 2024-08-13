//write a program to swap two number without using third variable.
#include<iostream>
using namespace std;
class A{
	
	public:
		int a,b;
		void get(int a,int b){
			a=a-b;
			b=b-a;
			a=a-b;
			cout<<"value of a"<<a<<endl;
			cout<<"value of b"<<b<<endl;
		}
};
         int main() {
         A obj;
         int a,b;
		 cin>>a;
		 cin>>b;
		 obj.get(a,b);
		 }

