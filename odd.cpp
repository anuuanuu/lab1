#include<iostream>

using namespace std;

int main(void)
{
	int key;
	cout<<"請輸入一個數字"<<endl;
	cin>>key;
	cout<<"you enter number:"<<key<<endl;
	while(key!=1)
	{
		if((key%2)==1)
			key=key*3+1;
		else
			key=key/2;

		cout<<" "<<key<<endl;
	}

	return 0;
}


