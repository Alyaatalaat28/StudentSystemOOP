#include<iostream>
using namespace std;
int main(){
	
	
	int process;
	int flag=0;
    while(true){
    		cout<<"\t\t************** Student Management System **************"<<endl;
	cout<<endl;
	cout<<"Please Enter Process You Need To Do !"<<endl;
	cout<<endl;
	cout<<"1 - Add Student"<<"\t\t"<<"2 - Remove Student"<<endl;
	cout<<"3 - Edit Student"<<"\t"<<"4 - Show Student"<<endl;
	cout<<"5 - Exit"<<endl;
	cin>>process;
	switch(process){
	
		case 1:
			cout<<"Add Student process"<<endl;
			break;
		case 2:
			cout<<"Remove Student process"<<endl;
			break;
		case 3:
			cout<<"Edit Student process"<<endl;
			break;
		case 4:
			cout<<"Show Student process"<<endl;
			break;
		case 5:
			cout<<"Exit process"<<endl;
			flag=1;
			break;
		default:
			cout<<"Invalid"<<endl;

		}
			if(flag==1){
			break;
}
	}

}
