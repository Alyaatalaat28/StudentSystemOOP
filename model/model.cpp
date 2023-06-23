#include<iostream>
using namespace std;
// create ShareData model
class ShareData{
	private:
		int id;
		string name;
	public:
		// Setter
		void setId(int id){
			this->id=id;
		}
		
		void setName(string name){
			this->name=name;
		}
		
    	// Getter
		int getId()	{
			return id;
		}
		
		string getName()	{
			return name;
		}
	
};
// create BaseEntity model
class BaseEntity:ShareData{
	private:
		int age;
		string phoneNumper;
		public:
			
		// Setter
			
		void setAge(int age){
			this->age=age;
		}

		void setphoneNumper(string phoneNumper){
			this->phoneNumper=phoneNumper;
		}
			
		// Getter
		
		int getAge()	{
			return age;
		}	
		string getPhoneNumper()	{
			return phoneNumper;
		}	
		
							
		
};

// create teacher model
class Teacher:public BaseEntity{
		double salary;
		int studentsId[5];
	public:
		// Setter
	
		void setSalary(double salary){
			this->salary=salary;
		}
		void setStudentsId(int studentsId[5]){
			for(int i=0;i<sizeof(studentsId)/sizeof(studentsId[0]);i++){
				this->studentsId[i]=studentsId[i];
			}
		}
		
		// Getter	
		
		int getSalary()	{
			return salary;
		}	
		
		int *getStudentsId(){
			return studentsId;
		}				
		
	
};

// create student model
class Student:public BaseEntity{
	private:
		double gpa;
		Teacher teachers[5];
	public:
		// Setter			
		void setGpa(double gpa){
			this->gpa=gpa;
		}
		
		void setTeachers(Teacher teachers[5]){
			for(int i=0;i<sizeof(teachers)/sizeof(teachers[0];i++){
				this->teachers[i]=teachers[i];
			}
		}
		
		// Getter
		int getGpa()	{
			return gpa;
		}
		
		Teacher * getTeachers(){
			return teachers;
		}						
		
	
};

//create course model
class Course:ShareData{
	private:
		double hour;
	public:
		// setter
		
		void setHour(double hour){
			this->hour=hour;
		}
			
		// Getter
		double getHour(){
			return hour;
		}		
			
};
