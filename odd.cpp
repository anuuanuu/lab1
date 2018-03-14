#include<iostream>

using namespace std;

int main(void)
{
	int key;
	cin>>key;
	cout<<"you number"<<key<<endl;
	while(key!=1)
	{
		if((key%2)==1)
			key=key*3+1;
		else
			key=key/2;

		cout<<"now"<<key<<endl;
	}

	return 0;
}


