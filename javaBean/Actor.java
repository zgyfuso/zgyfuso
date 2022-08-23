import java.util.Date;

public class Actor {// javabean,pojo,domain
    private Integer id;
    private String name;
    private String sec;
    private String phone;
    private Date borndata;

    // private Date borndata;

    public Actor() {

    }

    public Actor(Integer id, String name, String sec, String phone, Date borndata) {
        this.id = id;
        this.name = name;
        this.sec = sec;
        this.phone = phone;
        this.borndata = borndata;
    }
    public String toString()
    {
        return "actor{"+
                "  id:"+id+",  name:"+name+",  sec:"+sec+",  phone:"+phone+",  borndata:"+borndata+"}\n";
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSec() {
        return sec;
    }

    public void setSec(String sec) {
        this.sec = sec;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public Date getBorndata() {
        return borndata;
    }

    public void setBorndata(Date borndata) {
        this.borndata = borndata;
    }

}
