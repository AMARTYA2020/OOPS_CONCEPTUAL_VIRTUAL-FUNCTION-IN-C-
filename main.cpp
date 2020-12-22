#include <iostream>

using namespace std;
 /* CONTRIBUTED BY AMARTYA PANDEY, 22ND OF DECEMBER 2020

 I HOPE YOU WILL LIKE IT:
CONSIDER THERE IS A BASE CLASS "W" AND HAS TWO DERIVED CLASS "X" AND "Y" AND FURTHER "X" AND "Y" AS A BASE CLASS TO DERIVED CLASS "Z"

IN THIS SCENARIO THE COMPILER GETS CONFUSED AS THERE ARE TWO PATHS TO REACH THE BASE class HERE COMES VIRTUAL BASE CLASS...... :)
*/

class A{
public:
    void display()
    {

        cout<<"Hello there its me Amartya demonstrating conceptual use of virtual base class"<<endl;
    }
};

class B: public A{
public:
    //CODES->MEMBERS AND METHODS
};

class C:public A{
public:
    // CODES -> MEMBERS AND METHODS

};

class D:public B,public C{
public:
    // CODES -> MEMBERS AND METHODS
};

int main()
{

    D obj_D;
    obj_D.display();
    return 0;
}

/* WE GET AMBIGUITY ERROR AS THERE ARE MULTIPLE BASE AND DERIVED CLASS THAT IS TWO DIFFERENT PATHS HERES COMES VIRTUAL BASE IN PICTURE */

/* HERE THE INITIAL BASE CLASS IS "A" SO WE INHERITATE USING VIRTUAL KEYWORD */

class A{
public:
    void display(){
    cout<<"Now we Run the program successfully using virtual keyword in the initial base class while inhertance"<<endl;
    }
};

class B:virtual public A:{
public:
    //SOME CODE-> MEMBERS AND METHODS
};

class C:virtual public A:{
public:
    //SOME CODE-> MEMBERS AND METHODS
};

class D:public B,public A{
public:
    // SOME CODE-> MEMBERS AND METHODS
};

int main()
{
    D obj_D;
    obj_D.display();
    return 0;
}

