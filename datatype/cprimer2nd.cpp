#include <iostream>
using namespace std;
void cprimerexercise2_10() // œ∞Ã‚2.10
{
	cout << "\062" << "\115" << endl;
	cout << '2' << '\t' << 'M' << '\n';
}
void cprimerexercise2_11() //œ∞Ã‚2.11
{
	int b, e, result = 1;
	cout << "Please enter the base:"<<endl;
	cin >> b ;
	cout << "Please enter the exponent:" << endl;
	cin >> e;
	if( e != 0)
	{
		for( int cnt = 0; cnt != e; ++cnt)
		{
			result *= b;
		}
	}
	cout << "The result is:" << result << endl;
}
const int inch_to_foot = 12; // 1 foot = 12 inchs
void cprimerplus_exercise3_7_1()
{
	cout << "Please enter your height(inchs):___\b\b\b";
	int height_inch;
	cin >> height_inch;
	int height_foot;
	height_foot = height_inch / inch_to_foot;
	height_inch = height_inch % inch_to_foot;
	cout << "your height is " << height_foot << " foot " << height_inch << " inch";
    
}

void cprimerplus_exercise3_7_2()
{
	const double meter_to_inch = 0.0254; // 1 inch = 0.0254 meters
	const double pound_to_kg   = 2.2;// 1 kg = 2.2 pound

	int heigt_inch, height_foot;
	cout << "please enter your height(X foot X inchs):"<<endl;
	cout << "first enter your height in foot" << endl;
	cin >> height_foot;
	cout << "then enter your height in inch"<< endl;
	cin >> heigt_inch;
	cout << "your height is " << height_foot << " foot " << heigt_inch << "inches"<<endl;
	double height_meters;
	height_meters = (height_foot * inch_to_foot + heigt_inch) * meter_to_inch;

	double weight_pound;
	double weight_kg;
	cout << "Please enter your weight(pounds):" <<endl;
	cin >> weight_pound ;
	weight_kg = weight_pound * pound_to_kg;

	double body_mass_index;
	body_mass_index = weight_kg/(height_meters * height_meters);
	cout << '\n' << "your body mass index(BMI) is " << body_mass_index <<endl;
}


void cprimerplus_exercise_3_7_3()
{
	const double minute_to_degree = 60.0; // 1 degree = 60 minutes
	const double second_to_minute = 60.0; // 1 minute = 60 seconds

	int degrees, minutes, seconds;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "enter the degrees:";
	cin >> degrees;
	cout << "Next, enter the minutes of arc:" << endl;
	cin >> minutes;
	cout << "Finally, enter the seconds of arc:";
	cin >> seconds;
	double total_degrees;
	total_degrees = degrees + minutes/minute_to_degree +\
		seconds/(minute_to_degree * second_to_minute);

	cout << degrees << "degrees, " << minutes << "minutes, "<< seconds \
		<< "seconds = " << total_degrees << "degrees"<<endl;
}

void cprimerplus_exercise3_7_4()
{
	const int second_to_minute = 60; // 1 minute = 60 seconds;
	const int minute_to_hour = 60;   // 1 hour = 60 minutes
	const int hour_to_day = 24;      // 1 day = 24 hours

	cout << "Enter the number of seconds:";
	long seconds;
	cin >> seconds;
	int days, hours, minutes, second;
	days = seconds / (second_to_minute * minute_to_hour * hour_to_day);
	hours = (seconds % (second_to_minute * minute_to_hour * hour_to_day))/(second_to_minute * minute_to_hour);
	minutes = ((seconds % (second_to_minute * minute_to_hour * hour_to_day))%(second_to_minute * minute_to_hour)) / second_to_minute;
	second = ((seconds % (second_to_minute * minute_to_hour * hour_to_day))%(second_to_minute * minute_to_hour)) % second_to_minute;

	cout << seconds <<" seconds = "<< days << " days, " << hours <<" hours, " << minutes << " minutes, "<< second << " seconds"<< endl;
}

void cprimerplus_exercise3_7_5()
{
	cout << "Enter the world's population:";
	long long world_popu;
	cin >> world_popu;

	cout << "Enter the population of the US:";
	long long us_popu;
	cin >> us_popu;

	double percentage;
	percentage = (us_popu * 100) / world_popu;

	cout << "The population of the US is " << percentage << "% of the world population!" << endl; // ‰≥ˆ
}

void cprimerplus_exercise3_7_6()
{
	cout << "Enter your driven miles(miles):";
	float miles;
	cin >> miles;
	cout << '\n' << "Enter your gallons of gasoline(gallons):";
	float gallons;
	cin >> gallons;
	cout << '\n' << " your car got" << miles/gallons << "miles per gallon\n";

}
void cprimerplus_exercise3_7_7()
{
	const double km100_to_miles = 62.14;
	const double liters_per_galllon = 3.875;
	double euro_rating, us_rating;
	cout << "Enter fuel consumption in liters per 100km:" <<endl;
	cin >>euro_rating;
	us_rating = (km100_to_miles * liters_per_galllon)/euro_rating;
	cout << euro_rating << "liters pper 100km is" << us_rating << "miles per gallon.\n";
}
int main( int argc, char **argv)
{
	//cprimerexercise2_10();
	//cprimerexercise2_11();
	//cprimerplus_exercise3_7_1();
	//cprimerplus_exercise3_7_2();
	//cprimerplus_exercise_3_7_3();
	//cprimerplus_exercise3_7_4();
	//cprimerplus_exercise3_7_5();
	//cprimerplus_exercise3_7_6();
	cprimerplus_exercise3_7_7();
	return 0;	
}