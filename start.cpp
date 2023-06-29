#include<iostream>
using namespace std;

void showList(string value){
			cout<<"1 - Add "<<value<<"\t\t"<<"2 - Remove "<<value<<endl;
	        cout<<"3 - Edit "<<value<<"\t\t"<<"4 - Show "<<value<<endl;
	        cout<<"5 - Exit"<<endl;
}

void displayProgram(){
	    		cout<<"\t\t************** Student Management System **************"<<endl;
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
