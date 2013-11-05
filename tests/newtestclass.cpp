/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 5, 2013, 9:23:43 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

#include <vector>
#include <string>
using namespace std;

string statistics(vector<int>& input, vector<int>& outOdd, vector<int>& outEven);

void newtestclass::testStatistics_01() {
    vector<int> input;
    input.push_back(4);
    input.push_back(16);
    input.push_back(19);
    input.push_back(31);
    input.push_back(2);
    
    vector<int> outOdd;
    vector<int> outEven;

    string answerResult = statistics(input, outOdd, outEven);
    string answerExpected = "YES";
    CPPUNIT_ASSERT(answerResult == answerExpected);
    
    int sizeEvenResult = outEven.size();
    int sizeEvenExpected = 3;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("sizeOddResult != 3", sizeEvenExpected, sizeEvenResult);

    int sizeOddResult = outOdd.size();
    int sizeOddExpected = 2;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("sizeOddResult != 2", sizeOddExpected, sizeOddResult);
    
    vector<int> evenExpected;
    evenExpected.push_back(4);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[0] != 4", evenExpected[0], outEven[0]);
    evenExpected.push_back(16);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[1] != 16", evenExpected[1], outEven[1]);
    evenExpected.push_back(2);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[2] != 2", evenExpected[2], outEven[2]);
    
    vector<int> oddExpected;
    oddExpected.push_back(19);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[0] != 19", oddExpected[0], outOdd[0]);
    oddExpected.push_back(31);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[1] != 31", oddExpected[1], outOdd[1]);
}

void newtestclass::testStatistics_02() {
    vector<int> input;
    input.push_back(29);
    input.push_back(4);
    input.push_back(7);
    input.push_back(12);
    input.push_back(15);
    input.push_back(17);
    input.push_back(24);
    input.push_back(1);
    
    vector<int> outOdd;
    vector<int> outEven;

    string answerResult = statistics(input, outOdd, outEven);
    string answerExpected = "NO";
    CPPUNIT_ASSERT(answerResult == answerExpected);
    
    int sizeEvenResult = outEven.size();
    int sizeEvenExpected = 3;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("sizeOddResult != 3", sizeEvenExpected, sizeEvenResult);

    int sizeOddResult = outOdd.size();
    int sizeOddExpected = 5;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("sizeOddResult != 5", sizeOddExpected, sizeOddResult);
    
    vector<int> evenExpected;
    evenExpected.push_back(4);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[0] != 4", evenExpected[0], outEven[0]);
    evenExpected.push_back(12);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[1] != 12", evenExpected[1], outEven[1]);
    evenExpected.push_back(24);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[2] != 24", evenExpected[2], outEven[2]);
    
    vector<int> oddExpected;
    oddExpected.push_back(29);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[0] != 29", oddExpected[0], outOdd[0]);
    oddExpected.push_back(7);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[1] != 7", oddExpected[1], outOdd[1]);
    oddExpected.push_back(15);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[2] != 15", oddExpected[2], outOdd[2]);
    oddExpected.push_back(17);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[1] != 17", oddExpected[1], outOdd[1]);
    oddExpected.push_back(1);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[2] != 1", oddExpected[2], outOdd[2]);
}

void newtestclass::testStatistics_03() {
    vector<int> input;
    input.push_back(29);
    input.push_back(4);
    input.push_back(7);
    input.push_back(12);
    input.push_back(15);
    input.push_back(24);
    
    vector<int> outOdd;
    vector<int> outEven;

    string answerResult = statistics(input, outOdd, outEven);
    string answerExpected = "YES";
    CPPUNIT_ASSERT(answerResult == answerExpected);
    
    int sizeEvenResult = outEven.size();
    int sizeEvenExpected = 3;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("sizeOddResult != 3", sizeEvenExpected, sizeEvenResult);

    int sizeOddResult = outOdd.size();
    int sizeOddExpected = 3;
    CPPUNIT_ASSERT_EQUAL_MESSAGE("sizeOddResult != 3", sizeOddExpected, sizeOddResult);
    
    vector<int> evenExpected;
    evenExpected.push_back(4);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[0] != 4", evenExpected[0], outEven[0]);
    evenExpected.push_back(12);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[1] != 12", evenExpected[1], outEven[1]);
    evenExpected.push_back(24);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outEven[2] != 24", evenExpected[2], outEven[2]);
    
    vector<int> oddExpected;
    oddExpected.push_back(29);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[0] != 29", oddExpected[0], outOdd[0]);
    oddExpected.push_back(7);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[1] != 7", oddExpected[1], outOdd[1]);
    oddExpected.push_back(15);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("outOdd[2] != 15", oddExpected[2], outOdd[2]);
}
