#include<iostream>
#include<climits>
int main(){
	using namespace std;
	int n_int =INT_MAX;
	short  n_short = SHRT_MAX;
	long n_long = LONG_MAX;
//	longlong n_llong =LLONG_MAX;
	cout << sizeof(int) << endl;
	cout << sizeof n_short << endl;
	cout << sizeof n_long << endl;
//	cout << sizeof n_llong << endl;
	cout << endl;
	
	cout << "Maximum values"<<endl;
	cout << " int :"<<n_int <<endl;
	cout << " short :"<<n_short <<endl;
	cout << " long :"<<n_long <<endl;
//	cout << " long long"<<n_llong <<endl<<endl;
	
	cout << " Minimum int value = "<<INT_MIN<<endl;
	cout << " Bits per byte = "<< CHAR_BIT <<endl;
	
	return 0;
}
