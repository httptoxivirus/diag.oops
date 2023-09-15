#include<iostream>
using namespace std;
class employee
{
    int id;
    string name;
    int salary;
    public:
    static string companyName;
    
 void setId(int id) {
    this->id = id;
 }

 void setName(string name) {
    this->name = name;
 }
 
 void setSalary(int salary) {
  this->salary = salary;
  }
  
  int getId() {
   return id;
  }
   
  string getName() {
    return name;
   }
   
  int getSalary() {
    return salary;
   }
    
 };
    
 string employee::companyName = "Apple";;

int main() {
    employee e1;
    e1.setId(22011);
    e1.setName("Kunal");
    e1.setSalary(200000);
    cout<<"\n"<<endl;
    cout<<e1.getId()<<endl;
    cout<<e1.getName()<<endl;
    cout<<e1.getSalary()<<endl;
    cout<<employee::companyName;
    return 0;
}
