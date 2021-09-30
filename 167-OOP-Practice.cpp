#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#define ll long long
#define MOD 1000000007

using namespace std;

class Student
{
  string name;
  int age;
  float marks;
  static int count;

public:
  Student(string, int, float);
  Student(const Student &source);
  ~Student();
  string getName();
  void getData();
  static int getActive();
};

Student::Student(string name = "NULL", int age = 0, float marks = 0.00) : name{name}, age{age}, marks{marks}
{
  cout << name << " created!" << endl;
  count++;
}

Student::~Student()
{
  count--;
}

Student::Student(const Student &source)
{
  this->name = source.name;
  this->age = source.age;
  this->marks = source.marks;
  count++;
}

string Student::getName()
{
  return this->name;
}

void Student::getData()
{
  cout << this->name << " " << this->age << " " << this->marks << endl;
}

int Student::getActive()
{
  return count;
}

int Student::count = 0;

void nameCaps(Student s)
{
  string s1 = s.getName();
  transform(s1.begin(), s1.end(), s1.begin(), ::toupper); // Converts the entire string to Upper Case
  cout << s1 << endl;
}


main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << "Active instances of Student: " << Student::getActive() << endl;

  Student s1{"Vishank Sharma", 20, 99.99};
  s1.getData();
  cout << s1.getName() << endl;
  cout << "Active instances of Student: " << Student::getActive() << endl;

  Student s2{s1};
  s2.getData();
  cout << s2.getName() << endl;
  cout << "Active instances of Student: " << Student::getActive() << endl;
  nameCaps(s2);
  cout << "Active instances of Student: " << Student::getActive() << endl;

  // Student s3{s1};
  // s3.getData();
  // cout << s3.getName() << endl;
  // cout << "Active instances of Student: " << Student::getActive() << endl;

  // Student s4{"Hello"};
  // s4.getData();
  // cout << s4.getName() << endl;
  // cout << "Active instances of Student: " << Student::getActive() << endl;

  return 0;
}
