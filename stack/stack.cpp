/*
 * Copyright (c) 2017 <copyright holder> <email>
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "stack.h"

Stack::Stack(const int size)
{
    size=size;
    array=new int[size];
    top=-1;
}

Stack::Stack ( const Stack& other )
{

}

Stack::~Stack()
{

}

Stack& Stack::operator= ( const Stack& other )
{

}

bool Stack::operator== ( const Stack& other ) const
{

}

int Stack::push(const int el)
{
    if(top>=size){
        return -1;
    }
    array[top]=el;
    ++top;
}

int Stack::pop()
{
    if(top <= -1){
        return -1;
    }
    int el=array[top];
    --top;
    return el;
}
