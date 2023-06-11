/* Course 목록 정리하기 */
/*
 1. 각 학생이 듣는 수업이 무엇인지 저장하기 위해 student로 접근한다.
    1-2. student.cpp 내에서 schedule에 접근해야 하므로 ' Schedule* ' 을 선언해야 한다.
 2. schedule의 addCourse로 접근하여 enroll 인자값 중 course명을 추가한다.
    2-1. int index 를 이용하여 course 명을 저장할 리스트에 접근한다.
 */
/* Student 목록 정리하기 */
/*
 1. 각 과목별로 듣는 학생 명단을 알아야 한다.
    1-2. course.cpp 내에서 roster에 접근해야 하므로 ' Roster* ' 을 선언해야 한다.
 2. roster의 addStudent로 접근하여 enroll 인자값 중 student명을 추가한다.
    2-1. 반복하면 끝. 각 과목별로 듣는 학생을 입력받았다.
 */

#include "registrar.hpp"

// 생성자
Registrar::Registrar() {}
Registrar::~Registrar() {}

void Registrar::enroll(Student student, Course course) {
    /* Course 목록 정리하기 */
    student.getSchedule()->addCourse(course.getName());
    
    /* Student 목록 정리하기 */
    course.getRoster()->addStudent(student.getName());
}
