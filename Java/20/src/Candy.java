class Candy extends Sweet {
    public Candy(String name, double weight, double price, String uniqueParameter){
        super(name, weight, price, uniqueParameter);
    }

    String getDescription(){
        return "Candy: " + name + ", " + weight + "g, " + price + "r., " + uniqueParameter;
    }
}