public class Manager extends Person implements Position{
    private String position;

    public Manager() {
    }

    public Manager(String position) {
        this.position = position;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }
}
