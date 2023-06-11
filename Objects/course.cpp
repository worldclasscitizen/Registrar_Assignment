//
//  course.cpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#include "course.hpp"

// 생성자
Course::Course(string _subject, int _units): subject(_subject), units(_units) {
    roster = new Roster;
}
Course::~Course() {}

string Course::getName() {
    return subject;
}

// 1-2. course.cpp 내에서 roster에 접근해야 하므로 ' Roster* ' 을 선언해야 한다.
Roster* Course::getRoster() {
    return roster;
}

void Course::addStudent(string subject) {
    roster->addStudent(subject);
}

void Course::print() {
    cout << "Course Name: " << subject << endl;
    cout << "Number of Units: " << units << endl;
    roster->print(); // 학생 명단 불러오기
    cout << endl;
}
