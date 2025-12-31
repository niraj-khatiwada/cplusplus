#include <iostream>

class Person {
private:
  std::string name;
  bool is_active = true;

public:
  static void log_class_name() {
    std::cout << "Person" << "\n";
  };

  Person() {}
  // Recommended: you can also initialize using "List Initializer"
  Person(std::string name, bool is_active = true) : name(name), is_active(is_active) {};
  // a destructor gets called when it goes out of scope
  ~Person() {
    std::cout << "I'm destroyed -> " << this->name << "\n";
  }

  // Person(std::string name, bool is_active = true) {
  //   this->name = name;
  //   this->is_active = is_active;
  // }

  void set_name(std::string name) {
    this->name = name;
  }
  std::string get_name() {
    return this->name;
  }
  bool is_person_active() {
    return this->is_active;
  }

  // just like struct, you can define the method here and write the implementation logic separately
  bool is_person_active2();
};

bool Person::is_person_active2() {
  return this->is_active;
};

int main() {
  Person::log_class_name();

  {
    Person person;
    person.set_name("1. Niraj");
    std::cout << person.get_name() << "\n";
    std::cout << person.is_person_active() << "\n";
    // destructor will be called immediately after this
  };

  Person person2("2. Niraj");
  std::cout << person2.get_name() << "\n";
  std::cout << person2.is_person_active() << "\n";
  std::cout << person2.is_person_active2() << "\n";

  Person* ptr = new Person("3. Niraj", false);
  std::cout << ptr->get_name() << "\n";
  delete ptr; // since you're performing manual memory management here, Person destructor won't be called unless you delete the dynamic memory.
}
