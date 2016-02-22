package src.standarddeviation;

import javax.swing.*;
import java.awt.*;

/**
 * This program finds the standard deviation of an array.
 */
public class StandardDeviation extends JFrame {
  /**
   * Given: A series of numbers: 0, 3, 5, 7, 2, 6, 1, 9, 12, 37, 42
   */
  private static final double[] GIVEN_SET_OF_NUMS = {0, 3, 5, 7, 2, 6, 1, 9, 12, 37, 42};
  /**
   * Find: The standard deviation of these numbers.
   */
  private static double STANDARD_DEVIATION;


  JButton popularButton, standardButton;
  private static Deviation DEVIATION_STATE;

  public static void main(String[] args) {
    StandardDeviation standardDeviation = new StandardDeviation();
    standardDeviation.createFrameToCalculateStandardDeviation();
  }

  /**
   * Creates a Gui which allows the user to select which of type of deviation
   * the user wants.
   */
  public void createFrameToCalculateStandardDeviation() {
    setTitle("Choose Which Type Of Deviation");
    setLayout(new FlowLayout());
    setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
    popularButton = new JButton();
    popularButton.setText("Popular Deviation");
    popularButton.addActionListener(e -> {
      DEVIATION_STATE = Deviation.POPULAR;
      STANDARD_DEVIATION = findStandardDeviation(GIVEN_SET_OF_NUMS);
      System.out.println(STANDARD_DEVIATION);
    });
    getContentPane().add(popularButton);
    standardButton = new JButton();
    standardButton.setText("Standard Deviation");
    standardButton.addActionListener(e -> {
      DEVIATION_STATE = Deviation.STANDARD;
      STANDARD_DEVIATION = findStandardDeviation(GIVEN_SET_OF_NUMS);
      System.out.println(STANDARD_DEVIATION);
    });
    getContentPane().add(standardButton);
    setSize(100, 100);
    setVisible(true);
    setComponentOrientation(ComponentOrientation.LEFT_TO_RIGHT);
  }

  /**
   * Different types of deviation
   */
  enum Deviation {
    POPULAR(1), STANDARD(0);
    private final int value;

    Deviation(int i) {
      value = i;
    }
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
    double mean = findMean(setOfNumbers), sumOfSquaresOfDeviation = 0;
    for (double setOfNumber : setOfNumbers) sumOfSquaresOfDeviation += Math.pow(setOfNumber - mean, 2);

    return Math.sqrt(sumOfSquaresOfDeviation / (setOfNumbers.length - DEVIATION_STATE.value));
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
