# Codeforces 800 Practice Set

A curated mini-collection of Codeforces 800-rated problems implemented in C++.
Every solution lives in `800/` and aligns with the original statement that you
can revisit through the included screenshots and the consolidated
`questionsANDstepBYstepGuides.md` file.

## Repository structure

```
competitive_programming-codeforce/
├── 800/
│   ├── 1)_Watermelon.cpp
│   ├── 2)_Way_Too_Long_Words.cpp
│   ├── 3)_Team.cpp
│   ├── 4)_Bitpp.cpp
│   ├── 4)_BitppRealLife.cpp            # Analogy describing ++/-- intuitively
│   ├── 4)_incrementDecrementInDetailes.cpp
│   ├── 5)_Next_Round.cpp
│   ├── questionsANDstepBYstepGuides.md # All screenshots + an extended note
│   └── Problem Questions Photos/       # PNG statements pulled from Codeforces
└── README.md
```

## Problem lineup

| #   | Problem            | Core skill                           | Code & references                                                                                                                        |
| --- | ------------------ | ------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------- |
| 1   | Watermelon         | Basic parity & constructive proofs   | [`1)_Watermelon.cpp`](800/1%29_Watermelon.cpp) · screenshot inside `Problem Questions Photos/1)_Watermelon.png`                          |
| 2   | Way Too Long Words | String compression logic             | [`2)_Way_Too_Long_Words.cpp`](800/2%29_Way_Too_Long_Words.cpp)                                                                           |
| 3   | Team               | Aggregating teammate votes           | [`3)_Team.cpp`](800/3%29_Team.cpp)                                                                                                       |
| 4   | Bit++              | Pre/post increment reasoning         | [`4)_Bitpp.cpp`](800/4%29_Bitpp.cpp) · extra intuition files (`4)_BitppRealLife.cpp`, `4)_incrementDecrementInDetailes.cpp`)             |
| 5   | Next Round         | Threshold filtering on sorted scores | [`5)_Next_Round.cpp`](800/5%29_Next_Round.cpp) · walkthrough in [`questionsANDstepBYstepGuides.md`](800/questionsANDstepBYstepGuides.md) |

> Tip: open `questionsANDstepBYstepGuides.md` if you want every screenshot in
> one place along with a plain-language breakdown of **Next Round**.

## How to run a solution

1. Install any C++17-capable compiler (MinGW-w64 g++, clang, MSVC, etc.).
2. Compile the file you care about. Example using PowerShell for Bit++:

   ```powershell
   cd E:\CP-GitHub_Clone\competitive_programming-codeforce
   g++ -std=c++17 -O2 .\800\4)_Bitpp.cpp -o bitpp.exe
   .\bitpp.exe
   ```

3. Supply input exactly as Codeforces describes (copy/paste sample tests or use
   redirection: `Get-Content sample.txt | .\bitpp.exe`).

## Suggested study flow

- Skim the screenshot in `Problem Questions Photos/` or the guide file, then
  attempt the implementation yourself before peeking at the provided `.cpp`.
- Compare your approach with the repository’s version and record any takeaways
  inside your own notes or by extending `questionsANDstepBYstepGuides.md`.
- When you’re ready for tougher sets, clone this layout for `900/`, `1000/`,
  etc., to keep a consistent archive.

## Contributing & next steps

- Keep filenames in the `<index>)_<ProblemName>.cpp` pattern so the problem order
  stays consistent.
- Add new screenshots to `Problem Questions Photos/` and reference them from the
  guide file to maintain a single source of truth.
- Future ideas:
  - [ ] Automate compilation/testing via a small script or task file.
  - [ ] Add commentary blocks inside each solution explaining key lines.
  - [ ] Grow the catalog with more 800-level warmups or step up to 900+.

Happy grinding, and may every submission be _Accepted_! 🚀
