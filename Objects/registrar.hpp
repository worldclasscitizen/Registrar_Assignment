#ifndef REGISTRAR_HPP
#define REGISTRAR_HPP

#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>

#include "course.hpp"
#include "student.hpp"

class Registrar {
public:
    // 생성자
    Registrar();
    ~Registrar();
    
    // 함수
    void enroll(Student student, Course course);
};

#endif
