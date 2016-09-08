#include<iostream>
#include<string.h>
using namespace std;
static int n=1;
class student{ 
               char *name;
               char *status;
                int rollno;
                int year;
                int dob;
                int cgpa;
                int year10;
                int year12;
                int btech;
                int len;
                int len1;
	           public :
	           student(){
	           	  len=0;
	           	  len1=0;
	           	  name=new char[len+1];
	           	  status=new char[len+1];
	           	  rollno=0;
                 year=0;
                 dob=0;
                 cgpa=0;
                 year10=0;
                 year12=0;
                 btech=0;
                 
			   }
			   public:
			   int  cpa(){  return(cgpa);
			   }
			   int yer(){  return(year);
			   }
			   int gap(){   return(btech-year12);
			   }
			   int roll(){ return(rollno);
			   }
	           	void getname(){
	           		char*s;
	           		s=new char[50];
	           		cout<<"enter your name"<<endl;
	           		cin>>s;
	           		len=strlen(s);
	           		name=new char[len+1];
	           		strcpy(name,s);
				   } 
			void showname(){
				   	cout<<"name : "<<name<<endl;
				   }
				   void getstatus(){
				   	char*r;
	           		r=new char[50];
	           		cout<<"enter your status"<<endl;
	           		cin>>r;
	           		len1=strlen(r);
	           	     status=new char[len1+1];
	           		strcpy(status,r);
				   }
				   void showstatus(){
				   	cout<<"status : "<<status<<endl;
				   }
				void reg();
	            void display();
	            void eligible();
	            void ineligible();
	        
	            
	
};
void student::reg(){
	
	                 cout<<"enter your rollno"<<endl;
	                 cin>>rollno;
	                 cout<<"enter your year"<<endl;
	                 cin>>year;
	                 cout<<"enter your dob"<<endl;
	                 cin>>dob;
	                 cout<<"enter your cgpa"<<endl;
	                 cin>>cgpa;
	                 cout<<"enter your 10th passing year"<<endl;
	                 cin>>year10;
	                 cout<<"enter your year of passing 12th"<<endl;
	                 cin>>year12;
	                 cout<<"enter your btech entry year"<<endl;
	                 cin>>btech;
	                
	                 
}
void student::display(){
	
	                
	                  cout<<"rollno :  "<<rollno<<endl;
	                  cout<<"year :  "<<year<<endl;
	                  cout<<"DOB :  "<<dob<<endl;
	                  cout<<"CGPA :  "<<cgpa<<endl;
	                  cout<<"year of passing 10th :  "<<year10<<endl;
	                  cout<<"year of passing 12th :  "<<year12<<endl;
	                  cout<<"btech entry year:  "<<btech<<endl;
	                
}

void student::eligible(){
	                  cout<<"rollno : "<<rollno<<endl;
	                  cout<<"DOB : "<<dob<<endl;
					 
	                  
	
}
void  student::ineligible(){
	            
				  
				   
				  cout<<"rollno : "<<roll()<<endl;
	              cout<<"reason of invisibility : ";
	               if(cpa()<6.5)
	               cout<<"cgpa less than 6.5"<<endl;
	               if(yer()<4)
	               cout<<"only for final year"<<endl;
	               if(gap()>2)
                    cout<<"gap more than 2 years"<<endl;	               
	             
	
}

	    

int main(){
	         student *b[100];
	         //static int n=1;
			 int x;
	        
	       do{
		     cout<<"select appropriate choice"<<endl;
	          cout<<"1:  register  "<<endl;
	          cout<<"2:  signup  "<<endl;
	          cout<<"3:  eligible list and list of students having cgpa greater than 8  "<<endl;
	          cout<<"4:  ineligible list  "<<endl;
	          cout<<"5:  selected or rejected "<<endl;
	          cout<<"6:  display complete registeration form  "<<endl;
	          cout<<"7:  quit  "<<endl;
	          
	          cout<<"what you want to choose?"<<endl;
	          cin>>x;
	          
	          	switch(x)
	          	{case 1:    
				           
						   b[n]=new student;
	          	        
	                          b[n]->getname();
	                          b[n]->reg();
	                          n++;
	                          
	                           
	                         break;
			                 
	          	case 2:       int i;
				              
				               cout<<"serial number"<<endl;
				               cin>>i;
				               if(i>=n)
				                {
								cout<<"not register"<<endl;
								 cout<<"you have to register first"<<endl; }
				               else
				               {b[i]->showname();
				              b[i]->display();}
				               
				               break;
				case 3:       
				             int n1;
				              cout<<"list of elligible students"<<endl;
				              cout<<"enter total no of students"<<endl;
				               cin>>n1;
				            
				                for(int i=1;i<=n1;i++)
				                {   
								  if((b[i]->cpa()>=6.5)&&(b[i]->yer()==4)&&(b[i]->gap()<=2))
				                    {  b[i]->showname();
				                       cout<<"serial no : "<<i<<endl;
									  b[i]->eligible();
									} i++;}
									cout<<"list of students having cgp greater than 8"<<endl;
									for(int i=1;i<=n1;i++)
									{
									if(b[i]->cpa()>=8)
									{ b[i]->showname();
									  b[i]->eligible();
									}
								}
								
								
							   	break;
					          
					         
			    case 4:         int n2;
				                cout<<"list of inelligible students"<<endl;
				                cout<<"enter total no of students"<<endl;
				                 cin>>n2;
				                for(int i=1;i<=n2;i++)
				                {   
								   if((b[i]->cpa()<=6.5)||(b[i]->yer()!=4)||(b[i]->gap()>=2))
				                    {  b[i]->showname();
				                       cout<<"serial no : "<<i<<endl;
									  b[i]->ineligible();
									} 
				                    
				                    
				                    }
			                 break;
					          
				                    
				                     
				case 5:        cout<<"enter serial number"<<endl;
				                 cin>>n;
				                b[n]->getstatus();
				                n++;
				              break;
				            
				case 6:     cout<<"enter serial number"<<endl;
				             cin>>n;
				            b[n]->showname();
				            b[n]->display();
				            b[n]->showstatus();
				             n++;
				           break;
				            
				case 7:    break;			 				             
			   default:  cout<<"error in input !!!try again"<<endl;    		 			 		 	       
	          		
				  }
	          	
			  }while(x!=7);
	         
	return(0);
	
}
