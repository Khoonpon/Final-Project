#include "queue.h"
#include "stack.h"
#include <string>  
using namespace std;
class job {
private:
  string name, prof;
  char med;
  int  age,covid; 
  char treat;

public:
  void sorting(job a[], int);
  void bubbleSort(job a[], int n);
  void swap(job &a, job &b);
  void setAll(string,int,string,int,char); 
  void display();

  // constructor 
  job(string = "Annonymous", int = 0, string = "Unknown", int = 1, char = 'Y');
};

job::job(string n, int a, string p, int c, char ans){
  // int a to string a.
  name = n;
  age = a;
  prof = p;
  covid = c;
  med = ans;
}


void job::setAll(string n,int a,string p, int c, char ans){
  name = n;
  age = a;
  prof = p;
  covid = c;
  med = ans;
}


void job::swap(job &a, job &b) {
  job temp;
  temp.name = a.name;
  temp.prof = a.prof;
  temp.covid = a.covid;
  temp.age = a.age;
  a.name = b.name;
  a.prof = b.prof;
  a.covid = b.covid;
  a.age = b.age;
  b.name = temp.name;
  b.prof = temp.prof;
  b.covid = temp.covid;
  b.age = temp.age;
}


void job::bubbleSort(job a[], int n) {
  int i, j;
  int sorted;
  for (j = 1; j <= n - 1; j++) {
    sorted = 0;
    for (i = 0; i < n - j; i++) {
      if (a[i].covid >= a[i + 1].covid) {
        swap(a[i], a[i + 1]);
        sorted = 1;
      }
    }
    if (sorted == 0)
      break;
    cout << "===========" << endl;
  }
}

void job::display() {
  cout << "Name : " << name << endl;
  cout << "age  : " << age << endl;
  cout << "Profession: " << prof << endl;
  cout << "Covid Scale: " << covid << endl;
  cout << endl;
}

void scale_table(){ 
  cout<<"************************************"<<endl;
  cout<<"Professions"<<setw(25)<<"scores"<<endl;     
  cout<<"1. Childcare_Workers"<<setw(14)<<"1"<<endl; 
  cout<<"2. Movie_Theater_Workers"<<setw(10)<<"2"<<endl;
  cout<<"3. Food_Workers"<<setw(19)<<"3"<<endl;
  cout<<"4. Transportation_Workers"<<setw(9)<<"4"<<endl;
  cout<<"5. Developers"<<setw(21)<<"5"<<endl;
  cout<<"6. Manufacturing_Workers"<<setw(10)<<"6"<<endl;
  cout<<"7. Construction_Workers"<<setw(11)<<"7"<<endl;
  cout<<"8. Media_Workers"<<setw(18)<<"8"<<endl;
  cout<<"9. Service_Workers"<<setw(16)<<"9"<<endl;
  cout<<"10.Health-care_workers"<<setw(12)<<"10"<<endl;
  cout<<"************************************"<<endl;
}

bool check_number(string str) {
   for (int i = 0; i < str.length(); i++)
   if (isdigit(str[i]) == false)
      return false;
      return true;
}

