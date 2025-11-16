# Competitive Programming – Codeforces 800 Level

Practice-focused solutions for classic Codeforces 800-rated problems. Each
exercise comes with a clean C++ implementation plus optional walkthrough notes
or screenshots of the original statements, making it easy to review concepts or
share with friends who are getting started.

## Highlights

- ✅ Hand-written C++ solutions that compile with any modern C++17+ compiler.
- 🧠 Companion notes in Markdown and screenshots under `Problem Questions Photos`
	for quick recall of the full statement.
- 🗂️ Lightweight structure that mirrors Codeforces problem IDs so you can jump
	straight to the task you want to revisit.

## Repository layout

```
competitive_programming-codeforce/
├── 800/
│   ├── 1)_Watermelon.cpp              # C++ solution
│   ├── 1)_Watermelon.md               # Space for personal notes (currently blank)
│   ├── 2)_Way_Too_Long_Words.cpp
│   ├── 2)_Way_Too_Long_Words.md
│   ├── 3)_Team.cpp
│   ├── 3)_Team.md
│   ├── 4)_Bitpp.cpp
│   ├── 4)_BitppRealLife.cpp           # Bonus real-life analogy
│   ├── 4)_incrementDecrementInDetailes.cpp
│   ├── 5)_Next_Round.cpp
│   ├── questionsANDstepBYstepGuides.md
│   └── Problem Questions Photos/
└── README.md
```

### Key supporting files

- `800/questionsANDstepBYstepGuides.md` – embeds the original statements (PNG)
	and includes a detailed restatement/example for `Next Round`.
- `800/Problem Questions Photos/` – screenshots of the Codeforces prompts.

## Problem catalog

| # | Problem | What it practices | Files |
|---|---------|------------------|-------|
| 1 | Watermelon | Parity checks & constructive proofs | [`1)_Watermelon.cpp`](800/1%29_Watermelon.cpp) · [`notes`](800/1%29_Watermelon.md) |
| 2 | Way Too Long Words | String length handling & abbreviation | [`2)_Way_Too_Long_Words.cpp`](800/2%29_Way_Too_Long_Words.cpp) |
| 3 | Team | Counting positives across teammates | [`3)_Team.cpp`](800/3%29_Team.cpp) |
| 4 | Bit++ | Prefix/postfix increment reasoning | [`4)_Bitpp.cpp`](800/4%29_Bitpp.cpp) · [`real-life analogy`](800/4%29_BitppRealLife.cpp) |
| 5 | Next Round | Threshold comparisons with sorted scores | [`5)_Next_Round.cpp`](800/5%29_Next_Round.cpp) |

> Tip: open the matching Markdown or photo entry if you want to see the prompt
> before diving into the code.

## Getting started

1. Install any C++17-ready toolchain (e.g., `g++` via MinGW-w64 or WSL on
	 Windows, clang, or MSVC).
2. Compile a solution; example for `Watermelon`:

	 ```powershell
	 g++ -std=c++17 -O2 -pipe -static -s .\800\1)_Watermelon.cpp -o watermelon.exe
	 .\watermelon.exe
	 ```

3. Feed input exactly as Codeforces expects (usually from stdin). You can pipe
	 in sample tests or create small `.txt` files for quicker iteration.

## Suggested workflow

- Pick a problem, read the screenshot or Markdown recap, then try solving it
	yourself before looking at the provided `.cpp` file.
- Use the Markdown files to jot personal tricks, edge cases, or alternative
	solutions.
- Duplicate the folder (e.g., `900/`) when you move up in difficulty to keep a
	consistent layout.

## Contributing

1. Fork the repo and create a feature branch.
2. Add your solution file(s), screenshots, or explanatory notes following the
	 existing naming convention (`<index>)_<ProblemName>`).
3. Run `clang-format` or your preferred formatter if you introduce new code
	 style elements.
4. Open a pull request describing the problem you solved and any insights.

## Roadmap

- [ ] Fill in the empty Markdown notebooks with insights per problem.
- [ ] Add unit-test-like harnesses for quick regression checks.
- [ ] Expand beyond 800-level once this set feels comfortable.

Happy hacking, and good luck on your Codeforces grind! 🚀