#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LENGTH = 20;

void ShowMenu(void);
int Input(void);
int Output(int command);
int FindAcc(int accID);
int FindAccIndex(int accID);
void MakeAccount(void);
void AccountDeposit(void);
void AccountWithdraw(void);
void ShowAccountList(void);

#define MAKE_ACC 1
#define DEPOSIT 2
#define WITHDRAW 3
#define SHOW_LIST 4
#define EXIT 5

typedef struct
{
  int accID;
  int accMoney;
  char accName[NAME_LENGTH];
} Account;

Account list[101];
int list_count = 1;

int main(void)
{
  int status = 1;

  while(status)
  {
    ShowMenu();
    status = Output(Input());
  }
}

void ShowMenu(void)
{
  cout<<"------------------"<<endl;
  cout<<"1. Make Account"<<endl;
  cout<<"2. Account Deposit"<<endl;
  cout<<"3. Account Withdraw"<<endl;
  cout<<"4. Show Account List"<<endl;
  cout<<"------------------"<<endl;
  cout<<"5. Exit Program"<<endl;
  cout<<"------------------"<<endl;
}

int Input(void)
{
  int command;

  cout<<"Command >> ";
  cin>>command;

  return command;
}

int Output(int command)
{
  if(command != 5)
  {
    if(command == MAKE_ACC)
      MakeAccount();
    if(command == DEPOSIT)
      AccountDeposit();
    if(command == WITHDRAW)
      AccountWithdraw();
    if(command == SHOW_LIST)
      ShowAccountList();
  
    return 1;
  }

  return 0;
}

int FindAcc(int accID)
{
  int index = 0;

  while(++index < list_count)
    if(list[index].accID == accID)
      return accID;
  
  return 0;
}

int FindAccIndex(int accID)
{
  int index = 0;

  while(++index < list_count)
    if(list[index].accID == accID)
      return index;
  
  return 0;
}

void MakeAccount(void)
{
  int accID;
  char accName[NAME_LENGTH];

  cout<<"[Make Account]"<<endl;
  cout<<"ID : ";
  cin>>accID;
  cout<<"NAME : ";
  cin>>accName;

  list[list_count].accID = accID;
  list[list_count].accMoney = 0;
  strcpy(list[list_count].accName, accName);
  list_count += 1;
}

void AccountDeposit(void)
{
  int accID;
  int accMoney;

  cout<<"[Account Deposit]"<<endl;
  cout<<"ID : ";
  cin>>accID;
  cout<<"Money : ";
  cin>>accMoney;

  if(FindAcc(accID))
  {
    list[FindAccIndex(accID)].accMoney += accMoney;
    return;
  }

  cout<<">> Dont exist ID"<<std::endl;
}

void AccountWithdraw(void)
{
  int accID;
  int accMoney;

  cout<<"[Account Withdraw]"<<endl;
  cout<<"ID : ";
  cin>>accID;
  cout<<"Money : ";
  cin>>accMoney;

  if(FindAcc(accID))
    if(list[FindAccIndex(accID)].accMoney > accMoney)
    {
      list[FindAccIndex(accID)].accMoney -= accMoney;
      cout<<"Success Account Withdraw"<<endl;
    }
  
  cout<<">> Failed Account Withdraw"<<endl;
}

void ShowAccountList(void)
{
  int index = 0;

  while(++index < list_count)
    cout<<index<<"\t"<<list[index].accName<<"\t"<<list[index].accID<<"\t"<<list[index].accMoney<<" $"<<endl;
}