#include<iostream>
#include"controller/controller.cpp"
using namespace std;

void showList(string value){
		cout<<"\t\t************** "<<value<<" Management System **************"<<endl;
			cout<<"1 - Add "<<value<<"\t\t"<<"2 - Remove "<<value<<endl;
	        cout<<"3 - Edit "<<value<<"\t\t"<<"4 - Show "<<value<<endl;
	        cout<<"5 - Exit"<<endl;
}

void displayProgram(){
	    		cout<<"\t\t************** Management System **************"<<endl;
	cout<<endl;
    cout<<"Please Enter Process You Need To Do !"<<endl;
	cout<<"1 - About Student"<<"\t\t"<<"2 - About Teacher"<<endl;
	cout<<"3 - About Courses"<<"\t\t"<<"4 - Exit"<<endl;
}

int main(){
	
	int process;
	int flag=0;
    while(true){
    displayProgram();
	cin>>process;
	switch(process){
	
		case 1:
            showList("Student");
            int studentProcess;
            cin>>studentProcess;
            if(studentProcess==1){
            Student student;
            string name;
            cout<<"Enter your name : ";
            cin>>name;
            student.setName(name);
            cout<<"Enter your Age : ";
            int age;
            cin>>age;
            student.setAge(age);
            cout<<"Enter your GPA : ";
            int gpa;
            cin>>gpa;
            student.setGpa(gpa);
            cout<<"Enter your Phone Number : ";
            int phoneNumber;
            cin>>phoneNumber;
            student.setPhoneNumber(phoneNumber);
            cout<<student.getName<<" "<<student.getAge<<" "<<getGpa<<" "<<getPhoneNumber;
            StudentController studentController;
            studentController.addStudents(student);
        }
            
			break;
		case 2:
			showList("Teacher");
			break;
		case 3:
	        showList("Course");
			break;
		case 4:
		    cout<<"Exit process"<<endl;
			flag=1;
			break;
		default:
			cout<<"Invalid process"<<endl;

		}
			if(flag==1){
			break;
}
	}

}
