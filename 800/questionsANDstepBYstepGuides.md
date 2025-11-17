# Problem's Questions and Step-by-Step Guide for Critical Problems.

## 1)\_Watermelon

<p align="center">
    <img src="Problem%20Questions%20Photos/1%29_Watermelon.png" alt="Watermelon problem statement">
</p>

## 2)\_Way_Too_Long_Words

<p align="center">
    <img src="Problem%20Questions%20Photos/2%29_Way_Too_Long_Words.png" alt="Way Too Long Words problem statement">
</p>

## 3)\_Team

<p align="center">
    <img src="Problem%20Questions%20Photos/3%29_Team.png" alt="Team problem statement">
</p>

## 4)\_Bitpp

<p align="center">
    <img src="Problem%20Questions%20Photos/4%29_Bitpp.png" alt="Bit++ problem statement">
</p>

## 5)\_Next_Round

<p align="center">
    <img src="Problem%20Questions%20Photos/5%29_Next_Round.png" alt="Next Round problem statement screenshot">
</p>

## 📝 Problem Restated in Simple Words

You’re given:

- 𝑛 participants in a contest.

- Their scores are listed in non-increasing order (from highest to lowest).

- A number 𝑘 , which represents the position in the ranking.

Rule: Any contestant who has a score greater than or equal to the score of the 𝑘-th contestant will advance to the next round, but only if their score is positive.

Your task: Count how many contestants advance.

### 📊 Example 1

#### Input:

    8 5

    10 9 8 7 7 7 5 5

- 𝑛 = 8, 𝑘 = 5.

- The 5th contestant’s score = 7.

- Anyone with score ≥ 7 and > 0 advances.

- Scores meeting this: 10, 9, 8, 7, 7, 7 → 6 contestants.

#### Output:

    6

### 📊 Example 2

#### Input:

    8 6

    0 4 6 6 7 8 9 10

- 𝑛 = 8, 𝑘 = 6.

- The 5th contestant’s score = 8.

- Anyone with score ≥ 8 and > 0 advances.

- Scores meeting this: 8 9 10 → 3 contestants.

#### Output:

    3

### 📊 Example 3

#### Input:

    4 2
    0 0 0 0

- 𝑛 = 4, 𝑘 = 2.

- The 2nd contestant’s score = 0.

- Rule says score must be ≥ 0 and positive → nobody qualifies.

#### Output:

    0

🚀 How to Think About It

1. Find the score of the 𝑘-th contestant.
2. Count how many scores are ≥ that score.
3. Exclude anyone with score = 0.

## 6)_Domino piling

<p align="center">
    <img src="Problem%20Questions%20Photos/6%29_Domino_piling.png" alt="Domino piling problem statement screenshot">
</p>

## What is a Domino Piece?

A domino is just a small rectangular block made of two squares stuck together.

M = number of rows, N = number of columns; They are the height and width of the grid.

### Example:

If the input is:

    3 4

Then the board is:

    Row 1: [ ][ ][ ][ ]
    Row 2: [ ][ ][ ][ ]
    Row 3: [ ][ ][ ][ ]

Total 12 squares in this example.

## Why do we divide by 2?

Because of Rule 1 from the problem: **Each domino completely covers two squares.**

So:

    1 domino = 2 squares

    2 dominoes = 4 squares

    3 dominoes = 6 squares

    …

    X dominoes = 2 × X squares

To find the maximum number of dominoes, we simply count how many pairs of squares fit on the board.

### Example

- Board = 3 × 4 → 12 squares.

- Each domino uses 2 squares.

- So maximum dominoes = **12 squares ÷ 2 squares per domino = 6 dominoes**

This is why we do: **12 / 2 = 6**

### Visual Example

Board (3×4):

    [1][1][2][2]
    [3][3][4][4]
    [5][5][6][6]

Here we can place 6 dominoes:

- Domino 1 covers 2 squares

- Domino 2 covers 2 squares

- Domino 3 covers 2 squares

- Domino 4 covers 2 squares

- Domino 5 covers 2 squares

- Domino 6 covers 2 squares

Total covered = 6 × 2 = 12 squares

## Final Explanation

we divide by 2 **because each domino covers exactly 2 squares.**

## Formula: 

So the maximum dominoes = **floor((M × N) / 2)**

