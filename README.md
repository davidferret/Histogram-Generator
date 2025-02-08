# Histogram Generator

This C project lets you create a simple histogram based on a set of numerical values. The way it works is by taking up to 10 numbers as input, generating a histogram using asterisks, and saving the output to a file for future reference.

You enter up to 10 values, and the project validates the input to make sure it stays within the allowed limit. Once the data is processed, a histogram is displayed using asterisks to represent the values visually. If needed, you can also save the histogram data as a text file.

I built this project because I wanted a quick and easy way to visualize numerical data without relying on complex graphing tools. It was a great exercise in handling user input, validation, and file operations while keeping things simple and intuitive. Hopefully, it helps you visualize your data in a straightforward way too!

## Example Usage
```
Enter the number of elements (max 10): 5
Enter 5 values: 12 7 15 3 9

 Element   Value   Histogram
      0      12   ************
      1       7   *******
      2      15   ***************
      3       3   ***
      4       9   *********

Histogram saved to 'histogram.txt'.

```
