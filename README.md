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
    <li><a href="#issues">Issues</a></li>
  </ol>
</details>

## Description

CardChecker++ is a credit card validator written in c++. I implemented luhn's algorithm using the built-in vector library in c++.

## Diagram
  
 <a href="url"><img src="images/diagram.png" width="640" height="300" style="border-radius:90%"></a>

## Luhn's algorithm

Figuring how the luhn algorithm works was by far the hardest thing I had to do for this projects.
It's not necessarily complicated, it's just that there are either no explanations, or wrong ones, or it's uncomprehensible.
This algorithm utilizes 3 steps.
  * From the rightmost digit double every second digit. (excluding the rightmost one)
  * For every doubled digit that is superior to 9 sum its two figures.
  * Then sum all the digits and see if the sum can be divided by 10.

Source: https://youtu.be/wsphC8V36i0?list=LL

## Installation instruction

You can use it by downloading the creditCardValidator.cpp file and compiling it using g++ or gcc

eg:
* g++ creditCardValidator.cpp -o **name**

## Known Issues

* There is a bug in the algo when it needs to sum the duble of 5

