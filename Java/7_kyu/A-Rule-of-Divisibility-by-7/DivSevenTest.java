public class DivSevenTest {
    public static void main(String[] args) {
      for (long x : DivSeven.seven(1603)) System.out.println(x);
      System.out.println("\n");
      for (long x : DivSeven.seven(371)) System.out.println(x);
      System.out.println("\n");
      for (long x : DivSeven.seven(483)) System.out.println(x);
      System.out.println("\n");
      for (long x : DivSeven.seven(477557101)) System.out.println(x);
    }
}

class DivSeven {
    public static long[] seven(long m) {
      long result[] = {m,0};
      while (result[0]>99 && result[1]++ >= 0) result[0]=(result[0]/10)-2*(result[0] % 10);
      return result; 
    }
}