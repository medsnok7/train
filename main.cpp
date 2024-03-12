// #include <iostream>

// // Base class
// class Animal {
// protected:
//     std::string species;

// public:
//     // Constructor
//     Animal(const std::string& species) : species(species) {
//         std::cout << "Animal constructor called with species: " << species << std::endl;
//     }

//     // Method
//     void printSpecies() const {
//         std::cout << "Species: " << species << std::endl;
//     }
// };

// // Derived class 1
// class Mammal : public Animal {
// protected:
//     int numLegs;

// public:
//     // Constructor
//     Mammal(const std::string& species, int numLegs) : Animal(species), numLegs(numLegs) {
//         std::cout << "Mammal constructor called with species: " << species << ", numLegs: " << numLegs << std::endl;
//     }

//     // Method
//     void printNumLegs() const {
//         std::cout << "Number of legs: " << numLegs << std::endl;
//     }
// };

// // Derived class 2
// class Dog : public Mammal {
// private:
//     std::string name;

// public:
//     // Constructor
//     Dog(const std::string& species, int numLegs, const std::string& name) : Mammal(species, numLegs), name(name) {
//         std::cout << "Dog constructor called with species: " << species << ", numLegs: " << numLegs << ", name: " << name << std::endl;
//     }

//     // Method
//     void printName() const {
//         std::cout << "Name: " << name << std::endl;
//     }
// };

// int main() {
//     // Create an object of the most derived class
//     Dog myDog("Canis lupus familiaris", 4, "Buddy");

//     // Access methods from each class
//     myDog.printSpecies();
//     myDog.printNumLegs();
//     myDog.printName();

//     return 0;
// }




// #include<iostream>
// #include<cstring>

// class String{
//     public:
//     String()=default;
//     String(const char* ch){
//         std::cout<<"created!"<<std::endl;
//         t_size=strlen(ch);
//         t_data=new char[t_size];
//         memcpy(t_data,ch,t_size);
//     }
//     String(const String& other){
//         std::cout<<"copied!"<<std::endl;
//         t_size=other.t_size;
//         t_data=new char[t_size];
//         memcpy(t_data,other.t_data,t_size);
//     }
//     String(String&& other) noexcept : t_size(other.t_size), t_data(other.t_data) {
//         std::cout << "moved!" << std::endl;
//         other.t_size = 0;
//         other.t_data = nullptr;
//     }

//     ~String(){
//         std::cout<<"destroyed!"<<std::endl;
//         delete t_data;
//         t_data=nullptr;
//     }
//     void print(){
//         for(size_t i{};i<t_size;i++){
//             std::cout<<t_data[i];
//         }
//         std::cout<<std::endl;
//     }
//     private:
//         size_t t_size;
//         char* t_data;
// };

// class Entity{
//     public:
//         Entity()=default;
//         Entity(const String& name):name_(name){

//         }
//         Entity(String&& name):name_(std::move(name)){

//         }
//         void printstr(){
//             name_.print();
//         }
//     private:
//         String name_;
// };

// int main(){
//     String s="hello";
//     Entity e(s);
//     e.printstr();
//     return 0;
// }


// #include<iostream>
// #include<cstring>



// class String {
//     public:
//         String()=default;
//         String(const char* ch){
//             std::cout<<"created!"<<std::endl;
//             t_size=strlen(ch);
//             t_data=new char[t_size];
//             memcpy(t_data,ch,t_size);
//         }
//         String(String& other){
//             std::cout<<"copied!"<<std::endl;
//             t_size=other.t_size;
//             t_data=new char[t_size];
//             memcpy(t_data,other.t_data,t_size);
//         }
//         String(String&& other) noexcept :t_size(other.t_size),t_data(other.t_data) {
//             std::cout<<"moved!"<<std::endl;
//             other.t_data=nullptr;
//             other.t_size=0;
//         }
//         void print(){
//             for(size_t i{};i<t_size;i++)
//                 std::cout<<t_data[i];
//             std::cout<<std::endl;
//         }
//         private:
//             size_t t_size;
//             char* t_data;
// };
// class Entity{
//     public:
//         Entity()=default;
//         Entity( String& name):name_(name){}
//         Entity( String&& name):name_(static_cast<String&&>(name)){
//         }
//         void printf(){
//             name_.print();
//         }
//     private:
//         String name_;
// };

// int main(){
//     Entity e("hello");
//     e.printf();
//     return 0;
// }


#include<algorithm>
#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
using namespace chrono_literals;
int main(){
int y=180;
int x=rand();
int x1=x;
int y1=0;
int score =0;


while(true){
y=y-6;
if(y < -140){
    y=180;
    x=rand();
    x1=x;
    score--;
}
if(y1==y){
    y=180;
    x=rand();
    score++;
}
cout<<x<<","<<y<<"score= "<<score<<endl;
    

};
system("pause");

}
// #include<thread>
// #include<vector>
// using namespace std;
// class Cat{
//     public:
//         Cat(int age,int weight):age_(age),weight_(weight){}
//         int getAge() const{
//             return age_;
//         }
//         int getWeight() const{
//             return weight_;
//         }
//     private: 
//         int age_;
//         int weight_;
//     bool operator<(const Cat& other){
//         return this->age_<other.age_;
//     }
// };

// int main(){
//     vector<Cat> cats={Cat(7,30),Cat(3,17),Cat(4,19)};
//     sort(begin(cats),end(cats));
//     for(const auto& cat:cats){
//         std::cout<<cat.getAge()<<std::endl;
//     }
//     return 0;
// }