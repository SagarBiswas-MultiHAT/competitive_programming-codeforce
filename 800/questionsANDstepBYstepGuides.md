# Problem's Questions and Step-by-Step Guide for Critical Problems.

## 1)\_Watermelon

![](Problem%20Questions%20Photos/1%29_Watermelon.png)

## 2)\_Way_Too_Long_Words

![](Problem%20Questions%20Photos/2%29_Way_Too_Long_Words.png)

## 3)\_Team

![](Problem%20Questions%20Photos/3%29_Team.png)

## 4)\_Bitpp

![](Problem%20Questions%20Photos/4%29_Bitpp.png)

## 5)\_Next_Round

![Problem statement screenshot](Problem%20Questions%20Photos/5%29_Next_Round.png)

## 📝 Problem Restated in Simple Words

You’re given:

- 𝑛 participants in a contest.

- Their scores are listed in non-increasing order (from highest to lowest).

- A number 𝑘 , which represents the position in the ranking.

Rule: Any contestant who has a score greater than or equal to the score of the
𝑘-th contestant will advance to the next round, but only if their score is positive.

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

📊 Example 2

Input:

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
