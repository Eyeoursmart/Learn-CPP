// <-- Double slash is a one line comment, comments are for code maintainability and telling people what stuff does
//The compiler ignores comments completely, please document code that would not be understandable at first glance
/* <-- Slash star is 
multi
line*/

//Includes and preprocessor go here
#include <iostream>

//using namespace(s)
using namespace std;

//Body

/*This next piece of code is the "Application entry point", it is the first function that is called (barring OS)
Without you would not be able to make a valid application (it wouldn't link)
It looks like this or the longer more formal version : int main(int argc, char* argv[])
There can only be one main function (cannot be overloaded, will come much later)
It can also be void main but shouldn't be for almost all purposes
*/

int main(){
  cout << "Hello World!" << endl;
  //Without using namespace std it would look like this, it just brings in everything from the std namespace
  std::cout << "Hello World!" << std::endl;
  
  return 0; //<- This tells the OS the program exited sucessfully. Something other than 0 is a failure
}
