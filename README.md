# Fantasy Die w/ C++

![Project Status](https://img.shields.io/badge/Status-WIP-orange)

## Summarize the project and what problem it was solving.

A DnD player can easily use the program to spit out a random number/roll for their campaign. It also adds specific logic for detecting natural 20s and natural 1s, which are critical results for a campaign.

## What did you do particularly well?

I made sure the program is interactive and flexible. Instead of hard-coding the dice, I allowed the user to choose the number of sides. As previously mentioned, I also made sure to check for crit rolls.

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

I'd like to add input validation, and try using the <random> library C++ has to offer instead of rand().

## Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

The most challenging part was handling the randomness in a way that works correctly across runs. Using srand(time(0)) ensures different results on each run, which solved the issue of the dice roll always being the same. To overcome challenges like this, I relied on documentation for the <cstdlib> and <ctime> libraries and online references (cppreference.com).

## What skills from this project will be particularly transferable to other projects or course work?

This project has taught me user input handling, random number generation, conditional logic for special cases, and overall, basic program structure involving C++.

## How did you make this program maintainable, readable, and adaptable?

The program is written with straightforward variable names and simple logic.
