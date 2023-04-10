#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        int stu_id;
        string stu_name;
        int stu_age;
        string stu_course;
        string stu_email;
        string stu_city;
        string stu_college;

    public:
        void setStuId(int id) {
            stu_id = id;
        }

        int getStuId() {
            return stu_id;
        }

        void setStuName(string name) {
            stu_name = name;
        }

        string getStuName() {
            return stu_name;
        }

        void setStuAge(int age) {
            stu_age = age;
        }

        int getStuAge() {
            return stu_age;
        }

        void setStuCourse(string course) {
            stu_course = course;
        }

        string getStuCourse() {
            return stu_course;
        }

        void setStuEmail(string email) {
            stu_email = email;
        }

        string getStuEmail() {
            return stu_email;
        }

        void setStuCity(string city) {
            stu_city = city;
        }

        string getStuCity() {
            return stu_city;
        }

        void setStuCollege(string college) {
            stu_college = college;
        }

        string getStuCollege() {
            return stu_college;
        }
};

int main() {
    Student stu1;
    stu1.setStuId(1);
    stu1.setStuName("virat vamja");
    stu1.setStuAge(20);
    stu1.setStuCourse("full stack developer");
    stu1.setStuEmail("virat1816@gamil.com");
    stu1.setStuCity("surat");
    stu1.setStuCollege("RNW");

    Student stu2;
    stu2.setStuId(2);
    stu2.setStuName("virat patel");
    stu2.setStuAge(21);
    stu2.setStuCourse("full stack developer");
    stu2.setStuEmail("virat1816@gamil.com");
    stu2.setStuCity("surat");
    stu2.setStuCollege("RNW");
    
    Student stu3;
    stu3.setStuId(3);
    stu3.setStuName("virat ");
    stu3.setStuAge(21);
    stu3.setStuCourse("full stack developer");
    stu3.setStuEmail("virat1816@gamil.com");
    stu3.setStuCity("surat");
    stu3.setStuCollege("RNW");
    
    Student stu4;
    stu4.setStuId(4);
    stu4.setStuName("virat bhai");
    stu4.setStuAge(21);
    stu4.setStuCourse("full stack developer");
    stu4.setStuEmail("virat1816@gamil.com");
    stu4.setStuCity("surat");
    stu4.setStuCollege("RNW");
    
    Student stu5;
    stu5.setStuId(5);
    stu5.setStuName("virat bhai vamja");
    stu5.setStuAge(19);
    stu5.setStuCourse("full stack developer");
    stu5.setStuEmail("viratvamja1816@gamil.com");
    stu5.setStuCity("surat");
    stu5.setStuCollege("RNW3");

   
    cout << "Student 1: " << stu1.getStuName() << " (" << stu1.getStuAge() << ")" << endl;
    cout << "ID: " << stu1.getStuId() << endl;
    cout << "Course: " << stu1.getStuCourse() << endl;
    cout << "Email: " << stu1.getStuEmail() << endl;
    cout << "City: " << stu1.getStuCity() << endl;
    cout << "College: " << stu1.getStuCollege() << endl;

    cout << endl;

    cout << "Student 2: " << stu2.getStuName() << " (" << stu2.getStuAge() << ")" << endl;
    cout << "ID: " << stu2.getStuId() << endl;
    cout << "Course: " << stu2.getStuCourse() << endl;
    cout << "Email: " << stu2.getStuEmail() << endl;
    cout << "City: " << stu2.getStuCity() << endl;
    cout << "College: " << stu2.getStuCollege() << endl;

    cout << endl;

    cout << "Student 3: " << stu3.getStuName() << " (" << stu3.getStuAge() << ")" << endl;
    cout << "ID: " << stu3.getStuId() << endl;
    cout << "Course: " << stu3.getStuCourse() << endl;
    cout << "Email: " << stu3.getStuEmail() << endl;
    cout << "City: " << stu3.getStuCity() << endl;
    cout << "College: " << stu3.getStuCollege() << endl;

    cout << endl;

    cout << "Student 4: " << stu4.getStuName() << " (" << stu4.getStuAge() << ")" << endl;
    cout << "ID: " << stu4.getStuId() << endl;
    cout << "Course: " << stu4.getStuCourse() << endl;
    cout << "Email: " << stu4.getStuEmail() << endl;
    cout << "City: " << stu4.getStuCity() << endl;
    cout << "College: " << stu4.getStuCollege() << endl;

    cout << endl;
    
    cout << "Student 5: " << stu5.getStuName() << " (" << stu5.getStuAge() << ")" << endl;
    cout << "ID: " << stu5.getStuId() << endl;
    cout << "Course: " << stu5.getStuCourse() << endl;
    cout << "Email: " << stu5.getStuEmail() << endl;
    cout << "City: " << stu5.getStuCity() << endl;
    cout << "College: " << stu5.getStuCollege() << endl;

    cout << endl;
    
    return 0;
}

