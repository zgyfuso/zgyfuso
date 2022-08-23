public class test {
    public static void main(String[]args){
        double distance = 100;
		int x1 = 15, y1 = 14;
		int angle = 30;
		double distance_H = distance * Math.sin(Math.toRadians(angle));
		double distance_V = distance * Math.cos(Math.toRadians(angle));
		int x2 = x1 + (int) Math.round(distance_H);
		int y2 = y1 + (int) Math.round(distance_V);
		System.out.println("新坐标(" + x2 + "," + y2 + ")");
    }
}
