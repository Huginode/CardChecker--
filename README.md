# CardChecker++

## Credit card validator in c++ using luhn's algorithm

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#description">Description</a></li>
    <li><a href="#diagram">Diagram</a></li>
    <li><a href="#luhn">Luhn</a></li>
    <li><a href="#installation">Installation</a></li>
    <li>
      <a href="#complexity">Complexity</a>
      <ul>
        <li><a href="#time">Time</a></li>
        <li><a href="#space">Space</a></li>
      </ul>
    </li>
    <li><a href="#issues">Issues</a></li>
  </ol>
</details>

## Description

CardChecker++ is a credit card validator written in c++. I implemented luhn's algorithm using the built-in vector library in c++.

## Diagram
  
 <a href="url"><img src="images/diagram.png" width="640" height="300" style="border-radius:90%"></a>

## Luhn's algorithm

Figuring how the luhn algorithm works is by far the hardest thing I had to do for this projects.
It's not necessarily complicated, it's just that there either no explanations, or wrong ones, or it's uncomprehensible.
This algorithm utilizes 3 steps.
  * From the rightmost digit double every second digit. (excluding the rightmost one)
  * For every doubled digit that is superior to 9 sum its two figures.
  * Then sum all the digits and see if the sum can be divided by 10.

Source: https://youtu.be/wsphC8V36i0?list=LL
Example:
4847 3529 8926 3094

 * Sum of odd places:  4 + 0 + 6 + 9 + 9 + 5 + 7 + 8 = 48
 * Sum of even places: 9   3   2   8   2   3   4   4
                       18          16 
                       9 + 6 + 4 + 7 + 4 + 6 + 8 + 8 = 52
 * Verifiy: 52 + 48 = 100; 100 % == 0 is true.
So this card number is valid   

## Installation instruction

You can use it by downloading the creditCardValidator.cpp file and compiling it using g++ or gcc

eg:
* g++ creditCardValidator.cpp -o **name**

## Complexity

  ### Time Complexity
  Since the algorithm consists primarily on looping over an array the time complexity of the algorithm is :
  * O(n)

  ### Space Complexity

## Known Issues

* The numbers given to the algorithm are incorrect which makes the result false.

