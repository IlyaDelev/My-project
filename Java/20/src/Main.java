public class Main {
    public static void main(String[] args) {
        Sweet candy = new Candy("Caramel", 50, 50, "Nutty");
        Sweet waffle = new Waffle("Vanilla", 100, 100, "Glazed");
        Sweet chocolate = new Chocolate("Milk", 150, 150, "With hazelnuts");

        SweetBoxImplements sweetBox = new SweetBoxImplements();

        sweetBox.addSweet(candy);
        sweetBox.addSweet(waffle);
        sweetBox.addSweet(chocolate);

        System.out.println("All sweets:");
        sweetBox.showAllSweets();
        System.out.println("Total weight: " + sweetBox.getTotalWeight() + "g");
        System.out.println("Total price: " + sweetBox.getTotalPrice() + "r.");

        System.out.println("\nAfter optimization by weight (max 200g):");
        sweetBox.optimizeWeight(200);
        sweetBox.showAllSweets();
        System.out.println("After optimization by weight: " + sweetBox.getTotalWeight() + "g");

        sweetBox.addSweet(candy);
        sweetBox.addSweet(waffle);
        sweetBox.addSweet(chocolate);
        System.out.println("\nAfter optimization by price (max 200r.):");
        sweetBox.optimizePrice(200);
        sweetBox.showAllSweets();
        System.out.println("After optimization by price: " + sweetBox.getTotalPrice() + "r.");
    }
}