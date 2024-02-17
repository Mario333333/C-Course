class Professional : public Person
{
private:
    string carrer;
    bool haveBachelorDegree;

public:

    // default destructo 

    Professional();


    // overcharging destructor
    Professional(string name, int age, string genre, string carrer);
    
    // destructor
    ~Professional();
    void describeProfessional();
};

Professional::Professional() {
    cout << "Default Professional destructor called when we instace a object without data" << endl;
}


Professional::Professional(string name, int age, string genre, string carrer) : Person(name, age, genre)
{
    this->carrer = carrer;
}

Professional::~Professional()
{
    cout << "Destructor ~Professional called when the program end" << endl;

    this->haveBachelorDegree = true;
}

void Professional::describeProfessional()
{
     cout << this->carrer << endl << this->haveBachelorDegree << endl;
}
