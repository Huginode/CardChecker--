# CardChecker++

## Credit card validator in c++ using luhn's algorithm

<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#description">Description</a></li>
    <li><a href="#diagram">Diagram</a></li>
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

CardChecker++ is a credit card validator written in c++. I implemented luhn's algorithm using the built in vector library in c++.

## Diagram
  
 <a href="url"><img src="images/diagram.png" width="640" height="300" style="border-radius:90%"></a>

## Installation instruction

You can use it by downloading the creditCardValidator.cpp file and compiling it using g++ or gcc

eg:
* g++ creditCardValidator functions -o **name**

## Complexity

  ### Time Complexity
  Since the algorithm consist mainly on looping over an array the time complexity of the algorithm is :
  * O(n)

  ### Space Complexity

## Known Issues

* The numbers given to the algorithm are wrong which makes the result false.

