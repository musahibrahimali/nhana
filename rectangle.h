#pragma once
//
// Created by Nhana on 9/28/2021. 
// for the dynamic nature i suggest using pointer for the variables
// using generic data types may take away the ability to asign data dynamically
// 

#include <iostream>
#ifndef COMPLETE_PLUS_RECTANGLE_H
#define COMPLETE_PLUS_RECTANGLE_H

class Rectangle {
    /*
     * This is the header file implementation of the Rectangle class
     * GetArea returns the area of the rectangle
     * GetPerimeter returns the perimeter of the rectangle
     * getLength returns the length of the rectangle
     * setLength sets the Length of the rectangle to a new supplied value
     * getBreadth returns the breath of the rectangle
     * getBreadth sets the breath of the rectangle to a new supplied value
     * Rectangle === the default constructor of the Rectangle class
     * ~Rectangle === the default destructor (all memory cleaning for the dynamic memory allocation happens here)
     * */

    private:
        /* The data type can be changed to suit your preference, i just feel float is okay for a rectangle
         * it can be changed to say double or int if you deem fit */
        float* Length = new float; // dynamic float variable
        float* Width = new float; // dynamic float variable
    public:
        /* default constructor */
        explicit Rectangle(float* length = 0, float* width = 0) { // take the length and bread on instantiation
            // assign the individual values to their respective variables
            Length = length; // assign the provided length
            Width = width; // assign the provided breadth
        }

        /* defaults destructor */
        // this is the default function called when the object is destroyed
        ~Rectangle() {
            // all variables are dropped and memory is re-allocated
            delete Length; // delete the length from memory
            delete Width; // delete the breadth from memory
        };

        /* getters and setters for length and breadth */
        // set length
        void setLength(float* newLength) {
            Length = newLength; // set the length of the rectangle
        }
        // get length
        float* getLength() {
            return Length; // return the length of the rectangle
        }

        // set length
        void setBreadth(float* newBreadth) {
            Width = newBreadth; // set the breadth of the rectangle
        }
        // get length
        float* getBreadth() {
            return Width; // return the breadth of the rectangle
        }

        // calculate the area
        float GetArea() {
            /* calculate and return the area of the rectangle */
            return *Length * *Width; // return the area of the rectangle
        }

        // calculate the perimeter
        float GetPerimeter() {
            /* calculate and return the perimeter of the rectangle */
            return 2 * (*Length + *Width); // return the perimeter of the rectangle
        }
};

#endif //COMPLETE_PLUS_RECTANGLE_H
