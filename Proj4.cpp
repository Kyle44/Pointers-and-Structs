// Author: Kyle Fritz
// File: Lab4.cpp
// Date Modified: 4/1/15
// Description: This program takes in three inputs, uses the struct Record, exercises what the difference is between functions with and without the & symbol
//   in front of the record does.  Also included is the const function that won't work because const doesn't allow any changes of data members in the struct.


#include <iostream>
#include <stdlib.h>   // This defines the library for atoi()

using namespace std;

// ADD ANY GLOBAL CONSTANTS HERE

// STEP 1: ADD YOUR "Record" STRUCTURE DEFINITION HERE
struct Record {
  char* m_firstName;
  char* m_lastName;
  int m_age;
};

void MungeRecord(Record myRec);
void MungeRecordForReal(Record &myRec);
//void MungeRecordFail(const Record myRec);


int main(int argc, char *argv[]) {
  cout << argc;
  cout << argv[0];
  cout << endl;
  cout < argv[1];
  cout < argv[2];
  cout < argv[3];

  Record myRec;
  myRec.m_firstName = argv[1];
  myRec.m_lastName = argv[2];
  myRec.m_age = atoi(argv[3]);

  MungeRecord(myRec);
  MungeRecordForReal(myRec);
  cout << myRec.m_age << endl;
  //  MungeRecordFail(myRec);

  // STEP 2: DECLARE A LOCAL VARIABLE "myRec" HERE, OF TYPE "Record"
  //   INITIALIZE THE MEMBERS FROM argv[] ELEMENTS

  // STEP 3: WRITE THE FUNCTION MungeRecord() DOWN BELOW, AFTER main().
  // ADD CALL TO MungeRecord() HERE, PASSING IN myRec AS ARGUMENT

  // AFTER IT RETURNS, PRINT OUT THE CONTENTS OF myRec

  // STEP 4: WRITE THE FUNCTION MungeRecordForReal() DOWN BELOW, AFTER main().
  // ADD CALL TO MungeRecordForReal() HERE, PASSING IN myRec AS ARGUMENT

  // AFTER IT RETURNS, PRINT OUT THE CONTENTS OF myRec
  // (Step 4 can be done by just cutting-and-pasting Step 3 above, then
  //  editing it slightly)

  // STEP 5: WRITE THE FUNCTION MungeRecordFail() DOWN BELOW, AFTER main().
  // ADD CALL TO MungeRecordFail() HERE, PASSING IN myRec AS ARGUMENT

  // AFTER IT RETURNS, PRINT OUT THE CONTENTS OF myRec
  // (Again, can just cut-and-paste from Step 3 above, then
  //  edit it slightly)

  return 0;
}

/*void MungeRecordFail(const Record myRec){
  cout << myRec.m_firstName << endl;
  cout << myRec.m_lastName << endl;
  cout << myRec.m_age << endl;
  char* a = myRec.m_firstName;
  myRec.m_firstName = myRec.m_lastName;
  myRec.m_lastName = a;
  myRec.m_age = -1;
  cout << myRec.m_firstName << endl;
  cout << myRec.m_lastName << endl;
  cout << myRec.m_age << endl;

  }*/

void MungeRecordForReal(Record &myRec){
  cout << myRec.m_firstName << endl;
  cout << myRec.m_lastName << endl;
  cout << myRec.m_age << endl;
  char* a = myRec.m_firstName;
  myRec.m_firstName = myRec.m_lastName;
  myRec.m_lastName = a;
  myRec.m_age = -1;
  cout << myRec.m_firstName << endl;
  cout << myRec.m_lastName << endl;
  cout << myRec.m_age << endl;

}

void MungeRecord(Record myRec){
  cout << myRec.m_firstName << endl;
  cout << myRec.m_lastName << endl;
  cout << myRec.m_age << endl;
  char* a = myRec.m_firstName;
  myRec.m_firstName = myRec.m_lastName;
  myRec.m_lastName = a;
  myRec.m_age = -1;
  cout << myRec.m_firstName << endl;
  cout << myRec.m_lastName << endl;
  cout << myRec.m_age << endl;

}
//
// NOW, ADD YOUR OTHER FUNCTIONS HERE
//   (Do not put it ABOVE main()! )
//
