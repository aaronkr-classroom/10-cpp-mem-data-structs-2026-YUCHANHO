//new_delete.cpp

#include <iostream>

using namespace std;

int main()
{
    // 1. p1: 지역 변수(Stack)를 가리키는 포인터
    int val = 10;
    int* p1 = &val; 
    
    // 2. p2: 동적 할당(Heap)된 단일 객체
    int* p2 = new int(20); 
    
    // 3. arr: 동적 할당(Heap)된 배열 객체 (크기 3)
    int* arr = new int[3]; 
    arr[0] = 100; arr[1] = 200; arr[2] = 300;

    // --- 교수님 확인용 출력 ---
    cout << "p1 (Stack) -> " << *p1 << endl;
    cout << "p2 (Heap)  -> " << *p2 << endl;
    cout << "arr[0] (Heap Array) -> " << arr[0] << endl;

    
    delete p2;     // 단일 객체 해제
    delete[] arr;  // 배열 객체 해제 (반드시 [] 사용)[cite: 1]

    return 0;
}