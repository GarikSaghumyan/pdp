public class Main {


	public static void main(String... args) throws Exception {

		LinkedList list = new LinkedList();
		for(int i = 0; i < 10; i++) {
			int value = (int) (Math.random() * 100);
			list.add(value);
			System.out.println(">>>" + value);
			System.out.println("List: " + list);
		}
		int newElement = (int) (Math.random() * 100);
		list.insert(5, newElement);
		System.out.println("5:>>>" + newElement);
		System.out.println("List: " + list);
		System.out.println("Element at[5] = " + list.get(5));
		list.remove(5);
		System.out.println("Removed list[5]");
		System.out.println("List: " + list);
	}
}
