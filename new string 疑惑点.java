public class test {
    public static void main(String[] args) {
        byte message[]=new byte[20];
        message="hello".getBytes();
        System.out.println(message.length);
        String message_="hello";
        System.out.println(message_.length());
        System.out.println((message.length)==(message_.length()));
    }
}
