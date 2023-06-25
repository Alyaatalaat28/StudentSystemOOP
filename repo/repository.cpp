#include<bits/stdc++.h>
#include"../model/model.cpp"
using namespace std;


// *************** student ****************
// interface
class  StudentRepository{
	public:
		virtual int addStudents(Student student)=0;
	
};
// class 
class  StudentRepositoryImp:public StudentRepository{
	private:
		Student students[25];
		int index=0;
	public:
		 int addStudents(Student student){
		 	if(index==25){
		 		cout<<"full";
			 }else{
			 	students[index]=student;
			 	index++;
			 }
		 }
	
};


// *************** teacher ****************
// interface
class TeacherRepository{
		public:
		virtual int addTeachers(Teacher teacher)=0;
};
// class 
class TeacherRepositoryImp:public TeacherRepository{
	private:
		Teachers teachers[25];
		int index=0;
	public:
		 int addTeachersTeacher teacher){
		 	if(index==25){
		 		cout<<"full";
			 }else{
			    teachers[index]=teacher;
			 	index++;
			 }
		 }
	
};

// *************** course ****************
// interface
class CourseRepository{
		public:
		virtual int addCourses(Course course)=0;
};
// class 
class CourseRepositoryImp:public CourseRepository{
	private:
		Course coures[25];
		int index=0;
	public:
		 int addCourses(Course course){
		 	if(index==25){
		 		cout<<"full";
			 }else{
			 	courses[index]=course;
			 	index++;
			 }
		 }
	
};



