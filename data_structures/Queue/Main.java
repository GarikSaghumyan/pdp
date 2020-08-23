public class Main {

    public static void main(String[] args) {
        Queue queue = new Queue(5);
        while (!queue.isFull()) {
            int value = (int) (Math.random() * 100);
            queue.enqueue(value);
            System.out.println(">>>" + value);
            System.out.println("Queue: " + queue);
        }
        System.out.println("Top element: " + queue.peek());
        while(!queue.isEmpty()) {
            queue.dequeue();
            System.out.println("Queue: " + queue);
        }
        System.out.println("Queue size :" + queue.size());
    }
}