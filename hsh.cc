#include<iostream>
using namespace std;
class employee {
    int id;
    string name;
    int salary;
    static string company;
    public:
    employee(int id, string name, int salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    
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
    
    static string getCompanyName() {
        return company;
    }
    
};

string employee:: company = "Apple";

int main() 
{
    employee e(22011,"Kunal",200000);
    cout<<e.getId()<<"   ";
    cout<<e.getName()<<"  ";
    cout<<e.getSalary()<<"  ";
    cout<<employee::getCompanyName();
    return 0;
}
