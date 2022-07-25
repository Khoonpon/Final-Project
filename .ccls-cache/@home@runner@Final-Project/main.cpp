//#include "queue.h"
//#include "stack.h"
#include <iomanip>
#include <iostream>
#include "job.h"
#include<string.h>
#include <string> 
using namespace std;

int main() {
  Queue Q;
  Stack S;
  int k, i;
  cout << "How many people to survey? ";
  cin >> k;
  job *a, p[k];
  scale_table();
  // TO SET NAME
  for (i = 0; i < k; i++) {
     string n; //name
    char ans; //answer
    int a; //age
    string s;
    int c;
    int judge=0;


    //name input
    while(judge==0){
    cout << "PERSON " << i + 1 << " NAME: " << endl;
    cin >> n; //name
    if(check_number(n))
      cout<<"Your name contains a number. Please try again"<<endl;
      else 
        judge=1;
      }
    judge=0;

    //age input
    cout<<"PLEASE ENTER ONLY NUMBER"<<endl;
    cout << "PERSON " << i + 1 << " AGE: " << endl;
    cin >> a;
 

    //profession input
    cout << "PERSON " << i + 1 << " PROFESSION: " << endl;
    cin >> s;

    //covid scale
    cout << "(Risk of Covid from profession)" << endl;
    cout << "PERSON " << i + 1 << " COVID ON A SCALE OF 1-10: " << endl;
    cin >> c;
     
    //Meds or no?
    cout<<"Do you need medicine"<<endl<<"Yes Press [Y]"<<endl<<"No  Press [N]"<<endl;
    cin>>ans;
    if(ans=='Y'|| ans=='y') {
      //function queue
      Q.enqueue(n);
    }
    else if (ans=='N'||ans=='n'){
      //function stack
      S.push(n);
      }
      
     
    p[i].setAll(n, a, s, c, ans);
    cout << "===========" << endl;
  }
  a = p;

  a[k].bubbleSort(a, k);

  cout << "PEOPLE AND THEIR PROFESSION AFFECTED BY COVID THE LEAST TO MOST: "
       << endl;
  cout << "===========" << endl;
  for (i = 0; i < k; i++) {
    (p + i)->display();
    cout << "===========" << endl;
  }
  
}
