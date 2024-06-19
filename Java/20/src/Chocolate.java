class Chocolate extends Sweet {
    public Chocolate(String name, double weight, double price,String uniqueParameter){
        super(name, weight, price, uniqueParameter);
    }

    String getDescription(){
        return "Chocolate: " + name + ", " + weight + "g, " + price + "r., " + uniqueParameter;
    }
}