class Person {
    private:
        // Declaring variables
        string name;
        int age;
        string genre;
    public:
        // overcharging constructors, constructors with the same name
        // default constructor
        Person();
        // Constructor to create a complete object
        Person(string name, int age, string genre);

        Person(string name);
        // destructor
        ~Person();

        void describePerson ();
};

Person::Person() {
    cout << "POO Default Person destructor called when we instace a object without data" << endl;
}

Person::Person(string name, int age, string genre) {
    // Defining variables throught constructor
    this->name = name;
    this->age = age;
    this->genre = genre;
    cout << "POO You called a constructo that receives 3 parameters" << endl;
}

Person::Person(string name) {
    // Defining variables throught constructor
    this->name = name;
    
    cout << "POO You called a constructo that receives 1 parameter to set the name" << endl;
}

Person::~Person(){
    cout << "POO Destructor ~Person called when the program end" << endl;
}

void Person::describePerson(){
    cout << "POO Describing name: " << this->name<< endl;
    cout << "POO Describing age: " << this->age<< endl;
    cout << "POO Describing genre: " << this->genre<< endl;
}

