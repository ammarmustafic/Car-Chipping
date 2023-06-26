#include <iostream>
#include <windows.h>
#include <limits>

using namespace std;

int proverabmw = 0;
int proveraaudi = 0;

void showLoadingProgress(int targetProgress) {
    int progress = 0;

    cout << "Progress: ";

    while (progress <= targetProgress) {
        Sleep(1000);
        progress += 10;
        
        if(progress >= 110) {
        	break;
		}
        cout << "\rProgress: " << progress << "%";
        cout.flush();
    }

    cout << endl;
}

 // Audi:
string audi_model_names[5] = {"S4", "A4", "S6", "RS4", "A6"};
void printAudiModels() {
    cout << "+---------------------+" << endl;
    cout << "| Model      | Number |" << endl;
    cout << "+---------------------+" << endl;

    string model_names[5] = {"S4", "A4", "S6", "RS4", "A6"};
    for (int i = 0; i < 5; i++) {
        cout << "| " << model_names[i] << " ";
        if (model_names[i].size() < 10) {
            cout << string(10 - model_names[i].size(), ' ');
        }
        cout << "|   " << i+1 << "    |" << endl;
    }

    cout << "+---------------------+" << endl << endl;
}


// 1
void stageOneAudi() {
    void stageTwoAudi();
    int choice;
    int progress = 0;
    int main();
    
    cout << endl << "Stage 1 Upgrade: " << endl << endl;
    cout << "- Increased horsepower (20-50hp) & torque (30-70lb)" << endl;
    cout << "- Improved throttle response (10-20%)" << endl;
    cout << "- Better fuel economy (1-3MPG)" << endl << endl;
    Sleep(700);

    cout << "Do you want to:" << endl;
    cout << "1 - Continue to Stage 2" << endl;
    cout << "2 - Stay with Stage 1" << endl;
    cout << "3 - Back to the menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            stageTwoAudi();
            break;
         case 2:
        	cout<<"You have chosen to stay with Stage 1.";
        	Sleep(500);
        	system("CLS");
        	
            cout << "Please wait while we stage your Audi to Stage 1." << endl;
            Sleep(600);
            showLoadingProgress(100);
            
            cout << "Your Audi is now at Stage 1! Redirecting you to the main menu." << endl;
            proveraaudi++;
            Sleep(700);
            system("CLS");
            main();
            break;
        case 3:
            cout << "You have chosen to go back to the main menu." << endl;
            Sleep(500);
            system("CLS");
            main(); 
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            stageOneAudi();
            break;
    }
}

// 2
void stageTwoAudi() {
    int choice;
    void stageThreeAudi();
    int main();
    system("CLS");
    cout << endl << "Stage 2 Upgrade: " << endl << endl;
    cout << "- Significant increase in horsepower (50-100hp) & torque (70-120lb)" << endl;
    cout << "- Improved throttle response (20-30%)" << endl;
    cout << "- Better fuel economy (2-4MPG)" << endl;
    cout << "- Enhanced engine sound and performance" << endl << endl;
    Sleep(700);

    cout << "Do you want to:" << endl;
    cout << "1 - Continue to Stage 3" << endl;
    cout << "2 - Stay with Stage 2" << endl;
    cout << "3 - Back to the menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            stageThreeAudi();
            break;
        case 2:
        	cout<<"You have chosen to stay with Stage 2.";
        	Sleep(500);
        	system("CLS");
        	
            cout << "Please wait while we stage your Audi to Stage 2." << endl;
            Sleep(600);
            showLoadingProgress(100);
            
            cout << "Your Audi is now at Stage 2! Redirecting you to the main menu." << endl;
             proveraaudi++;
            Sleep(700);
            system("CLS");
            main();
            break;
        case 3:
            cout << "You have chosen to go back to the main menu." << endl;
            Sleep(300);
            system("CLS");
            main();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            stageTwoAudi();
            break;
    }
}

// 3
void stageThreeAudi() {
	int choice;
	int main();
	system("CLS");
	cout << endl << "Stage 3 Upgrade: "<<endl<<endl;
 	cout << "- Maximum increase in horsepower and torque (100+hp) & (120+lb)" << endl;
    cout << "- Instant and powerful throttle response (30%+)" << endl;
    cout << "- Better fuel economy (4-6MPG)" << endl;
    cout << "- Improved acceleration and top speed" << endl << endl;
    Sleep(700);
	
    cout << "Do you want to:" << endl;
    cout << "1 - Stay with Stage 3" << endl;
    cout << "2 - Back to the menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
     switch(choice) {
        case 1:
        	cout<<"You have chosen to stay with Stage 3.";
        	Sleep(500);
        	system("CLS");
        	
            cout << "Please wait while we stage your Audi to Stage 3." << endl;
            Sleep(600);
            showLoadingProgress(100);
            
            cout << "Your Audi is now at Stage 3! Redirecting you to the main menu." << endl;
             proveraaudi++;
            Sleep(700);
            system("CLS");
            main();
            break;
        case 2:
            cout << "You have chosen to go back." << endl;
            Sleep(700);
            system("CLS");
            main();
            break;
            
        default:
            cout << "Invalid choice. Please try again." << endl;
            stageThreeAudi();
            break;
    }
}


// BMW:
string bmw_model_names[3] = {"3 Series", "5 Series", "7 Series"};

void printBMWModels() {
    cout << "+---------------------+" << endl;
    cout << "| Model      | Number |" << endl;
    cout << "+---------------------+" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "| " << bmw_model_names[i] << " ";
        if (bmw_model_names[i].size() < 10) {
            cout << string(10 - bmw_model_names[i].size(), ' ');
        }
        cout << "|   " << i+1 << "    |" << endl;
    }

    cout << "+---------------------+" << endl << endl;
}

void stageOneBMW() {
    int choice;
    int main();
    void stageTwoBMW();
    cout << endl << "Stage 1 Upgrade: " << endl << endl;
    cout << "- Performance tune (20-60hp)" << endl;
    cout << "- Sports exhaust system" << endl;
    cout << "- Turbocharger/supercharger upgrades" << endl << endl;

    cout << "Do you want to:" << endl;
    cout << "1 - Continue to Stage 2" << endl;
    cout << "2 - Stay with Stage 1" << endl;
    cout << "3 - Back to the menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            stageTwoBMW();
            break;
        case 2:
            cout << "You have chosen to stay with Stage 1." << endl;
            Sleep(400);
            system("CLS");
            
            cout << "Please wait while we stage your BMW to Stage 1." << endl;
            Sleep(600);
            showLoadingProgress(100);
            
            cout << "Your BMW is now at Stage 1! Redirecting you to the main menu." << endl;
            proverabmw++;
            Sleep(700);
            system("CLS");
            main();
            break;
        case 3:
            cout << "You have chosen to go back to the main menu." << endl;
            Sleep(300);
            system("CLS");
            main();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            stageOneBMW();
            break;
    }
}

void stageTwoBMW() {
    int choice;
    int main();
    void stageThreeBMW();
    system("CLS");
    cout << endl << "Stage 2 Upgrade: " << endl << endl;
    cout << "- Significant increase over the stock configuration. (from 30 to 130 hp)" << endl;
    cout << "- Torque gains of 30 to 100+ lb-ft." << endl;
    cout << "- Enhanced Throttle Response" << endl << endl;

    cout << "Do you want to:" << endl;
    cout << "1 - Continue to Stage 3" << endl;
    cout << "2 - Stay with Stage 2" << endl;
    cout << "3 - Back to the menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            stageThreeBMW();
            break;
        case 2:
            cout << "You have chosen to stay with Stage 2." << endl;
            Sleep(400);
            system("CLS");
            
            cout << "Please wait while we stage your BMW to Stage 2." << endl;
            Sleep(600);
            showLoadingProgress(100);
            
            cout << "Your BMW is now at Stage 2! Redirecting you to the main menu." << endl;
             proverabmw++;
            Sleep(700);
            system("CLS");
            main();
            break;
        case 3:
            cout << "You have chosen to go back to the main menu." << endl;
            Sleep(300);
            system("CLS");
            main();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            stageTwoBMW();
            break;
    }
}

void stageThreeBMW() {
	
    int choice;
    int main();
       system("CLS");
    cout << endl << "Stage 3 Upgrade: " << endl << endl;
 	cout << "- Increasing horsepower (from 50 to 200+ hp)" << endl;
    cout << "- Torque gains of 50 to 200+ lb-ft." << endl;
    cout << "- Improved Exhaust System" << endl << endl;

    cout << "Do you want to:" << endl;
    cout << "1 - Stay with Stage 3" << endl;
    cout << "2 - Back to the menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Your car has undergone the Stage 3 upgrade. Redirecting you to the main menu." << endl;
            Sleep(700);
            system("CLS");
            main();
            break;
            
        case 2:
            cout << "You have chosen to stay with Stage 3." << endl;
            Sleep(400);
            system("CLS");
            
            cout << "Please wait while we stage your BMW to Stage 3." << endl;
            
            Sleep(600);
            showLoadingProgress(100);
            
            cout << "Your BMW is now at Stage 3!" << endl;
            proverabmw++;
            Sleep(700);
            system("CLS");
            main();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            stageThreeBMW();
            break;
    }
}



int main() {
    int brand_number;
    bool valid_choice = false;

    string message = "Welcome to the AM chip!";
    for (char c : message) {
        cout << c << flush;
    }
    cout << endl << endl;
nazad:
    cout << "+---------------------+" << endl;
    cout << "| Brand      | Number |" << endl;
    cout << "+---------------------+" << endl;
    
    string brand_names[2] = {"BMW", "Audi"};
    for (int i = 0; i < 2; i++) {
        cout << "| " << brand_names[i] << " ";
        if (brand_names[i].size() < 10) {
            cout << string(10 - brand_names[i].size(), ' ');
        }
        cout << "|   " << i+1 << "    |" << endl;
    }

    cout << "+---------------------+" << endl << endl;

    do {
        cout << "Please select the brand of your car: ";
        cin >> brand_number;

        if (cin.fail() || brand_number < 1 || brand_number > 6) {
        	Sleep(400);
            cout << "Invalid choice. Please enter a number between 1 and 6." << endl;
            system("CLS");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            valid_choice = true;
        }
    } while (!valid_choice);
    
     Sleep(350);
    system("CLS");
    cout << "You chose " << brand_names[brand_number-1] << " as your car's brand." << endl;
    
   if (brand_number == 1) {
        int bmw;
        do {
            cout << endl;
            printBMWModels();
            cout << "Choose your BMW model: ";
            cin >> bmw;

            if (cin.fail() || bmw < 1 || bmw > 3 ) {
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
                Sleep(400);
                system("CLS");
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                valid_choice = false;
            } else {
                valid_choice = true;
            }
            
            if ( proverabmw >= 1 ) {	
            cout<<"You cannot stage more than one BMW, redirecting you to the main menu.";
            Sleep(700);
            system("CLS");
			goto nazad;
			}
			
        } while (!valid_choice);
        Sleep(600);
        cout << "\nFor your model " << bmw_model_names[bmw - 1] << " we have:" << endl;
        stageOneBMW();
    }
    
   if (brand_number == 2) {
   	int audi, choice;
    do {
        cout << endl;
        printAudiModels();
        cout << "Choose your Audi model: ";
        cin >> audi;

        if (cin.fail() || audi < 1 || audi > 5 || proveraaudi > 1) {
        		
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            Sleep(400);
            system("CLS");
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            valid_choice = false;
        } else {
            valid_choice = true;
        }
         if ( proveraaudi >= 1 ) {	
            cout<<"You cannot stage more than one Audi, redirecting you to the main menu.";
            Sleep(700);
            system("CLS");
			goto nazad;
			
			}
			
    } while (!valid_choice);
    	Sleep(600);
        cout << "\nFor your model " << audi_model_names[audi-1] << " we have:" << endl;
        stageOneAudi();

}

    return 0;
}
