#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP
#include <string>
#include <iostream>
#include <stdio.h>
#include <cassert>

using namespace std;

class Vacation {

public:
    Vacation() {}
    ~Vacation() {}
    
    void bookHotels() { cout << "Hotels are booked" << endl; }
    virtual void bookFlights() = 0;
    virtual void bookTours() = 0;
};

//
//
// PACKAGE 1
//
//

class Package1 : public Vacation {
public:
    Package1() {}
    ~Package1() {}
    
    void bookHotels()  {
        cout << "Hotels are booked" << endl;
    }
    void bookFlights() override {
        cout << "Flights are booked" << endl;
    }
    void bookTours() override {
        cout << "Run:" << endl; // 이건 무슨 출력이지..?
    }
};

//
//
// PACKAGE 2
//
//

class Package2 : public Vacation {
public:
    Package2() {}
    ~Package2() {}
    
    void bookHotels()  {
        cout << "Hotels are booked" << endl;
    }
    void bookFlights() override {
        cout << "" << endl;
    }
    void bookTours() override {
        cout << "Tours are booked" << endl;
    }
};

//
//
// PACKAGE 3
//
//

class Package3 : public Vacation {
public:
    Package3() {}
    ~Package3() {}
    
    void bookHotels()  {
        cout << "Hotels are booked" << endl;
    }
    void bookFlights()  {
        cout << "Flights are booked" << endl;
    }
    void bookTours()  {
        cout << "Tours are booked" << endl;
    }
};

// 정적 멤버를 갖는 Director 클래스
class  Director
{
  public:
    static Vacation* vacation;
    static void book(int type); // 클라이언트는 이 함수만 호출 가능
};
#endif
