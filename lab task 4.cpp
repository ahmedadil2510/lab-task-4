#include <iostream>

using namespace std;
int main()
{
//	LAB TASK 1
	int sum;
	int x;
	int p;
	for(int d = 0; d<10; d+=1){
		cin>>p;
		sum = sum + p;
	}
	cout<<"The sum of the first 10 natural numbers is "<<sum <<endl;
	
	
	
	
//	LAB TASK 2
	int num;
	int m;
	cout<<"Please enter the number"<<endl;
	cin>>num;
	for(int t = 0; t<=10; t+=1){
		m = t*num;
		cout<<num <<"x" <<t <<"=" <<m <<endl;
	}

//	LAB TASK 3
	int n;
	int f;
	int fa = 1;
	cout<<"Please enter the number"<<endl;
	cin>>n;
	for(int y = n; y>=2; y -=2){
		f = y * (y-1);
		fa = fa * f;
	}
	cout<<"The factorial of the given number is "<<fa <<endl;
	
//	LAB TASK 4
	int z ;
	int a ;
	int th;
	int l;
	cout<<"Please enter the limit of the sequence:"<<endl;
	cin>>l;
	cout<<"Please enter the first two numbers:"<<endl;
	cin>>a;
	cin>>z;
	for(int i = 0; i<=l-3; i+=1){
		th = z+a;
		a = z;
		z = th;

		cout<<th <<endl;
	}	
	
	return 0;
}


