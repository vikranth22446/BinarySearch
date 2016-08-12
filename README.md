# Timed Challenges
These are fun timed challenges that me and my friends work on.
<br />Our projects range across quite a few languages
Some of those languages are
<ul>
<li>Java</li>
<li>C++</li>
<li>HTML & CSS</li>
</ul>
<br />
## Our Code
We have created algorithms in this repository. <br />
For example, the QuickSort Algorithim.
``` C++
#include "print.h"

using namespace std;

template<class type>
void quickSort(type arrayToSort[], int left, int right);

template<class type>
void runQuickSort(type *arrayToSort, const int size) {
    quickSort(arrayToSort, 0, size - 1);
    print::printArray("The Values of Quick Sort are ", arrayToSort, size);

}

template<class type>
void quickSort(type arrayToSort[], int left, int right) {
    if (left == right) {
        return;
    }
    type pivot = *(arrayToSort + right);
    int wall = left;
    for (int i = left; i <= right; ++i) {
        type element = *(arrayToSort + i);
        if (wall == right) {
            return;
        }
        if (i == right) {
            type temp = *(arrayToSort + wall);
            *(arrayToSort + wall) = pivot;
            *(arrayToSort + right) = temp;
            wall++;
            quickSort(arrayToSort, left, wall - 1);
            quickSort(arrayToSort, wall, right);
        }
        if (element <= pivot) {
            type temp = *(arrayToSort + i);
            type wallValue = *(arrayToSort + wall);
            if (temp > wallValue) {
                return;
            }
            *(arrayToSort + i) = wallValue;
            *(arrayToSort + wall) = temp;
            wall++;
        }

    }
}

```
Some of our java Projects we also have to create the GUI
``` JAVA
    /**
     * Creates a Gui which allows the user to select which of type of deviation
     * the user wants.
     */
    public void createFrameToCalculateStandardDeviation() {
        setTitle("Choose Which Type Of Deviation");
        setLayout(new FlowLayout());
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        JButton popularButton = new JButton();
        popularButton.setText("Popular Deviation");
        popularButton.addActionListener(e -> {
            DEVIATION_STATE = Deviation.POPULAR;
            STANDARD_DEVIATION = findStandardDeviation(GIVEN_SET_OF_NUMS);
            System.out.println(STANDARD_DEVIATION);
        });
        getContentPane().add(popularButton);
        JButton standardButton = new JButton();
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
    private enum Deviation {
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
    private double findStandardDeviation(double[] setOfNumbers) {
        double mean = findMean(setOfNumbers), sumOfSquaresOfDeviation = 0;
        for (double setOfNumber : setOfNumbers) sumOfSquaresOfDeviation += Math.pow(setOfNumber - mean, 2);

        return Math.sqrt(sumOfSquaresOfDeviation / (setOfNumbers.length - DEVIATION_STATE.value));
    }
 
```
