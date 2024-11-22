#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
    Serial.begin(115200);
    Wire.begin();
    if (!mpu.begin()) {
        Serial.println("Failed to initialize MPU6050!");
        while (1);
    }
    Serial.println("MPU6050 initialized.");
}

void loop() {
    // Get accelerometer and gyroscope data
    float ax, ay, az;
    float gx, gy, gz;

    mpu.getAcceleration(&ax, &ay, &az);
    mpu.getRotation(&gx, &gy, &gz);

    // Print accelerometer values (linear acceleration)
    Serial.print("Accel: ");
    Serial.print(ax); Serial.print(" ");
    Serial.print(ay); Serial.print(" ");
    Serial.println(az);

    // Print gyroscope values (angular velocity)
    Serial.print("Gyro: ");
    Serial.print(gx); Serial.print(" ");
    Serial.print(gy); Serial.print(" ");
    Serial.println(gz);

    delay(500);
}
