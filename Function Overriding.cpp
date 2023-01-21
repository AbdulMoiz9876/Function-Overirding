#include <iostream>

using namespace std;

class parent_class

{

public:

     void print()

    {

        cout << "\nThis is print() method"

                " of BaseClass";

    }

};

class derived_class : public parent_class

{

public:

    // Function Overriding - new definition of

    // print method of base class

    void print()

    {

        cout << "\nThis is print() method"

                " of the Derived Class";

    }

};

// Driver code

int main()

{

    derived_class obj;

    obj.print();

}
