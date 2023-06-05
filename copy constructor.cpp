#include<iostream>
using namespace std;

 // If you define a parametrize constructor then you and 
 // you want to also create objects without arguments then  you must and 
 //I repeat you must define a default constructor\
 if(If you define a parametrize constructor AND 
//  you want to also create objects without arguments){
//  	you must define a default constructor
//  }
class car{
	private:
		int a;
		int b;
	public:
		car(){
			cout<<"I am working dont' worry"<<endl;
		}
		car(int t1, int t2):a(t1), b(t2){
		}
		
		 car(car &obj) {
		 	cout<<"Running copy constructor"<<endl;
      		a = obj.a;
    	 	b = obj.b;
    	 	
    	 	
   				 }
		void display_data(){
			cout<<"value of a is: "<<a<<endl;
			cout<<"value of b is: "<<b<<endl;
		}
		
};

int main(){
	car c1(1,2);
	car c2(c1);
     
    c2.display_data();
    
//    int a = 5;
//    int b;
//    b = a;
	
	
}  
