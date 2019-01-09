#include "main.h"
// valgrind --leak-check=full -v ./a.out

int main(){
    try{
        // STACK 1
        Stack<int> stack1;
        stack1.push(10);
        stack1.push(20);
        stack1.push(30);
        stack1.push(40);
        cout << "Size: " << stack1.size() << endl;
        cout << "Is stack empty? "
            << stack1.empty() << endl;
        cout << "Top: " << stack1.top() << endl;
        stack1.printInternal();
        stack1.pop();
        
        // STACK 2
        Stack<int> stack2;
        stack2.push(50);
        stack2.push(60);
        stack2.push(70);
        cout << "Size: "
            << stack2.size() << endl;
        cout << "Is stack empty? "
            << stack2.empty() << endl;
        cout << "Top: "
            << stack2.top() << endl;
        stack2.printInternal();
        stack2.clear();
        stack2.printInternal();
        stack2 = stack1;
        stack2.printInternal();
        
        // DEQUE 1
        Deque<int> deque1;
        deque1.insertFront(20);
        deque1.insertFront(10);
        deque1.insertBack(30);
        deque1.insertBack(40);
        cout << "Size: "
            << deque1.size() << endl;
        cout << "Is deque empty? "
            << deque1.empty() << endl;
        cout << "Front: "
            << deque1.front() << endl;
        cout << "Back: "
            << deque1.back() << endl;
        deque1.print();
        
        // DEQUE 2
        Deque<int> deque2;
        deque2.insertFront(70);
        deque2.insertFront(60);
        deque2.insertBack(80);
        deque2.insertBack(90);
        deque2.removeFront();
        deque2.removeBack();

        cout << "Size: "
            << deque2.size() << endl;
        cout << "Is deque empty? "
            << deque2.empty() << endl;
        cout << "Front: "
            << deque2.front() << endl;
        cout << "Back: "
            << deque2.back() << endl;
        deque2.print();
        deque2.clear();
        deque2.print();
        deque2 = deque1;
        deque2.print();
    }
    
    catch (invalid_argument &e){
        cout << "Invalid argument: "
            << e.what() << endl;
    }
    catch (NoSuchObject &e){
        cout << "No such object: "
            << e.what() << endl;
    }
    catch (logic_error &e){
        cout << "Logic error: "
            << e.what() << endl;
    }
    catch (...){
        cout << "Uncaught exception" << endl;
    }

    return 0;
}
