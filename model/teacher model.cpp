#include<iostream>
using namespace std;
#include "BaseEntity.cpp";
class Teacher:public BaseEntity{
		double salary;
	public:
		// Setter
	
		void setSalary(double salary){
			this->salary=salary;
		}
		
		// Getter	
		
		int getSalary()	{
			return salary;
		}						
		
	
};
