//
//  schedule.cpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#include "schedule.hpp"

// 생성자
Schedule::Schedule():
    index(0) { courses = new string[3]; }
Schedule::~Schedule() {}

void Schedule::addCourse(string name) {
    // 2-1. int index 를 이용하여 course 명을 저장할 리스트에 접근한다.
    courses[index++] = name;
}

void Schedule::print() {
    cout << "List of Courses " << endl;
    for(int i = 0; i < 3; i++) {
        // 위에서 학생이 듣는 강좌 명단을 충분히 입력했음
        cout << courses[i] << endl;
    }
    cout <<endl;
}
