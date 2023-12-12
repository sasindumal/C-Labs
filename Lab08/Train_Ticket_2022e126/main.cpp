// MALHARA R.M.Y.S

// 2022/E/126

// EC2010

//Group: C

// Lab: 08

// Program Description: Train Ticket Service

// Certificate of Authenticity:

// I certify that the code in the method function main of this project

// is entirely my own work.


#include <iostream>
#include <iomanip>

class Reservation {
private:
    int totalSeats[3];
    int availableSeats[3];
    int pricePerTicket[3];
    int mealPrice;
    int reservationNumber;

public:
    Reservation(int firstClassTotal, int firstClassAvailable, int firstClassPrice,
                int secondClassTotal, int secondClassAvailable, int secondClassPrice,
                int thirdClassTotal, int thirdClassAvailable, int thirdClassPrice,
                int meal)
        : mealPrice(meal), reservationNumber(1) {
            totalSeats[0] = firstClassTotal;
            availableSeats[0] = firstClassAvailable;
            pricePerTicket[0] = firstClassPrice;

            totalSeats[1] = secondClassTotal;
            availableSeats[1] = secondClassAvailable;
            pricePerTicket[1] = secondClassPrice;

            totalSeats[2] = thirdClassTotal;
            availableSeats[2] = thirdClassAvailable;
            pricePerTicket[2] = thirdClassPrice;
    }

    void displayDetails() {
        std::cout << "Welcome to Advanced Train Ticket Reservation System!\n\n";
        std::cout << "1st class:\nTotal – " << totalSeats[0] << "\nAvailable – " << availableSeats[0] << "\nPrice per ticket – " << pricePerTicket[0] << "\n\n";
        std::cout << "2nd class:\nTotal – " << totalSeats[1] << "\nAvailable – " << availableSeats[1] << "\nPrice per ticket – " << pricePerTicket[1] << "\n\n";
        std::cout << "3rd class:\nTotal – " << totalSeats[2] << "\nAvailable – " << availableSeats[2] << "\nPrice per ticket – " << pricePerTicket[2] << "\nMeal will be provided for " << mealPrice << ".\n\n";
    }

    void makeReservation() {
        std::cout << "Reservation number _" << std::setw(2) << std::setfill('0') << reservationNumber << "\n";
        int classChoice;
        std::cout << "Which class ticket you need? (1/2/3) ";
        std::cin >> classChoice;

        if (classChoice < 1 || classChoice > 3) {
            std::cout << "Invalid choice.\n";
            return;
        }

        classChoice--; // adjusting for array indexing

        int seatsNeeded;
        std::cout << "Do you want a meal? (Y/N) ";
        char mealChoice;
        std::cin >> mealChoice;

        std::cout << "Enter the number of seats you want to reserve: ";
        std::cin >> seatsNeeded;

        if (seatsNeeded > availableSeats[classChoice]) {
            std::cout << "Not enough seats available.\n";
            return;
        }

        int totalCost = seatsNeeded * pricePerTicket[classChoice];
        if (mealChoice == 'Y' || mealChoice == 'y') {
            totalCost += mealPrice;
        }

        std::cout << "Seat is reserved.\n";
        std::cout << "Pay: " << totalCost << "\n\n";

        availableSeats[classChoice] -= seatsNeeded;
        reservationNumber++;
    }
};

int main() {
    Reservation reservation(30, 20, 2250, 50, 35, 1750, 100, 70, 750, 300);
    reservation.displayDetails();

    char anotherReservation;
    do {
        reservation.makeReservation();
        std::cout << "Do you want another reservation? (Y/N) ";
        std::cin >> anotherReservation;
    } while (anotherReservation == 'Y' || anotherReservation == 'y');

    return 0;
}
