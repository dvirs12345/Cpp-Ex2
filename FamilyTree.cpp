//Author - Dvir Sadon
#include "FamilyTree.hpp"
#include <iostream>
using namespace std;

namespace family
{
    Tree::Tree(string)
    {
        // Stay default
    }

    Tree Tree::addFather(string ,string){return Tree("Add Father dummy");}
    
    Tree Tree::addMother(string ,string){return Tree("Add Mother dummy");}
    
    string Tree::relation(string){return "Relation dummy";}
    
    string Tree::find(string){return "Find dummy";}
    
    void Tree::remove(string)
    {
        // Remove dummy
    }
    void Tree::display()
    {
        // Display dummy
    }
}