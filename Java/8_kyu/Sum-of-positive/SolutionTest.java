public class SolutionTest {
    public static void main(String[] args) {
      System.out.println(Positive.sum(new int[] {1,-4,7,12}));
    }
}

public class Positive{
  public static int sum(int[] arr){
    int sum=0;
    for (int x : arr) if (x>0) sum += x;
    return sum;
  }
}