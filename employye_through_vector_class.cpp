#include<iostream>
#include<vector>
using namespace std;
#include<conio.h>
#include<string>
#include<windows.h>
class employee{
    public:
    string name,id,address;
    int contact,salary;
};

vector<employee> employes;
int total{0};
void enter_data()
{ int choice;
   employee x;
   cout<<endl<<"how many emplyees data do you want to enter?";
   cin>>choice;
   for(int i=total;i<total+choice;i++)
   {
    cout<<"enter data for employee "<<i+1<<endl;
    cout<<endl;
    cout<<"enter name: ";
    cin>>x.name;
    employes.push_back(x.name);
    
    cin>>e[i].name;


   }

}

void main()
{  string name,password,name1,password1;
char input;
    cout<<"*******EMPLOYEE MANAGEMENT SYSTEM*******"<<endl;
    cout<<endl<<endl<<"******CREATE ACCOUNT******"<<endl;
    cout<<"enter username: ";
    cin>>name;
    cout<<endl;
    cout<<"enter password: ";
    cin>>password;
    cout<<endl<<"your account is being created";
    for(int i=0;i<6;i++)
    {
        cout<<".";
        Sleep(2000);
    }
    cout<<endl<<"your account is created"<<endl;
    system("CLS");
    start:
     cout<<"********login********";
     cout<<endl<<"username: ";
     cin>>name1;
     cout<<endl<<"password: ";
     cin>>password1;
     if(name1==name && password1==password)
     {
            system("CLS");
            while (1){
            
            cout<<"*****WELCOME*****"<<endl;
            cout<<endl<<"1. enter data"<<endl;
            cout<<"2. show data"<<endl;
            cout<<"3. search data"<<endl;
            cout<<"4. update data"<<endl;
            cout<<"5. delete data"<<endl;
            cout<<"6. logout"<<endl;
            cout<<"7. exit"<<endl;
            cin>>input;
            switch(input)
            {
                case '1':
                enter_data();
                break;

                case '2':
                show_data();
                break;

                case '3':
                search_data();
                break;

                case '4':
                update_data();
                break;

                case '5':
                delete_data();
                break;

                case '6':
                goto start;
                break;

                case '7':
                exit(0);
                break;

                default:
                cout<<"\a please enter a valid option"<<endl;
                break;
            }

     }}
     else if(name1!=name)
     {
        cout<<endl<<"\a username incorrect!!"<<endl;
        goto start;
     }
     else if(password1!=password)
     {
        cout<<endl<<"\a password incorrect!!";
        goto start;
     }

}