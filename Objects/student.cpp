//
//  student.cpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#include "student.hpp"

// 생성자
Student::Student(string _name): name(_name) {
    schedule = new Schedule;
}
Student::~Student() {}

string Student::getName() {
    return name;
}

// 1-2. student.cpp 내에서 schedule에 접근해야 하므로 ' Schedule* ' 을 선언해야 한다.
Schedule* Student::getSchedule() {
    return schedule;
}

void Student::addCourse(string name) {
    schedule->addCourse(name);
}

void Student::print() {
    cout << "Student name: " << name << endl;
    schedule->print(); // 강좌 목록 불러오기
}
