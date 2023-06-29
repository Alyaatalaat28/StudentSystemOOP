#include<bits/stdc++.h>
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
class BaseEntity:public ShareData{
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
		
		double getSalary()	{
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
		Course courses[5];
	public:
		// Setter			
		void setGpa(double gpa){
			this->gpa=gpa;
		}
		
		void setCourses(Course courses[5]){
			for(int i=0;i<sizeof(courses)/sizeof(courses[0]);i++){
				this->courses[i]=courses[i];
			}
		}
		void setTeachers(Teacher teachers[5]){
			for(int i=0;i<sizeof(teachers)/sizeof(teachers[0]);i++){
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
		
		
		Course * getcourses(){
			return courses;
		}						
		
	
};

//create course model
class Course:public ShareData{
	private:
		double hour;
		Student students[5];
	public:
		// setter
		
		void setHour(double hour){
			this->hour=hour;
		}
		
		void setstudents(Student students[5]){
			for(int i=0;i<sizeof(students)/sizeof(students[0]);i++){
				this->students[i]=students[i];
			}
		}
			
		// Getter
		double getHour(){
			return hour;
		}	
			
		Student * getstudents(){
			return students;
		}	
			
};

