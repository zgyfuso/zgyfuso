class people{}
class teacher extends people{}
class student extends people{}
public class test {
        public static void draw(people p)
        {
           if(p instanceof teacher){
               System.out.println("老师应该好好教书");
           }else if(p instanceof student){
               System.out.println("学生应该好好读书");
           }else{
               System.out.println("人应该吃饭");
           }
        }
    public static void main(String[] args) throws Exception {
        draw(new teacher());
        draw(new student());
        draw(new people());
    }
}
