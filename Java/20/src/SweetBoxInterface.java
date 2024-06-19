public interface SweetBoxInterface {
    void addSweet(Sweet sweet);
    void remove(int index);
    void removeLast();
    double getTotalWeight();
    double getTotalPrice();
    void showAllSweets();
    void optimizeWeight(double maxWeight);
    void optimizePrice(double maxWeight);
}