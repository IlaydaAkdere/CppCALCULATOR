#include  <iostream>
using namespace std;

int main (){
	cout << "********************************"<<endl;
	cout << "* *" << endl;
	cout << "* CALCULATOR *" << endl;
	cout << "* use + for addition *" << endl;
	cout << "* use - for minus *" << endl;
	cout <<"* use * for multiplication *" << endl;
	cout <<"* use / for division *" << endl;
	cout << "* *" << endl;
	cout << "* *"<< endl;
	cout <<"*********************************" <<endl;
	
	double number1,number2,conclusion;
	char islem;
	
	cout << "please enter the first number";
	cin>>number1;
	cout<<endl;
	
	cout<< "enter transaction please";
	cin>>transaction;
	cout<<endl;
	
	cout<< "please enter the seconf number";
std: cin>>number2;
	cout<<endl;
	
	switch(transaction){
		case '+':
			conclusion=(number1+number2);
			cout<<"result of collection" <<conclusion<<endl;
			break;
		case'-':
			conclusion=(number1-number2);
			cout<<"result of subtraction" <<conclusion<<endl;
			break;
		case'*':
			cout<<"result of multiplication" <<conclusion<<endl;
			break;
		case'/':
		cout<<"result of division" <<conclusion<<endl;
		break;	
	}
return 0 ;
}

























