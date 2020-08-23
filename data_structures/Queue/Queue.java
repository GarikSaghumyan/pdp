import java.util.*;

class Queue {
    private int arr[];
    private int front;
    private int rear;
    private int capacity;
    private int count;

    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    public void dequeue() {
        front = (front + 1) % capacity;
        count--;
    }

    public void enqueue(int item) {
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        count++;
    }

    public int size()
    {
        return count;
    }


    public int peek() {
        return arr[front];
    }
    public Boolean isEmpty() {
        return (size() == 0);
    }
    public Boolean isFull() {
        return (size() == capacity);
    }

    @Override
    public String toString() {
        return Arrays.toString(this.arr);
    }
}