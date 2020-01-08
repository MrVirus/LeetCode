//////////////////////////////11'4//'''//
// Created by seventh on 2019/4/1.
//

#ifndef LEETCODE_PRINTUTIL_H
#define LEETCODE_PRINTUTIL_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

// 打印模板
class Printutil {
public:
    template<typename T>
    void PrintVector(vector<T> v);     // 打印vector
    template<typename T>
    void PrintList(list<T> v);         // 打印list
};

// ------------ 打印模板实现 Begin ----------------

// 打印vector
template<typename T>
void Printutil::PrintVector(vector<T> v) {
    cout << "PrintVector Begin." << endl;
    for (int i = 0; i < v.size() ; ++i) {
        cout << "Value=" << v[i] << endl;
    }
    cout << "PrintVector End." << endl;
}

// 打印list
template<typename T>
void Printutil::PrintList(list<T> v) {
    cout << "PrintList Begin." << endl;
    for (auto it = v.begin(); it != v.end() ; ++it) {
        cout << "Value=" << *it << endl;
    }
    cout << "PrintList End." << endl;
}

// ------------ 打印模板实现 End ----------------

#endif //LEETCODE_PRINTUTIL_H
