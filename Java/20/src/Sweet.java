abstract class Sweet {
    String name;
    double weight;
    double price;
    String uniqueParameter;

    public Sweet(String name, double weight, double price, String uniqueParameter){
        this.name = name;
        this.weight = weight;
        this.price = price;
        this.uniqueParameter = uniqueParameter;
    }

    abstract String getDescription();
}