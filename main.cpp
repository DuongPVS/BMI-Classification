#include <iostream>

float calcBMI(float &w, float &h) {
    float BMI_index = w / (h * h);
    return BMI_index;
}

std::string classify(float BMI_index) {
    if (BMI_index < 18.5) {
        return "Nhe can";
    } else if (BMI_index < 25) {
        return "Can nang binh thuong";
    } else if (BMI_index < 30) {
        return "Thua can";
    } else if (BMI_index < 35) {
        return "Beo phi do I";
    } else if (BMI_index < 40) {
        return "Beo phi do II";
    } else {
        return "Beo phi do III";
    }
}

int main() {
    float w, h;
    std::cin >> w >> h;
    if (w <= 0 || h <= 0) {
        std::cout << "invalid";
    } else {
        float BMI_index = calcBMI(w, h);
        std::cout << classify(BMI_index);
    }
    return 0;
}
