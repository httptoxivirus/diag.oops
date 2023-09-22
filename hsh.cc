#include<iostream>
using namespace std;
class employee {
    int id;
    string name;
    int salary;
    static string company;
    public:
    employee() {
        
        
    }
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
    int n,id,salary;
    string name;
    // employee e[2] = {employee(22011,"Kunal",20000),employee(22012,"Rahul",30000)};
    employee e[10];
    cout<<"Enter the number of elements you wanna create \n";
    cin>>n;
    for(int i=0; i<n; i++) {
        cout<<"Enter the id of "<<i<<"th element"<<endl;
        cin>>id;
        e[i].setId(id);
        cout<<"Enter the name of "<<i<<"th element"<<endl;
        cin>>name;
        e[i].setName(name);
        cout<<"Enter the salary of "<<i<<"th element"<<endl;
        cin>>salary;
        e[i].setSalary(salary);
    }
    for(int j=0; j<n; j++) {
        cout<<e[j].getId()<<"  ";
        cout<<e[j].getName()<<" ";
        cout<<e[j].getSalary()<<"  ";
        cout<<employee::getCompanyName();
        cout<<endl;
    }
    return 0;
}
