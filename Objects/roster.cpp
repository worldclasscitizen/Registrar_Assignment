//
//  roster.cpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#include "roster.hpp"

// 생성자
Roster::Roster(): index(0) {
    names = new string[3];
}
Roster::~Roster() {}

void Roster::addStudent(string name) {
    names[index++] = name;
}

void Roster::print() {
    cout << "List of students" << endl;
    for(int i = 0; i < 3; i++) {
        // 위에서 듣는 학생의 명단을 충분히 입력해줬음
        cout << names[i] << endl;
    }
    cout << endl;
}
