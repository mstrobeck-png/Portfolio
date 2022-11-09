/* I apologize if I used anything outside of what we've learned. I have studied c++ before in high school and if I can't figure something out
one way, I tend to pull knowledge I already have about certain topics. Therefore making me mix up what we've covered in the recorded 
lectures as well what we may not have fully discussed. I try really hard to only use what we learned though! */



#include <iostream>
#include "MovableObject.h"
#include "Orc.h"
#include "Ogre.h"
#include <vector>
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>
#include <memory>
#include <stdlib.h>
#include <time.h> 
using namespace std;


int main()
{
    
    cout << "Here is some information about my Horde." << endl;

    int x = 0;
    int y = 0;


  // vector<MovableObject*>obj;  //populate with 2 orcs, 3 ogres   --> I struggled with the vector filling so I ended up using unqiue
  // obj.resize(5);

   unique_ptr<Orc> orc1(new Orc());
    x = rand() % 201 + (-100);
    y = rand() % 201 + (-100);
    orc1->Display(x, y);
    orc1.reset();

    unique_ptr<Orc> orc2(new Orc());
    x = rand() % 201 + (-100);
    y = rand() % 201 + (-100);
    orc2->Display(x, y);
    orc2.reset();


    unique_ptr<Ogre> og1(new Ogre());
    x = rand() % 201 + (-100);
    y = rand() % 201 + (-100);
    og1->Display(x, y);
    og1.reset();

    unique_ptr<Ogre> og2(new Ogre());
    x = rand() % 201 + (-100);
    y = rand() % 201 + (-100);
    og2->Display(x, y);
    og2.reset();

    unique_ptr<Ogre> og3(new Ogre());
    x = rand() % 201 + (-100);
    y = rand() % 201 + (-100);
    og3->Display(x, y); 
    og3.reset();

    _CrtDumpMemoryLeaks(); //clean memory
}

