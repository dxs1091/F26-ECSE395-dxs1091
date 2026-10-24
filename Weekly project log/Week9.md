# Week 9 — Project Log
### *Team Fresh — Semester Project*

---
### Group Contributions
- Worked to finalize Prototype 1, 2, and 3 (10/21)
- Agreed on assignments for Midterm Group Presentation (10/23)

### Individual Contributions
- Worked on the logic and features of the `IDLE`, `RUNNING`, and `READY` states (10/20)
- Decided that the IR sensor implementation be deferred to next week due to short week (10/21)
- Tested the wireless link end-to-end; that is, from `NO LINK` to `IDLE`, switched to `RUNNING` when I shook the vibration sensor, and then to `READY` after a period of no vibration (10/22)
- Configured NeoPixel settings, helper functions, and constants at the top of `src/display/main.cpp` (10/23)
- Trying to keep visual indicators synchronized; will require more fine-tuning (10/23)
- Implemented a breathing cycle for the `READY` state from dark to peak with a cosine wave (10/23)