//
//  Set.cpp
//  HW 4
//
//  Created by Li-Wei Tseng on 5/25/14.
//  Copyright (c) 2014 Li-Wei Tseng. All rights reserved.
//

//#define SET
#ifdef SET
#include "Set.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

void test()
{
    Set<int> si;
    Set<string> ss;
    assert(si.empty());
    assert(ss.size() == 0);
    assert(si.insert(10));
    assert(ss.insert("hello"));
    assert(si.contains(10));
    assert(si.erase(10));
    string s;
    assert(ss.get(0, s)  &&  s == "hello");
    Set<string> ss2(ss);
    ss.swap(ss2);
    ss = ss2;
    unite(si,si,si);
    unite(ss,ss2,ss);
    subtract(si,si,si);
    subtract(ss,ss2,ss);
}

#include "Set.h"  // class template from problem 1
#include <string>
using namespace std;

class Bottle
{
public:
    Bottle(string c) : m_contents(c) {}
    Bottle() : m_contents("Empty") {}
    string contents() const { return m_contents; }
private:
    string m_contents;
};

 int main()
 {
 Set<int> si;
 si.insert(7);              // OK
 Set<Bottle> sb;
 sb.insert(Bottle("7-Up"));  // error!
 }

/*
 int main()
 {
 test();
 cout << "Passed all tests" << endl;
 }*/
#endif
