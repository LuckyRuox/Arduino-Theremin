#include <NewPing.h>
#include <NewTone.h>

// Other
#define MIN_PITCH 440
#define MAX_PITCH 880
#define MIN_VOLUME 0
#define MAX_VOLUME 490
#define BUZZER_PIN 9 // Positive pin for the buzzer.

// Units
#define cm float // Unit to represent centimeters, should be unsigned.
#define sonar_unit unsigned int // Unit to represent the time taken from each sonar scan.

// Distances
#define MAX_DIST 40.0 // Maximum distance the sonars can reach, in centimeters.
#define MIN_DIST 2.5 // Minimum distance the sonars can reach, in centimeters.
#define DIST_MARGIN 2.5 // The margin for the minimum and maximum detection range, in centimeters.

// Pitch Sonar
#define TRIG_PIN_P 6 // Trigger pin for the pitch sonar.
#define ECHO_PIN_P 7 // Echo pin for the pitch sonar.
NewPing pitch_sonar(TRIG_PIN_P, ECHO_PIN_P, MAX_DIST); // The NewPing object for the pitch sonar.
cm dist_P = 0.0; // The current distance of the pitch sonar.
cm real_dist_P = 0.0; // The current distance of the pitch sonar.
float pitch = 0.0;

// Volume Sonar
#define TRIG_PIN_V -1 // Trigger pin for the volume sonar, digital, not defined yet.
#define ECHO_PIN_V -1 // Echo pin for the volume sonar, digital, not defined yet.
NewPing volume_sonar(TRIG_PIN_V, ECHO_PIN_V, MAX_DIST); // The NewPing object for the volume sonar.
cm dist_V = 0.0; // The current distance of the volume sonar.
float volume = 0.0;

// Ping Sonar
cm pingSonar(NewPing sonar); // The definition for the ping sonar function.
