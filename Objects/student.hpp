//
//  student.hpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
#include <stdio.h>

#include "schedule.hpp"

using namespace std;

class Student {
    string name;
    // 1-2. student.cpp 내에서 schedule에 접근해야 하므로 ' Schedule* ' 을 선언해야 한다.
    Schedule* schedule;
public:
    // 생성자
    Student(string name);
    ~Student();

    // 함수
    string getName();
    Schedule* getSchedule();
    void addCourse(string name);
    void print(); // 학생 이름, 듣는 수업 목록 출력
};

#endif
