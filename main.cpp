
#include "director.hpp"

using namespace std;

int main()
{
  // 여행 유형 선택
  int type;
  do
  {
    cout << "Enter the type of vacation(1, 2, 3): ";
    cin >> type;
  } while(type < 1 || type > 3);
  // 여행 계획 확인
  Director::book(type);
  return 0;
}
