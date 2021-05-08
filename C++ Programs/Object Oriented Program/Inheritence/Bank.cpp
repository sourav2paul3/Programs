//PROGRAM FOR BANK A/C DETAILS

#include <iosteam>
#include <cstring>
using namespace std;

class Customer
	{
		private:char name[20],accnum[20],type[20];
		public:void setCustomer(char *name,car *accnum,char *type)
					{
						strcpy(this->name,name);
						strcpy(this->accnum,accnum);
						strcpy(this->type,type);
					}
				void putCustomer()
					{
						cout<<"\nCustomer name:"<<name
							<<"\nAccount number:"<<accnum
							<<"\nAccount type:"<<type;
					}
	};
	
class Savigs_account:public Customer
	{
		protected: double sbalance;
		public: void set_sbalance(int a)
					{sbalance=sbalance+a;
					}
				void put_balance()
					{
						cout<<"\nSavings account balance:"<<sbalance;
					}
	};
	
class Current_account:public Customer
	{
		protected:double cbalance;
		public: void set_sbalance(int a)
					{
						cbalance=cbalance+a;
					}
				void put_balance()
					{
						cout<<"\nCurrent account balance:"<<cbalance;
					}
				int check_balance()
					{
						if(cbalance==500)
							return 0;
						return 1;
					}
	};

int main()
	{
		cout<<"\n1:To create an account"
			<<"\n2:To deposite money"
			<<"\n3:To display balance"
			<<"\n4:To Compute interest"
			<<"\n5:Withdraw"
			<<"\n6:Check Minimum balance"
			<<"\n0:To exit
			<<"\nEnter your choice:";
			int i;
			cin>>i;
			do{
				switch(i)
					{
						case 1:cout<<"\n1:Savings account"
									<<"\n2:Current account"
									<<"\nEnter your choice:"
									int acc;
									cin>>acc;
									char type[10];
									if(acc==1)
										type='SAVINGS';
									else
										type='CURRENT';
									fflush(stdin);
									cout<<"\nEnter account holder's name:";
									char name[20],number[20];
									gets(name);
									fflush(stdin);
									cout<<"\nEnter account number:";
									gets(number);
									
									break;
						case 2: 
