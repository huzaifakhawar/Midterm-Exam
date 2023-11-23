#include<iostream>
using namespace std;
int main(){
	double current_salary,yearlyincrement,bonus;   
	int numberofyears;
	char performancerating;
	cout<<"Enter the current salary of an employee";
	cin>>current_salary;
	cout<<"Enter the numbers of years to simulate";
	cin>>numberofyears;
	for(int i=1;i<=numberofyears;i++){
	yearlyincrement=0.05*current_salary;
	cout<<"Enter the performance rating for year"<<": ";
	cin>>performancerating;
	bonus=0.02*current_salary;
	current_salary+=yearlyincrement+bonus;
	cout<<"Year"<<"year<<-newsalary in $"<<current_salary<<endl;
   }
  return 0;
}
