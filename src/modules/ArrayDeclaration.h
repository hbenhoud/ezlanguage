#ifndef ARRAYDECLARATION_H
#define ARRAYDECLARATION_H

#include <string>
#include "Node.h"
#include "../hash_table/Variable.h"

/**
 * @brief 
 * @author : Ismail ELFAQIR
 * 
 */
class ArrayDeclaration :
public Node {
protected:
    Variable *var;
    int size;
public:

    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */


    /**
    * Default constructor
    * Set Variable to NULL and size to 0
    * @author Ismail ELFAQIR
    */
    ArrayDeclaration();

    /**
    * Constructor with parameters
    * Set the Variable and the size of array by the parameters passed to the constructor
    * @param v : pointer to the Variable
    * @param s : size of array
    * @author Ismail ELFAQIR
    */
    ArrayDeclaration(Variable *v, int s );

    /**
    * Constructor with parameters
    * Set only the Variable without specify the size of array
    * @param v : pointer to the Variable
    * @author Ismail ELFAQIR
    */
    ArrayDeclaration(Variable *v);

    /**
    * Copy constructor
    * @param cpy : the array that we want to cpy to the actual array
    * @author Ismail ELFAQIR
    */
    ArrayDeclaration(const ArrayDeclaration & cpy);

    /**
    * Destructor
    * @author Ismail ELFAQIR
    */
    virtual ~ArrayDeclaration();

    /* * * * * * * * * * * * * *
    * ACCESSORS  AND MUTATORS *
    * * * * * * * * * * * * * */

    /**
    * getter of Variable
    * @author Ismail ELFAQIR
    */
    Variable * get_variable() const;

    /**
    * getter of size
    * @author Ismail ELFAQIR
    */
    int get_size() const;

    /**
    * setter of size
    * @param v : the Variable of this array
    * @author Ismail ELFAQIR
    */
    void set_variable(Variable *v);

    /**
    * setter of size
    * @param s : value of the size
    * @author Ismail ELFAQIR
    */
    void set_size(int s);

    /* * * * * * * *
    * Translation  *
    * * * * * * * **/

    /**
     * @brief Translate the begining part of the ArrayDeclaration
     * @return a string containing the C++ code of the node
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
};

#endif
