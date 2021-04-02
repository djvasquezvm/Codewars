public class SolutionTest {
    public static void main(String[] args) {
      System.out.println(Kata.grow(new int[] {1,2,3}));
    }
}

public class Kata{
  public static int grow(int[] x){
    int mult=1;
    for (int value : x) mult *= value;
    return mult;
  }
}