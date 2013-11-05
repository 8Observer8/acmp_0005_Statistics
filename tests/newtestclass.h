/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 5, 2013, 9:23:42 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testStatistics_01);
    CPPUNIT_TEST(testStatistics_02);
    CPPUNIT_TEST(testStatistics_03);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testStatistics_01();
    void testStatistics_02();
    void testStatistics_03();
};

#endif	/* NEWTESTCLASS_H */

