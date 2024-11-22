#include<string>
#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class Dish {
private:
    string description;
public:
    Dish(string description) {
        this->description = description;
    }
    Dish() {
        description = "";
    }
    string get_description() {
        return this->description;
    }
};
class Stack {
private:
    Dish arr[MAX_SIZE];
    Dish* top;
public:
    Stack() {
        top = arr;
    }
    bool is_empty()
    {
        return (top == arr);
    }
    bool is_full()
    {
        return (arr + MAX_SIZE == top);
    }
    void push(Dish dish) {
        if (!is_full()) {
            *top = dish;
            top++;
        }
        else {
            cerr << "I think it might be full..";
            exit(EXIT_FAILURE);
        }
    }
    Dish pop() {
        if (!is_empty()) {
            top--;
            Dish poppedDish = *top;
            return poppedDish;
        }
        else {
            cerr << "Hmm.. that's not quite right..";
            exit(EXIT_FAILURE);
        }
    }
    Dish peek() {
        if (!is_empty()) {
            return *(top - 1);
        }
        else {
            cerr << "Hmm.. that's not quite right..";
            exit(EXIT_FAILURE);
        }
    }
    int size() {
        return top - arr;
    }
};
int main() {
    Stack stack;
    Dish one_dish("A dish with one fish pattern on it");
    Dish two_dish("A dish with two fish patterns on it");
    Dish red_dish("A dish with a red fish pattern on it");
    Dish blue_dish("A dish with a blue fish pattern on it");
    cout << "The current stack size is: " << stack.size() << endl;
    // stack.pop();
    stack.push(one_dish);
    stack.push(two_dish);
    stack.push(red_dish);
    stack.push(blue_dish);
    cout << "The current stack size is: " << stack.size() << endl;
    Dish peeked_dish = stack.peek();
    cout << "The peeked dish was: " << peeked_dish.get_description() << endl;
    Dish popped_dish = stack.pop();
    cout << "The popped dish was: " << popped_dish.get_description() << endl;
    Dish another_popped_dish = stack.pop();
    cout << "The second popped dish was: " << another_popped_dish.get_description() << endl;
    cout << "The current stack size is: " << stack.size() << endl;
    stack.pop();
    stack.pop();
    cout << "Two more pops. Now the current stack size is: " << stack.size() << endl;
    Dish another_dish("More.."), anotherer_dish("More.."), anothererer_dish("More.."), anotherererer_dish("More.."), anothererererer_dish("More.."), anotherererererer_dish("More.."), anothererererererer_dish("More.."), anotherererererererer_dish("More.."), anothererererererererer_dish("More.."), anotherererererererererer_dish("More.."), anothererererererererererer_dish("More..");
    stack.push(another_dish);
    cout << stack.size() << endl;
    stack.push(anotherer_dish);
    cout << stack.size() << endl;
    stack.push(anothererer_dish);
    cout << stack.size() << endl;
    stack.push(anotherererer_dish);
    cout << stack.size() << endl;
    stack.push(anothererererer_dish);
    cout << stack.size() << endl;
    stack.push(anotherererererer_dish);
    cout << stack.size() << endl;
    stack.push(anothererererererer_dish);
    cout << stack.size() << endl;
    stack.push(anotherererererererer_dish);
    cout << stack.size() << endl;
    stack.push(anothererererererererer_dish);
    cout << stack.size() << endl;
    stack.push(anotherererererererererer_dish);
    cout << stack.size() << endl;
    stack.push(anothererererererererererer_dish);
    return 0;
}