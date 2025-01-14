#include "definitions.h"

// Initializes the serial output.
void setup()
{
    Serial.begin(9600);
    pinMode(A0, INPUT);
}

// Repeats the main loop every 10 miliseconds.
// In the main loop the distance of each sonar is pinged.
// And the buzzer is played with the according pitch and volume.
// Also detects for any discrepancies between the distances.
void loop()
{
    // Analog Write Changes volume on "~" digital pins
    dist_P = pitch_sonar.ping_cm();
    if (abs(real_dist_P - dist_P) >= DIST_MARGIN)
    {
        real_dist_P = dist_P;
    }
    pitch = round(map(real_dist_P, MIN_DIST, MAX_DIST, MIN_PITCH, MAX_PITCH) / 36.6) * 36.6;

    dist_V = volume_sonar.ping_cm();
    volume = map(dist_V, MIN_DIST, MAX_DIST, MIN_VOLUME, MAX_VOLUME);

    Serial.print("dist_P: ");
    Serial.println(pitch);

    if (real_dist_P <= MAX_DIST - DIST_MARGIN && real_dist_P >= MIN_DIST + DIST_MARGIN)
        NewTone(BUZZER_PIN, pitch);
    else
        noNewTone(BUZZER_PIN);

    delay(10);
}
