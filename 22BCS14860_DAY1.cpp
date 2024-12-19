//QUESTION 1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result=(n*(n+1))/2;
    cout<<result;
}

//QUESTION 2
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isPrime=true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}

//QUESTION 3
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i;
            if (i + 2 <= n) cout << " ";
        }
    }

    return 0;
}

//QUESTION 4
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}

//QUESTION 5
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}

//QUESTION 6
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }

    cout << count << endl;
    return 0;
}

//QUESTION 7
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int reversedNumber = 0;
    while (n > 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    cout << reversedNumber << endl;
    return 0;
}

//QUESTION 8
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int largestDigit = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        n /= 10;
    }

    cout << largestDigit << endl;
    return 0;
}

//QUESTION 9
#include <iostream>
using namespace std;

int main() {
    int n, originalNumber, reversedNumber = 0;
    cin >> n;

    originalNumber = n;
    while (n > 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

//QUESTION 10
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << sum << endl;
    return 0;
}

//QUESTION 11
#include <iostream>
using namespace std;

class AreaCalculator {
public:
    double calculateArea(double radius) {
        return 3.14159 * radius * radius;
    }

    int calculateArea(int length, int breadth) {
        return length * breadth;
    }

    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    AreaCalculator calculator;

    double radius;
    int length, breadth;
    double base, height;
    cout<<"Radius:";
    cin >> radius;
    cout<<"Length and Breadth:";
    cin >> length >> breadth;
    cout<<"Base and Height:";
    cin >> base >> height;

    cout << calculator.calculateArea(radius) << endl;
    cout << calculator.calculateArea(length, breadth) << endl;
    cout << calculator.calculateArea(base, height) << endl;

    return 0;
}

//QUESTION 12
#include <iostream>
using namespace std;

class SalaryCalculator {
public:
    int calculateSalary(int stipend) {
        return stipend;
    }

    int calculateSalary(int baseSalary, int bonuses) {
        return baseSalary + bonuses;
    }

    int calculateSalary(int baseSalary, int bonuses, int incentives) {
        return baseSalary + bonuses + incentives;
    }
};

int main() {
    SalaryCalculator calculator;
    int stipend, baseSalaryEmp, bonusesEmp, baseSalaryMgr, bonusesMgr, incentivesMgr;
    cin >> stipend;
    cin >> baseSalaryEmp >> bonusesEmp;
    cin >> baseSalaryMgr >> bonusesMgr >> incentivesMgr;
    cout << "Intern Salary: " << calculator.calculateSalary(stipend) << endl;
    cout << "Employee Salary: " << calculator.calculateSalary(baseSalaryEmp, bonusesEmp) << endl;
    cout << "Manager Salary: " << calculator.calculateSalary(baseSalaryMgr, bonusesMgr, incentivesMgr) << endl;
    return 0;
}

//QUESTION 13
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void setID(int empID) {
        id = empID;
    }

    void setName(string empName) {
        name = empName;
    }

    void setSalary(float empSalary) {
        salary = empSalary;
    }

    int getID() {
        return id;
    }

    string getName() {
        return name;
    }

    float getSalary() {
        return salary;
    }

    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    int empID;
    string empName;
    float empSalary;

    cout<<"Enter ID:";
    cin >> empID;
    cout<<"Enter name:";
    cin >> empName;
    cout<<"Salary:";
    cin >> empSalary;

    emp.setID(empID);
    emp.setName(empName);
    emp.setSalary(empSalary);
    emp.displayDetails();

    return 0;
}

//QUESTION 14
class Student {
public:
    int rollNumber;
    string name;
    void setStudentDetails(int r, string n) {
        rollNumber = r;
        name = n;
    }
};

class Result : public Student {
public:
    int marks[3];
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void calculateAndDisplay() {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Roll Number: " << rollNumber << "\nName: " << name
        << "\nTotal: " << total << "\nPercentage: " << (total / 3.0) << "%" << endl;
    }
};

// QUESTION 15
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

//QUESTION 16
class Shape {
public:
    virtual void calculateArea() = 0;
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};


//QUESTION 17
void operate(int matA[2][2], int matB[2][2], int operation) {
    int result[2][2] = {};
    if (operation == 1) {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result[i][j] = matA[i][j] + matB[i][j];
    } else if (operation == 2) {
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result[i][j] += matA[i][k] * matB[k][j];
    }
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}

//QUESTION 18
class Shape {
public:
    virtual void calculateArea() = 0;
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};


//QUESTION 19
class Book {
public:
    string title, author;
    int isbn;
    void setBookDetails(string t, string a, int i) {
        title = t;
        author = a;
        isbn = i;
    }
};
class Borrower {
public:
    string name;
    int id;
    void setBorrowerDetails(string n, int i) {
        name = n;
        id = i;
    }
};
class Library : public Book, public Borrower {
public:
    void borrowBook() {
        cout << name << " (ID: " << id << ") has borrowed \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
    void returnBook() {
        cout << name << " (ID: " << id << ") has returned \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
};


//QUESTION 20
class Account {
public:
    virtual void calculateInterest() = 0; // Pure virtual function
};
class SavingsAccount : public Account {
    double balance, rate, time;
public:
    SavingsAccount(double b, double r, double t) : balance(b), rate(r), time(t) {}
    void calculateInterest() override {
        cout << "Savings Account Interest: " << (balance * rate * time / 100) << endl;
    }
};
class CurrentAccount : public Account {
    double balance, fee;
public:
    CurrentAccount(double b, double f) : balance(b), fee(f) {}
    void calculateInterest() override {
        cout << "Balance after fee deduction: " << (balance - fee) << endl;
    }
};