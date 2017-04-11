//
// Created by barto on 26.03.17.
//

#include "Structure.h"
#include "Array.h"

#ifndef DATASTRUCTURESSDIZO_PROGRAM_H
#define DATASTRUCTURESSDIZO_PROGRAM_H

class Program {
private:

    Structure* _structure;

    bool _isBST = false;

public:

    void start();

private:

    void displayMenu(std::string info);

    void takeActionInMenu(std::string info);

};


#endif //DATASTRUCTURESSDIZO_PROGRAM_H