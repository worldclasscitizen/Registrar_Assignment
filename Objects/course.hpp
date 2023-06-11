//
//  course.hpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>
#include <string>
#include <stdio.h>

#include "roster.hpp"

using namespace std;

class Course {
    string subject;     // 과목명
    int units;          // 이수학점
    // 1-2. course.cpp 내에서 roster에 접근해야 하므로 ' Roster* ' 을 선언해야 한다.
    Roster* roster;
public:
    // 생성자
    Course(string subject, int units);
    ~Course();

    // 함수
    string getName();
    Roster* getRoster();
    void addStudent(string subject);
    void print(); // 강좌명, 이수 학점과 듣는 학생 목록 출력
};

#endif
