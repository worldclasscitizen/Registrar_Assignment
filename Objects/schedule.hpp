//
//  schedule.hpp
//  C++
//
//  Created by 최진우 on 2022/12/18.
//

#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP

#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Schedule {
    string* courses;
    int index;
public:
    // 생성자
    Schedule();
    ~Schedule();
    
    // 함수
    void addCourse(string course);
    void print(); // 강의 목록 출력 (학생 개개인이 듣는 수업이 다르므로 student와 결합해야 한다.)
};

#endif
