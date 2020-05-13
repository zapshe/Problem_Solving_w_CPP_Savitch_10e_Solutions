#include <iostream>
#include <cmath>

void Ch2_Practice_Program_1();
void Ch2_Practice_Program_2();
void Ch2_Practice_Program_3();
string User_Input(string prompt, string input);
void Ch2_Practice_Program_4();
void Ch2_Practice_Program_5();

double compute_lab(double mass_sweetner, double mass_mouse, double mass_dieter);
void Ch2_Programming_Project_1();

void Ch2_Programming_Project_2();


int Chapter_2() {
	do {
		//system("clear");
		//system("cls");
		cout << endl;
		
		cout << "Chapter 2 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "4. Practice_Program_4" << endl;
		cout << "5. Practice_Program_5" << endl;
		cout << "6. Programming_Project_1" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;
		
		cout << endl;
		
		switch (atoi(option)) {
			case 1: Ch2_Practice_Program_1(); break;
			case 2: Ch2_Practice_Program_2(); break;
			case 3: Ch2_Practice_Program_3(); break;
			case 4: Ch2_Practice_Program_4(); break;
			case 5: Ch2_Practice_Program_5(); break;
			case 6: Ch2_Programming_Project_1(); break;
			case 7: Ch2_Programming_Project_2(); break;
				
			case 0: exit(0);
			default: break;
		}
	} while (true);
	
	return Chapter_2();
}

void Ch2_Practice_Program_1(){
	char ans;
	double cereal_weight = 0.0;
	int cereal_boxes = 0.0;
	
	//repetition structure
	do {
		//prompt user for cereal weight
		cereal_weight = inputDouble("Enter cereal weight(oz): ", true);
		
		//prompt user for cereal boxes
		cereal_boxes = inputInteger("Enter number of boxes: ", true);
		
		//prompt user for iteration
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');}

void Ch2_Practice_Program_2() {
	double n = 0.0, r = 0.0, guess = 0.0, previous_guess = 0.0;
	
	//prompt user for a number to find the square root
	n = inputInteger("Enter a number to find the square root: ", true);
	
	//assign initial guess
	guess = n / 2;
	
	//repetition structure
	do {
		r = n / guess;
		previous_guess = guess;
		guess = (guess + r) / 2;
	} while (previous_guess - guess > 0.01 * previous_guess);
	
	//display result
	cout << "Square root approximation of " << n << " is " << guess << endl;
}

void Ch2_Practice_Program_3(){
	double initial_mph = 0.0;
	double get_minutes = 0.0;
	int get_seconds = 0;
	
	//prompt user for mph
	initial_mph = inputDouble("Enter mph: ", true);
	
	//mph conversion into pace
	
	//double minute value include seconds as decimals
	get_minutes = 60 / initial_mph;
	
	//cast double minute value into an integer
	//then subtract from double minute value
	get_seconds = (get_minutes - (int)get_minutes) * 60;
	
	//display result
	cout << initial_mph << " mph is " << (int)get_minutes << " minute(s) and " << get_seconds << " second(s)" << endl;
}

string User_Input(string prompt, string input){
	cout << prompt;
	cin >> input;
	
	return input;
}
void Ch2_Practice_Program_4(){
	string instructor_name = "",
			user_name = "",
			food = "",
			adjective = "",
			color = "",
			animal = "";
	double number = 0.0;
	
	//prompt user for instructor surname,
	//user's name, a food, a number between 100-120,
	//an adjective, a color, an animal
	
	instructor_name = User_Input("Enter instructor's surname: ", instructor_name);
	user_name = User_Input("Enter your name: ", user_name);
	food = User_Input("Enter a food: ", food);
	number = inputInteger("Enter a number: ", 100, 120);
	adjective = User_Input("Enter an adjective: ", adjective);
	color = User_Input("Enter a color: ", color);
	animal = User_Input("Enter an animal: ", animal);
	
	//display message
	cout << endl << "Dear Instructor " << instructor_name << "," << endl
		 << "I am sorry that I am unable to turn in my homework at this time. " << endl
		 <<"First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill." << endl
		 << "I came down with a fever of " << number << "." << endl
		 << "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food
		 << " on my homework, because he ate it." << endl
		 << "I am currently rewriting my homework and hope you will accept it late." << endl
		 << "Sincerely, " << endl << user_name << endl;
}

void Ch2_Practice_Program_5(){
	double radius = 0.0, sphere_volume = 0.0;
	
	radius = inputDouble("Enter radius of sphere: ", true);
	sphere_volume = (4.0/3.0) * M_PI * pow(radius,3);
	
	cout << "Sphere volume: " << sphere_volume << endl;
}

double compute_lab(double mass_sweetner, double mass_mouse, double mass_dieter){
	return (mass_dieter * (mass_sweetner/mass_mouse));
}
void Ch2_Programming_Project_1(){
	char ans = ' ';
	double mass_sweetner = 0.0, mass_mouse = 0.0, mass_dieter = 0.0, number_soda = 0.0;
	const double PERCENT = 0.001;
	
	do{
		mass_sweetner = inputDouble("Sweetner mass required to kill a mouse: ", true);
		mass_mouse = inputDouble("Mouse mass: ", true);
		mass_dieter = inputDouble("Dieter mass: ", true);
		
		number_soda = compute_lab(mass_sweetner, mass_mouse, mass_dieter) / (mass_sweetner * PERCENT);
		cout << "Soda pop limit: " << (ceil(number_soda) - 1) << endl;
			
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	}while (ans == 'y');
}

void Ch2_Programming_Project_2(){
	
}
