#ifndef TESTER_H_INCLUDED
#define TESTER_H_INCLUDED
/// \file tester.h
/// \brief tester class header
#include <string>
using namespace std;

class Tester
{
    public :
        static Tester* getInstance();
        //destructor
        ~Tester(void);
        int testIt(const string& in_sWhichTest);
        void testTemplate();
        void testFactory();
        void testNullClass();
        void testVectorErase();
        void testOddOccurencesInArrays();
        void testPermMissingElemLessons3();
        void testFrogJmpLessons3();
        void testMissingIntegerLesson4();
        void testCountDivLesson5();
        void testDistinctLesson6();
        void testBracketsLesson7();
        void testDomminatorLesson8();
        void testMaxProfitLesson9();
        void testMinPerimRectangle();
        void testCountSemiPrimesLesson11();
        void testChocolatesLesson12();
        void testGcd(); 
        void testFibo();
        void testBinSearchLe();//Le ie Less or Equal
        void testCountAbsolute();
    private:
        static Tester* m_Instance;
        //constructor
        Tester();
};
#endif  //TESTER_H_INCLUDED
