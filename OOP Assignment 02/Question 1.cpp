//#include <iostream>
//using namespace std;
//
//class Student {
//    const int studentID;
//    char* name;
//    int marks[5];
//    char grade;
//
//public:
//
//    Student() : studentID(0) {
//        name = nullptr;
//        for (int i = 0; i < 5; i++)
//            marks[i] = 0;
//        grade = ' ';
//    }
//
//    Student(int id, const char* n, int m[]) : studentID(id) {
//        int size = strlen(n);
//        name = new char[size + 1];
//        for (int i = 0;i < size;i++) {
//            name[i] = n[i];
//        }
//        name[size] = '\0';
//        double sum = 0;
//        for (int i = 0; i < 5; i++) {
//            marks[i] = m[i];
//            sum += marks[i];
//        }
//
//        double avg = sum / 5.0;
//        calculateGrade(avg);
//    }
//
//    void calculateGrade(double avg) {
//        cout << "Grade: ";
//        if (avg >= 90) {
//            grade = 'A';
//            cout << "A";
//        }
//        else if (avg >= 80) {
//            grade = 'B';
//            cout << "B";
//        }
//        else if (avg >= 70) {
//            grade = 'C';
//            cout << "C";
//        }
//        else if (avg >= 60) {
//            grade = 'D';
//            cout << "D";
//        }
//        else {
//            grade = 'F';
//            cout << "F";
//        }
//        cout << endl;
//    }
//
//    void display(int index) {
//        cout << "Student " << index + 1 << "  Name: " << name << " ID: " << studentID << " Marks: ";
//        for (int i = 0; i < 5; i++) {
//            cout << marks[i] << " ";
//        }
//        cout << " Grade: " << grade << endl;
//    }
//
//    ~Student() {
//        delete[] name;
//    }
//};
//
//int main() {
//    int ts;
//    cout << "Enter number of students: ";
//    cin >> ts;
//    cin.ignore();
//
//    cout << "------------------------------------------------" << endl;
//    Student** students = new Student * [ts];
//
//    for (int i = 0; i < ts; i++) {
//        cout << "Enter name of student " << i + 1 << ": ";
//        char tName[100];
//        cin.getline(tName, 100);
//
//        cout << "Enter student ID: ";
//        int id;
//        cin >> id;
//
//        int m[5];
//        cout << "Enter marks for 5 subjects : ";
//        for (int j = 0; j < 5; j++)
//            cin >> m[j];
//        cin.ignore();
//
//        students[i] = new Student(id, tName, m);
//        cout << "------------------------------------------------" << endl;
//    }
//
//    cout << endl << endl;
//
//    cout << "=========================== Students Record ===========================" << endl;
//    for (int i = 0; i < ts; i++) {
//        students[i]->display(i);
//    }
//
//    for (int i = 0; i < ts; i++) {
//        delete students[i];
//    }
//    delete[] students;
//
//    return 0;
//}
