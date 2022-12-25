#include <iostream>
#include <algorithm>
#include <vector>


class Students {
private:
    std::string m_name;
public:
    Students(std::string name) {
        m_name = name;
    }
    std::string getName() {
        return m_name;
    }
};

class Teachers {
private:
    std::vector<Students> m_students = {};
    std::string m_name;
public:
    Teachers(std::vector<Students> students, std::string name) {
        m_name = name;
        for (int i = 0; i < students.size(); i++) {
            m_students.push_back(students.at(i));
        }
    }
    void getTeacher(){
        std::cout << "Teacher - " << m_name << std::endl;
    }
    void addStudents(Students student) {
        m_students.push_back(student);
    }

    void printStudents() {
        std::cout << "Students: ";
        for (int i = 0; i < m_students.size(); i++) {
            std::cout << m_students.at(i).getName() << " ";
        }
        std::cout << "\n";
    }
    ~Teachers() {
        m_students.clear();
        std::cout << "Everything is clear" << std::endl;
    }
};

int main()
{
    std::vector<Students> students;
    students.push_back(Students("Aleksei"));
    students.push_back(Students("Homer"));
    Teachers *teacher = new Teachers(students, "Aleksandr");
    teacher -> getTeacher();
    teacher -> printStudents();
    delete teacher;
    }
