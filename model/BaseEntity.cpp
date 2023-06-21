#include<iostream>
using namespace std;
class BaseEntity{
	private:
		int id;
		string name;
		int age;
		string phoneNumper;
		public:
		// Setter
		void setId(int id){
			this->id=id;
		}
		
		void setName(string name){
			this->name=name;
		}
			
		void setAge(int age){
			this->age=age;
		}

		void setphoneNumper(string phoneNumper){
			this->phoneNumper=phoneNumper;
		}	
			
		// Getter
		int getId()	{
			return id;
		}
		
		string getName()	{
			return name;
		}
		
		int getAge()	{
			return age;
		}	
		string getPhoneNumper()	{
			return phoneNumper;
		}	
		
							
		
};
