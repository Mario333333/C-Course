class Person {
    private:
        // Declaring variables
        string name;
        int age;
        string genre;
    public:
        // default constructor
        Person();
        // overcharging destructor
        // Constructor to create a complete object
        Person(string name, int age, string genre);
        // destructor
        ~Person();

        void describePerson ();
};

Person::Person() {
    cout << "Default Person destructor called when we instace a object without data" << endl;
}

Person::Person(string name, int age, string genre) {
    // Defining variables throught constructor
    this->name = name;
    this->age = age;
    this->genre = genre;
}

Person::~Person(){
    cout << "Destructor ~Person called when the program end" << endl;
}

void Person::describePerson(){
    cout << "Describing name: " << this->name<< endl;
    cout << "Describing age: " << this->age<< endl;
    cout << "Describing genre: " << this->genre<< endl;
}

