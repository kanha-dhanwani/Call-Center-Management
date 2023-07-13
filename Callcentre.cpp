#include<iostream>
#include<conio.h>
Using namespace std;
Void callcentre();
Void comp();
Void prod();
Void exch();
Void first();
Int main()
{
    First();
    Cout<<"Thanks for coming"<<endl;
Getch();    
}
Void callcentre()
{
     Int a,b,c,d;
Cout<<endl<<"please select one of the follwing"<<endl;
Cout<<endl<<"Press 1 to register your complain"<<endl;
Cout<<endl<<"Press 2 for Details of various offers on branded products"<<endl;
Cout<<endl<<"Press 3 for our exchange scheme"<<endl;     

Cin>>a;
Switch(a)
{
 Case 1:
      {
                  
                   
      Comp();
      Cout<<endl<<"Your complain register succeslfully"<<endl;
      Cout<<"press 1 for main menu"<<endl;
      Cin>>b;
      Callcentre();
      Break;
      }        
Case 2:
     {
               Prod();
               Cout<<"press 1 for main menu"<<endl;
      Cin>>c;
      Callcentre();
               Break;
               }
Case 3:
     {
     Exch();          
      Cout<<"Your request has been saved we will revert you soon"<<endl;         
     Cout<<"press 1 for main menu"<<endl;
      Cin>>d;
      Callcentre(); 
      
      Break;  
     }
     Default:
             {
                    Cout<<"invalid entry"<<endl;
                  First();  
                    }

         
}     
     
}
Void comp()
{
     
   FILE *fp;
    Char nam[100];
 Cout<<"Please enter your complain"<<endl;
Cin>>nam;    
  Fp = fopen("e://tr.txt","a");
  If(fp==NULL)cout<<"Error opening file"<<endl;
  Else
  {
      
     Fprintf(fp,nam); 
      
  }     
}
Void prod()
{
  FILE *fp;
    Char nam;    
     Fp = fopen("e://offer.txt","r");
     If(fp==NULL)cout<<"error opening file"<<endl;
     Else
     {
       Do{
             Nam= getc(fp); 
              Putchar(nam);
              }while(nam!=EOF);
              Fclose(fp);    
         
         
     }
     
}
Void exch()
{  
   FILE *fp;
    Char nam[100];
 Cout<<"Please enter the details of your products which you want exchange"<<endl;
Cin>>nam;    
  Fp = fopen("e://exch.txt","a");
  If(fp==NULL)cout<<"Error opening file"<<endl;
  Else
  {  
     Fprintf(fp,nam);   
  }    
}


Void first()
{
     
    Int a,b;
Cout<<"welcome to All india Customer service"<<endl;
    
 Cout<<"please confirm your id"<<endl;
 Cout<<"1.Administarator"<<endl;
 Cout<<"2.Customer"<<endl;
 Cin>>a;
 Switch(a)
 {
 Case 1:
      {
      Cout<<"To view the complains press 1"<<endl;
      Cin>>b;
    FILE *fp;
    Char name;   
  Fp = fopen("e://tr.txt","r");
  If(fp==NULL)cout<<"error occured"<<endl;
Do{
  Name = getc(fp); 
  Putchar(name) ;                       

}while(name!=EOF);
First();
Break;      
}
Case 2:
     {
            Callcentre();
            
            
            Break;
            }   
            Default:
                    {
                         Cout<<"invalid entry"<<endl;
                         }      
 }
     }
