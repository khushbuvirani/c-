#include<iostream.h>
#include<conio.h>
class bank_acc
{
	private:
		char name[30];
		int acc_no;
		int balance;
		char type_acc[50];
	public:
		void setdata()
		{
			cout<<"enter the name:"<<endl;
			cin>>name;
			cout<<"enter the acc_no: "<<endl;
			cin>>acc_no;
			cout<<"enter the type_acc: "<<endl;
			cin>>type_acc;
		}
		void diposit()
		{
			float amount;
			cout<<"enter the diposit: "<<endl;
			cin>>amount;
			balance=balance+amount;
			cout<<"balance is: "<<balance<<endl;
		}
		void withdraw()
		{
			float amount;
			cout<<"enter the withdrow amount:"<<endl;
			cin>>amount;
			balance=balance-amount;
			cout<<"balance is: "<<balance<<endl;
		}
		void displaydata()
		{
			cout<<"data is:-> "<<endl;
			cout<<"*************************************"<<endl;
			cout<<"account no: "<<acc_no<<endl;
			cout<<"accounter name: "<<name<<endl;
			cout<<"balance is: "<<balance<<endl;
			cout<<"type of account is: "<<type_acc<<endl;
			cout<<"*************************************"<<endl;
		}
};
void main()
{
	int n,i;
	clrscr();
	cout<<"how many create a account in this bank?"<<endl;
	cin>>n;
	bank_acc b1[10];
	for(i=0;i<n;i++)
	{
		cout<<"enter"<<i<<"customer"<<endl;
		b1[i].setdata();
		b1[i].diposit();
		b1[i].withdraw();
	}
	for(i=0;i<n;i++)
	{
		b1[i].displaydata();
	}
	getch();
}




