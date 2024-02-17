// Pre Proccessor operator, called before compile the code
// Used to iport iostream library and namespace std to be able to use cout operator
#include <iostream>
using namespace std;
// Library to be able to use string types
#include <string>

#include "Person.h"
#include "Professional.h"

int main()
{
    Person personObjectName = Person("Mario", 22, "M");
    Professional professionalObjectName = Professional("Engineer Mario", 30, "M", "Enginer in comuinications and electronic");
    personObjectName.describePerson();
    professionalObjectName.describePerson();
    professionalObjectName.describeProfessional();
    return 0;
}