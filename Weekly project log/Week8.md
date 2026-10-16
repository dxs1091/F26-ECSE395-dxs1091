# Week 8 — Project Log
### *Team Fresh — Semester Project*

---
### Group Contributions
- Worked through iterations of prototypes (10/14)
- Hashed out deliverables for Friday's presentation (10/14)

### Individual Contributions
- Worked on the logic of wireless communication between the sensor node and the display node (10/13)
- Worked on the wiring of the boards (10/14)
- Tackled unknown unknowns, like the need for UUIDs (10/15)
- Prepared the following notes after successful prototype: (10/15)
The data and insights our team has gained so far point to a two-board system that communicates wirelessly; that is to say, it will be Bluetooth that acts at the link between them.

### Design Decisions
- The basement board will decide the state; the display will only show it
- The IR door sensor will be added in the next iterations
- Adding a NeoPixel feature later only changes the basement code, but the Bluetooth link never changes.
- To keep things simple, only one byte is sent (`0`, `1`, or `2`).
- `READY` requires a sustained quiet period with the assumption that a washer may pause mid-cycle; we do not want false positives.
- The system will start in `IDLE` to avoid showing `READY` at start-up.
- BLE, not Wi-Fi or typical Bluetooth.

---

### States
 
| Byte | State | Meaning | How It Pops Up |
|---|---|---|---|
| `0` | `IDLE` | Nothing happening | Power-up (+ returning here from `READY` needs the IR door sensor, planned for the next iteration.) |
| `1` | `RUNNING` | Machine is vibrating | Enough vibration pulses in a 1-second window |
| `2` | `READY` | Machine stopped, which means the completed laundry is waiting | Was `RUNNING`, then continuous quiet for the timeout |
| None | `NO LINK` | Display lost contact with the sensor | Display-only state: not connected, or no message for 15 s |

In a nutshell, the sensor board is going to be the server, as in it will offer data. The display will essentially be the client that reads and listens. Their UUIDs are what identifies them, although I don't fully understand how they work. I just know how to retrieve them. Whether I understand them or not, I know they have to be defined in `shared.h`.