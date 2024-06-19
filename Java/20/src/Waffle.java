class Waffle extends Sweet {
    public Waffle(String name, double weight, double price, String uniqueParameter){
        super(name, weight, price, uniqueParameter);
    }

    String getDescription(){
        return "Waffle: " + name + ", " + weight + "g, " + price + "r., " + uniqueParameter;
    }
}