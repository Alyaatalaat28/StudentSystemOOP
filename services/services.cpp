#include<bits/stdc++.h>
#include"../repo/repository.cpp"
using namespace std;

// *************** StudentService ****************
// interface
class  StudentService{
	public:
	virtual int addStudents(Student student)=0;
};
// class 
class StudentServiceImp:public StudentService{
   private:
   	   StudentRepository studentRepository;
   	   
    public:
    	int addStudents(Student student){
    		return studentRepository.addStudents(student);
		}
   		

};

// *************** TeacherService ****************
// interface
class TeacherService{
	public:
			virtual int addTeachers(Teacher teacher)=0;
	
};
// class 
class TeacherServiceImp:public TeacherService{
   private:
   	   TeacherRepository teacherRepository;
   	   
    public:
    	int  addTeachers(Teacher teacher){
    		return teacherRepository.addTeachers(teacher);
		}

};

// *************** CourseService ****************
// interface
class CourseService{
	public:
		
	  virtual int addCourses(Course course)=0;	
	
};
// class 
class CourseServiceImp:public CourseService{
	private:
		CourseRepository courseRepository;
    public:
    	int addCourses(Course course){
    		return courseRepository.addCourses(course);
		}


};
