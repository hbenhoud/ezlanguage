#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>
#include "Node.h"
using namespace std;

//TODO do we have to turn it into an abstract class ?
class Instruction :
        public Node {
protected:

public:

Instruction();
string translate();
~Instruction();

};

#endif
