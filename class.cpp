#include<iostream>
 #include<iostream>
 #include<string>
 using namespace std;
 
 class user{
 	public:
 		string name;
		int id_num;  
 };

 class student: public user{
 	public:
 		int num_of_subjects;
 		int num_books;	
};
 
 class Prof: public user{
 	public:
 		int tin;
 };
 class Staff: public user{
 	public:
 	int sss;
 };
 
 int main(){
 	student stud;
 	cout<<"Student Name:";
 	cin>> stud.name;
 	cout<<"Student ID Number:";
 	cin>> stud.id_num;
 	cout<< "Number Of Subjects:";
 	cin>> stud.num_of_subjects;
 	cout<< "Number Of Books:";
 	cin>> stud.num_books;
 	cout<<endl;
 	
 	Prof prof;
 	cout<<"Prof Name:";
 	cin>> prof.name;
 	cout<<"Student ID Number:";
 	cin>> prof.id_num;
 	cout<< "Enter TIN:";
 	cin>> prof.tin;
 	cout<<endl;
 	
 	Staff staff;
 	cout<<"Staff Name:";
 	cin>> staff.name;
 	cout<<"Staff ID Number:";
 	cin>> staff.id_num;
 	cout<< "Enter SSS:";
 	cin>> staff.sss;
 	cout<<endl;
 	
 	return 0;
}
