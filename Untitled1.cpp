 #include <iostream>
using namespace std;


class time {
	
	private:
		
	int hours ;
	int mins;
	int sec;
	char mode;
	
	public:
		time():hours(0),mins (0), sec(0), mode('0'){
			
		 cout<<"default conatructor is working "<< endl;	
		 
		}
		
		
		time(int h , int m , int s , char a){
	
			hours=h;
			mins=m;
			sec=s;
			mode=a;
			
			
			cout<<"\nparameterized constructor is working"<< endl;
			
				}
				
				
		time( int h, int m, int s){
			hours= h;
			mins= m;
			sec=s;
		cout<<"\nparametrrized constructor working"<< endl;
		}
		time( time &const_time){
			
			hours= const_time.hours;
			mins = const_time.mins;
			sec = const_time.sec;
			
		
			cout<<"copy constructor is called"<<endl;
			
		}
		void get_hours() 
		{
        cout << "Hours: " << hours << endl;
		} 
		
		void get_minutes(){
			cout<< "minutes: " << mins << endl;
		}
		 
		 
		 void get_seconds(){
		 	cout<<" seconds:"  << sec<< endl;
		 }
		 
		 
		 int set_hours(int h){
		 	hours=h;
		 }
		
		
		int set_minuts(int m){
			mins=m;
		}
		
		int set_seconds( int s){ 
		sec=s;
		}
		
		char set_mode(char a){
			mode= a;
		}
		void displaytime(){
			
			
			
    void display_Time() 
	{
		
        cout << hours << ":" << mins << ":" << sec << endl;
        
        if (hours<12 )
		 {
            cout << "PM";
        } 
		
	 	else
		 {
            cout << "AM"<< endl;
        }
    
}
    
     double converttoseconds() {
    	
        int total_Seconds;
		total_seconds = (hours * 3600) + (mins * 60) + sec;
         cout<<"total seconds are :" << total_seconds<< endl;
	}
	
	 
	 double  converttominutes(){
	 	
	 	int total_minutes;
	 	total_minutes = ( hours * 60) + mins + (sec / 60);
	 	cout<<" total minutes are : "<< total_minutes<<endl;
	 }
	 
	 
	 double converttohours(){
	 	int total_hours;
	 	total_hours = hours + (mins / 60) + ( sec / 3600);
	 	cout<<" total hours are :" << total_hours << endl;
	 }
	  
	  
	  void convertto24hourformat(){
	  	if (mode  == "PM" && hours != 12) {
            hours += 12;
        } else if (mode  == "AM" && hours == 12) {
            hour = 0;
        }
        cout << hours << ":" << mins << ":" << sec << endl;
    }
     
	 int increment_seconds(){
	 }
	 
	 int increment_minutes(){
	 }
};
  
  
  
  int main() {
  	
  
  
  	 time t1;
  	 t1.set_hours(04);
  	 t1.set_minuts(45);
  	 t1.set_seconds(58);
  	 t1.display_Time();
  }
  	 
