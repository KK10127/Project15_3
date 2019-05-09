/*
 * CHAPTER 15, PROJECT 3
 * CS 151
 * Tu 5:30-9:20 with Porto
 * Programmer: Jay Montoya
 *
 *
 * PROBLEM STATEMENT:
 *      A sequence of integers such as 1, 3, 5, 7, ..  can be represented by a function
 *      that takes a non-negative integer as a parameter and returns the corresponding
 *      term of the sequence. For example, the sequence of odd numbers just cited can be
 *      represented by the function
 *
 *      int odd(int k) { return 2 * k + 1; }
 *
 *      Write an abstract class AbstractSeq that has a pure virtual member function
 *
 *      virtual int fun(int k)  = 0;
 *
 *      as a stand-in for an actual sequence, and two member functions
 *
 *      void printSeq(int k, int m);
 *      int sumSeq(int k, int m);
 *
 *      that are passed two integer parameters k and m, where k < m. The function printSeq()
 *      will print all terms fun(k) through fun(m) of the sequence, and likewise, the function
 *      sumSeq will return the sum of those terms. Demonstrate your AbstractSeq class by
 *      creating subclasses that you use to sum the terms of at least two different sequcnes.
 *      Determine what kind of output best shows off the operation of these classes and write
 *      a program that produces that kind of output.
 *
 *
 */
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}