#include<iostream>
#include<vector>
using namespace std;
#include<conio.h>
#include<string>
#include<windows.h>
struct employee{
    string name,id,address;
    long long int contact;
    int salary;
};
employee e[100]; 

int total{0};
void enter_data()
{ int choice;
   cout<<endl<<"how many emplyees data do you want to enter?";
   cin>>choice;
   for(int i=total;i<total+choice;i++)
   {
    cout<<"enter data for employee "<<i+1<<endl;
    cout<<endl;
    cout<<"enter name: ";
    cin>>e[i].name;
    cout<<endl<<"enter id: ";
    cin>>e[i].id;
    cout<<endl<<"enter address: ";
    getline(cin,e[i].address);
    cout<<endl<<"enter contact no: ";
    cin>>e[i].contact;
    cout<<endl<<"enter salary: ";
    cin>>e[i].salary;
    


   }
   total=total+choice;

}

void show_data()
{
    if(total!=0)
    { 
        for(int i=0;i<total;i++)
    {
        cout<<"data of employee "<<i+1<<endl;
        cout<<"name: "<<e[i].name<<endl;
        cout<<"id: "<<e[i].id<<endl;
        cout<<"address: "<<e[i].address<<endl;
        cout<<"contact no: "<<e[i].contact<<endl;
        cout<<"salary: "<<e[i].salary<<endl;

    }
    } 
    else
    cout<<"you have not entered any data";



}

void search_data()
{string id;
    if(total!=0)
    {
        cout<<"enter the id you want to search: ";
            cin>>id;
        for(int i=0;i<total;i++)
        {
            if(id==e[i].id)
            {
                cout<<"data of employee "<<i+1<<endl;
                cout<<"name: "<<e[i].name<<endl;
                cout<<"id: "<<e[i].id<<endl;
                cout<<"address: "<<e[i].address<<endl;
                cout<<"contact no: "<<e[i].contact<<endl;
                cout<<"salary: "<<e[i].salary<<endl;
                break;
            }
            if(i==total-1)
            cout<<"no such record found"<<endl;

        }

    }
    else
    cout<<"\a no data entered to search!!! ";
}

void update_data()
{  string id;
     if(total!=0)
     {
           cout<<"enter id to update: ";
           cin>>id;
             for(int i=0;i<total;i++)
             {
                if(id==e[i].id)
                {
                    cout<<"********previous data********"<<endl;
                    cout<<"data of employee "<<i+1<<endl;
                    cout<<"name: "<<e[i].name<<endl;
                    cout<<"id: "<<e[i].id<<endl;
                    cout<<"address: "<<e[i].address<<endl;
                    cout<<"contact no: "<<e[i].contact<<endl;
                    cout<<"salary: "<<e[i].salary<<endl;
                    cout<<"********enter new data********"<<endl;
                    cout<<"enter name: ";
                        cin>>e[i].name;
                    cout<<endl<<"enter id: ";
                        cin>>e[i].id;
                    cout<<endl<<"enter address: ";
                        getline(cin,e[i].address);
                    cout<<endl<<"enter contact no: ";
                        cin>>e[i].contact;
                    cout<<endl<<"enter salary: ";
                        cin>>e[i].salary;
                        break;
                }
                      if(i==total-1)
                      cout<<"no such id available"<<endl;
             }
     }
     else
     cout<<"\n no any data present to update"<<endl;

}
void delete_data()
{ char a;
  string id;
    if(total!=0)
    {
        cout<<"1.to delete entire database"<<endl;
        cout<<"2. to delete a specific employee"<<endl;
           cin>>a;
           if(a=='1')
           {
            total=0;
           }
           else if(a=='2')
           {
            cout<<"enter the id the employee you want to delete:";
            cin>>id;
            for(int i=0;i<total;i++)
            {
                if(id==e[i].id)
                {
                    for(int j=i;j<total;j++)
                    {
                        e[j].name=e[j+1].name;
                        e[j].id=e[j+1].id;
                        e[j].address=e[j+1].address;
                        e[j].contact=e[j+1].contact;
                        e[j].salary=e[j+1].salary;
                        total--;
                        break;
                        
                    }
                if(i==total-1)
                cout<<"no such id found: ";
                }
            }
           }
           else
           cout<<"please enter a valid choice"<<endl;

    }
    else
    cout<<"\a no data present to delete!! ";
}

int main()
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
    return 0;
}