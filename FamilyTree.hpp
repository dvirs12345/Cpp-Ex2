// Author - Dvir Sadon
#pragma once
#include <iostream>
using namespace std;

namespace family
{
    class Tree
    {
        public:
        Tree(string);
        Tree addFather(string ,string);
        Tree addMother(string ,string);
        void display();
        void remove(string);
        string relation(string);
        string find(string);
    };
    
    class InvalidRelative: public exception
	{
	  virtual const char* what() const throw()
	  {
		return "The relative that was entered is invalid";
	  }
	};
}