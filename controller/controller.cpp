#include<bits/stdc++.h>
#include"../services/services.cpp"
using namespace std;


// *************** StudentController ****************
// class
class  StudentController{
	private:
		StudentService studentService;
	public:
	 int addStudents(Student student){
	 	return studentService.addStudents(student);
	 }
};


// *************** TeacherController ****************
// class
class  TeacherController{
	private:
		TeacherService teacherService;
	public:
	 int addTeachersTeacher teacher){
	   return teacherService.addTeachers(teacher);
	 }
};


// *************** CourseController ****************
// class
class  CourseController{
	private:
		CourseService courseService;
	public:
	virtual int int addCourses(Course course){
		courseService.addCourses(course);
	}
};
