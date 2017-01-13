//----- LinkedList.h -----
#include <iostream>
using namespace std;

#ifndef LAB1_EGGENSPERGERMARIYA_LINKEDLIST_H
#define LAB1_EGGENSPERGERMARIYA_LINKEDLIST_H
/**
 * Title: Lab 1 : Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/11/2017
 *
 * Header file defines the data for a program which
 * asks a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger, Dr. Feiling Jia
*/
typedef int ElementType;

class LinkedList
{
public:
    LinkedList();   // constructor
    ~LinkedList();  // destructor
    LinkedList(const LinkedList & original); //copy constructor
    void insert(ElementType item, int pos);
    void erase(ElementType item);

    void display(ostream & out) const;
    /*--------------------------------------------------------------------
    Display the contensts of this LinkedList.
    Precondition: ostream out is open
    Postcondition: Elements of this LinkedList have been output to out.
    --------------------------------------------------------------------*/

    ElementType maxItem();

private:
    class Node
    {
    public:
        ElementType data;
        Node * next;
        //------ Node OPERATIONS
        //-- Default constrctor: initializes next member to
        Node()
                : next(NULL)
        { }
        //-- Explicit-value constructor: initializes data member to dataValue
        //-- and next member to 0
        Node(ElementType dataValue)
                : data(dataValue), next(NULL)
        { }
    };
    Node * first;
    int mySize;
};
#endif //LAB1_EGGENSPERGERMARIYA_LINKEDLIST_H
