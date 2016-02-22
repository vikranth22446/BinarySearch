package src.standarddeviation;

/**
 * This program finds the standard deviation of an array.
 */
public class StandardDeviation {
  /**
   * Given: A series of numbers: 0, 3, 5, 7, 2, 6, 1, 9, 12, 37, 42
   */
  private static final double[] GIVEN_SET_OF_NUMS = {0, 3, 5, 7, 2, 6, 1, 9, 12, 37, 42};
  /**
   * Find: The standard deviation of these numbers.
   */
  private static double STANDARD_DEVIATION;

  public static void main(String[] args) {
    StandardDeviation standardDeviation = new StandardDeviation();
    STANDARD_DEVIATION = standardDeviation.findStandardDeviation(GIVEN_SET_OF_NUMS);
    System.out.println(STANDARD_DEVIATION);
  }

  /**
   * This method finds the standard deviation of the set of numbers by
   * adding up the squres of the difference between the number and the average
   * then dividing that number by the number of items - 1. Then to find the standard deviation
   * the method takes the square root of the number.
   *
   * @param setOfNumbers The set of numbers given in the problem: 0, 3, 5, 7, 2, 6, 1, 9, 12, 37, 42
   * @return The Standard Deviation of the numbers.
   */
  public double findStandardDeviation(double[] setOfNumbers) {
    double mean = findMean(setOfNumbers), sumOfSquearesOfDeviation = 0;
    for (int indexOfNumbers = 0; indexOfNumbers < setOfNumbers.length; indexOfNumbers++)
      sumOfSquearesOfDeviation += Math.pow(setOfNumbers[indexOfNumbers] - mean, 2);

    return Math.sqrt(sumOfSquearesOfDeviation / (setOfNumbers.length - 1));

  }

  /**
   * This method finds the mean by adding all the numbers and diving by the length.
   *
   * @param setOfNumbers The set of numbers given in the problem: 0, 3, 5, 7, 2, 6, 1, 9, 12, 37, 42
   * @return The mean of the set of numbers.
   */
  public double findMean(double[] setOfNumbers) {
    double sumOfNumbers = 0;
    for (int indexOfNumbers = 0; indexOfNumbers < setOfNumbers.length; indexOfNumbers++)
      sumOfNumbers += setOfNumbers[indexOfNumbers];

    return sumOfNumbers / setOfNumbers.length;
  }


}
