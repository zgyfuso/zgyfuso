public class Statistic {
    String name;
    int number;

    public String getName() {
        return name;
    }

    public Statistic(String name, int number) {
        this.name = name;
        this.number = number;
    }

    public Statistic(String name) {
        this.name = name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public Statistic() {
    }
}
