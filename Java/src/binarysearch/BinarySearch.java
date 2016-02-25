package binarysearch;

/**
 * This is a binary Search Method
 *
 * @author Vikranth Srivatsa
 * @author Assignment: Binary Search
 * @author Sources: n/a
 * @version Dec 31, 2015
 */
public class BinarySearch {

  public static void main(String[] args) {
    Integer[] array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BinarySearch binarysearch = new BinarySearch();
    Integer target = 3;
    int x = binarysearch.sort(0, array.length - 1, array, target);
    System.out.println(x);
  }

  /**
   * This is a binary Search method which keeps on dividing the array
   * till it finds the number
   *
   * @param low
   * @param high
   * @param array
   * @param target
   * @return the index of target. or -1 if it is not in the array.
   */
  public int sort(int low, int high, Integer[] array, Integer target) {
    int midVal = (low + high) / 2;
    if (midVal == low) {
      if (array[array.length - 1].equals(target))
        return array.length - 1;
      else if ((array[0]).equals(target))
        return 0;
      else
        return -1;
    }
    else if ((target).compareTo(array[midVal]) > 0) {
      low = midVal;
      return sort(low, high, array, target);
    }
    else if ((target).compareTo(array[midVal]) < 0) {
      high = midVal;
      return sort(low, high, array, target);

    }
    else
      return midVal; //the value is equal
  }
}
