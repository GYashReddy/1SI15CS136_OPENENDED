#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;

class ITEM
{
    string item_name;
    int item_code;
    int item_quantity;
    
    public: ITEM();
            float item_price;
            float per_item_price;
            ITEM(string,int,float);
            friend istream& operator>>(istream&,ITEM&);
            friend ostream& operator<<(ostream&,ITEM&);
            
};

class BILL:public ITEM
{
   public:  float total;
            float grand_total;
            float VAT;
            void Print_BILL(ITEM&); 
            
};

class ADDRESS
{
    char name_Add[50];
    char Addline1[50];
    char Addline2[50];
    char city[10];
    char pincode[10];
    char contact[15];
    
    public: void Get_Address();
            void Display_Address();
};



void ADDRESS::Get_Address()
{
    cout<<"Enter your details:\n";
    cout<<"Name:";
    getchar();
    cin.getline(name_Add,100);
    cout<<"Address line 1:";
    cin.getline(Addline1,100);
    cout<<"Address line 2:";
    cin.getline(Addline2,100);
    cout<<"City:";
    cin.getline(city,19);
    cout<<"PIN:";
    cin.getline(pincode,7);
    cout<<"contact number:";
    getchar();
    cin.getline(contact,11);
}

void ADDRESS::Display_Address()
{
    cout<<"\n\n###########################\n";
    cout<<"Delivery Address:\n";
    cout<<"-------------------------\n";
    cout<<name_Add<<"\n"<<Addline1<<"\n"<<Addline2<<"\n"<<city<<"\n"<<pincode<<"\n"<<contact<<endl;
    cout<<"-------------------------\n";
    cout<<"##########################\n";
}
void BILL::Print_BILL(ITEM &Im)
{
    cout<<Im;
    total=total+Im.item_price;
    VAT=(float)0.14*total;
    grand_total=(float)total+VAT;
}




ITEM::ITEM()
{
    item_name='\0';
    item_quantity=0;
    item_price=0;
}



istream& operator>>(istream &in,ITEM &It)
{
    cout<<"Enter code:";
    in>>It.item_code;
    cout<<"Enter quantity:";
    in>>It.item_quantity;
    
    if(It.item_code==101)     { It.item_name="Veg Muffin"; It.item_price=20*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==102){ It.item_name="Veg Supreme Muffin";It.item_price=25*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==103){ It.item_name="Egg Muffin";It.item_price=30*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==104){ It.item_name="Masala Grill Chicken";It.item_price=40*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==105){ It.item_name="Filet-o-fish";It.item_price=50*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==106){ It.item_name="Filet-o-fish";It.item_price=50*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    
    else if(It.item_code==201){ It.item_name="Cold coffee float";It.item_price=50*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==202){ It.item_name="Ice Tea";It.item_price=50*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==203){ It.item_name="Sprite";It.item_price=40*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==204){ It.item_name="Fanta";It.item_price=40*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==205){ It.item_name="Coke";It.item_price=40*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==206){ It.item_name="Maaza";It.item_price=45*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    
    else if(It.item_code==301){ It.item_name="Veg Pizza Puff";It.item_price=99*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==302){ It.item_name="Aloo Tikki";It.item_price=90*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==303){ It.item_name="Allo Wrap";It.item_price=80*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==304){ It.item_name="Masala Grill Veg";It.item_price=60*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==305){ It.item_name="Grilled Chicken Wrap";It.item_price=75*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    
    else if(It.item_code==401){ It.item_name="Soft serve Cone";It.item_price=20*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==402){ It.item_name="Swirl chocolate";It.item_price=30*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==403){ It.item_name="Swirl Butter scotch";It.item_price=30*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==404){ It.item_name="Flurry Oreo";It.item_price=50*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    else if(It.item_code==405){ It.item_name="Chocolate brownie";It.item_price=60*It.item_quantity;It.per_item_price=It.item_price/It.item_quantity;}
    
    
    else
    {
        cout<<"Invalid code\n";
    }
    

    
    return in;
}

ostream& operator<<(ostream &out,ITEM &It)
{
    out<<It.item_code
       //<<setiosflags(ios::left)
       <<setw(23)<<It.item_name
       <<setiosflags(ios::right)
       <<setw(8)<<It.item_quantity<<"*"
       <<It.per_item_price
       <<setw(6)<<It.item_price<<endl;
    return out;
}






int main()
{
    
    ITEM ItemDetails[100];
    BILL b;
    ADDRESS add;
    char ch,c;
    
    int choice,n=0,i=1,h;
    fstream f1,f2,f3,f4,intro,menu;
    
    system("clear");
    
    intro.open("intro.txt",ios::in);
    while(intro)
    {
        intro.get(ch);
        cout<<ch;
    }
    intro.close();
    
    cout<<"\nPress enter to continue\n";
    
    ch=cin.get();
    
    system("clear");
   
    
    while(1)
    {
        n++;
        I[n];
        
        menu.open("menu.txt",ios::in);
        while(menu)
        {
          menu.get(ch);
          cout<<ch;
         }
         menu.close();
        
        cout<<"\nEnter your choice:";
        cin>>choice;
    
        try
        {
            switch(choice)
            {
                case 1:f1.open("file1.txt",ios::in);
                       while(f1)
                       {
                            f1.get(ch);
                            cout<<ch;
                       }
                       f1.close();
                       cin>>I[n];
                       
                       break;
                
                case 2:f2.open("file2.txt",ios::in);
                       while(f2)
                       {
                            f2.get(ch);
                            cout<<ch;
                       }
                       f2.close();
                       cin>>I[n];
                      
                      break;
            
                case 3:f3.open("file3.txt",ios::in);
                       while(f3)
                       {
                            f3.get(ch);
                            cout<<ch;
                       }
                       f3.close();
                       cin>>I[n];
                       
                      break;
            
                case 4:f4.open("file4.txt",ios::in);
                       while(f4)
                       {
                            f4.get(ch);
                            cout<<ch;
                       }
                       f4.close();
                       cin>>I[n];
                      
                      break;
                  
               // case 5:i=0;
                 //       break;
            
                default:    
                        throw -1;
            }
        }   
        catch(int i)
        {
            cout<<"Invalid operation\n";
        }
        
        cout<<"Enter \"+\" to add another item\n";
        cout<<"Enter \"*\" to display selected items\n";
        cin>>ch;
        system("clear");
        if(ch=='*')
        {   i=0;
            break;
            
        }
        if(i==0)break;
    }
    
    
    cout<<"######################################\n";
    cout<<"1.Home Delivery\n2.Walk-By\n";
    cout<<"Enter Delivery mode\n";
    cin>>h;
    if(h==1)
        add.Get_Address();
        
    cout<<"Press enter to generate bill\n";
    c=cin.get();
    system("clear");
    
    n++;
    cout<<"*********************************************\n";
    cout<<"*******************BILL**********************\n";
    cout<<"*********************************************\n";
    cout<<"Code         Item Name          Qty   Price\n";
    cout<<"-------------------------------------------\n";
    while(--n)
    {
        b.Print_BILL(I[n]);
    }
    cout<<"---------------------------------------------\n";
    cout<<"                                  Total:"<<b.total<<endl;
    cout<<"                               VAT(14%):"<<b.VAT<<endl;
    if(h==1)
    {
    cout<<"                        Delivery charge: 50\n";
    b.grand_total=b.grand_total+50;
    
    }
    cout<<"---------------------------------------------\n";
    cout<<"                            Grand Total:"<<b.grand_total<<endl;
    cout<<"---------------------------------------------\n";
    cout<<"*********************************************\n";
    
    if(h==1)
    {
        add.Display_Address();
    }
    
    
    cout<<"\n\n**************Have a nice meal :)*************\n";
    cout<<"**************  Thank You ********************\n";
    cout<<"************* Visit Again ********************\n";
    
    
    
    cout<<"\n                                             From team\n";
    cout<<"                                             MUNCH BOX\n\n";
    
    return 0;  
        
}
