public class Tests {
    public static void main(String[] args) {
      System.out.println(Solution.century(1705));
      System.out.println(Solution.century(1900));
      System.out.println(Solution.century(1601));
      System.out.println(Solution.century(2000));
      System.out.println(Solution.century(89));
    }
}

public class Solution {
  public static int century(int number) {
      return (int)Math.ceil((float)number/100);
  }
}