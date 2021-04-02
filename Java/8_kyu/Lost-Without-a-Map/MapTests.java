public class MapTests {
    public static void main(String[] args) {
      int result[] = Maps.map(new int[] {2,4,8});
      for (int x : result) {
          System.out.println(x);
      }
    }
}

public class Maps {
  public static int[] map(int[] arr) {
    for (int i=0; i<arr.length; i++) arr[i] *= 2;
    return arr;
  }
}