public class Summation {
    public static void main(String[] args) {
      System.out.println(GrassHopper.summation(3));
    }
}

public class GrassHopper {
    public static int summation(int n) {
        return n*(1+n)/2;
    }
}