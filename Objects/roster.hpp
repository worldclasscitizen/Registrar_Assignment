//
//  roster.hpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#ifndef ROSTER_HPP
#define ROSTER_HPP

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Roster {
    string* names;
    int index;
public:
    // 생성자
    Roster();
    ~Roster();

    // 함수
    void addStudent(string name);
    void print(); // 학생 명단 출력 (각 강좌마다 듣는 학생이 다르므로 구분해야 한다.)
};

#endif
