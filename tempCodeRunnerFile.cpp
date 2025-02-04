#include <iostream> 
using namespace std; 
class CircularQueue { 
private: 
int front, rear, size; 
int* queue; 
public: 
CircularQueue(int s) { 
front = rear = -1; 
size = s; 
queue = new int[s]; } 
~CircularQueue() { 
delete[] queue; } 
void enqueue(int value) { 
if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) { 
cout << "Queue Overflow\n"; 
return; 
} else if (front == -1) { 
front = rear = 0; 
queue[rear] = value;  
} else if (rear == size - 1 && front != 0) { 
rear = 0; 
queue[rear] = value; 
} else { 
rear++; 
queue[rear] = value; 
} } 
int dequeue() { 
if (front == -1) { 
cout << "Queue Underflow\n"; 
return -1; 
} 
int data = queue[front]; 
queue[front] = -1; 
if (front == rear) { 
front = rear = -1; 
} else if (front == size - 1) { 
front = 0; 
} else { 
front++; } 
return data; 
} 
void displayQueue() { 
if (front == -1) { 
cout << "Queue is Empty\n"; 
return; 
} 
cout << "Elements in Circular Queue are: "; 
if (rear >= front) { 
for (int i = front; i <= rear; i++) 
cout << queue[i] << " "; 
} else { 
for (int i = front; i < size; i++) 
cout << queue[i] << " "; 
for (int i = 0; i <= rear; i++) 
cout << queue[i] << " "; 
} 
cout << endl; 
} }; 
int main() { 
CircularQueue q(10); 
q.enqueue(54); 
q.enqueue(32); 
q.enqueue(18); 
q.enqueue(62); 
q.displayQueue();  
cout << "Deleted value = " << q.dequeue() << endl; 
cout << "Deleted value = " << q.dequeue() << endl; 
q.displayQueue(); 
q.enqueue(39); 
q.enqueue(60); 
q.enqueue(5); 
q.displayQueue(); 
return 0; 
}