// Complete Guide to C++ Programming Foundations
// Exercise 08_06
// Queues and Stacks, by Eduardo Corpeño 

#include <iostream>
#include <queue>
#include <stack>

int main(){
    std::queue<std::string> eventQueue;  // FIFO container for game events
    std::stack<std::string> undoStack;   // LIFO for undo operations

    // Adding events to the queue
    eventQueue.push("Move Forward");
    eventQueue.push("Collect Coin");
    eventQueue.push("Attack Enemy");

    // Processing events in FIFO order
    while (!eventQueue.empty()){
        std::string currentEvent = eventQueue.front();
        std::cout << "Performing event: " << currentEvent << std::endl;

        undoStack.push(currentEvent);
        eventQueue.pop(); 
    }

    std::cout << "Queue is empty" << std::endl;

    std::cout << "Undo stack list ================" << std::endl;

    // Processing events in LIFO order
    while(!undoStack.empty()) {
        std::cout << "Undo event: " << undoStack.top() << std::endl;
        undoStack.pop();
    }

    std::cout << "Stack is empty" << std::endl;



    std::cout << "PQ ================" << std::endl;

    std::priority_queue<int> aiTasks;
    aiTasks.push(1); // Low priority task
    aiTasks.push(3); // High priority task
    aiTasks.push(2); // Medium priority task

    while (!aiTasks.empty()){
        std::cout << "Processing task with priority: " << aiTasks.top() << std::endl;
        aiTasks.pop();
    }


    std::cout << std::endl << std::endl;
    return 0;
}
