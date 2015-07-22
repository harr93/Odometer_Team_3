#include <iostream>
#include <vector>

using namespace std;

class odometer {
	long long int min_reading;
	long long int max_reading;
	std::vector<long long int> all_readings;
	int max_digit = 9;
	
	odometer(int num_digits) {
		int sum = 0;
		int ten_count = 0;
		for(int i = num_digits; i > 0; i--) {
			sum += i * (ten_count * 10);
			ten_count++;
		}
		this->min_reading = sum;
		this->all_readings = generate_all_readings(sum, num_digits);
		if (!this->all_readings.empty()) {
   			this->max_reading = this->all_readings.back();
   		}
	}
	
	long long int generate_number()
	
	std::vector<long long> generate_all_readings(long long int min_value, int digit_count) {
		int digits[digit_count];
		std::vector<long long int> new_readings;
		new_readings.push_back(min_value);
		int array_index = digit_count - 1;
		while (min_value > 0) {
			digits[array_index] = min_value % 10;
			min_value /= 10;
			array_index--;
		}
		while () {
			//from the end of the array increment and check if less than max if yes convert into number and push in vector
			//if not go to previous number and increment again.
			//break when all digits at max
		}
	}
	
	int getNext(){
		
	}
	
	int getPrevious(int input){
	
		int index = getIndex(input);
		if(index!=-1)
		{
			if (index==0){
	        return allOdometerReadings[allOdometerReadings.size()-1];
	    	}
	    	else{
	        	return allOdometerReadings[index-1];
	   		 }
			
		}
	    
	}
	
	
	int getIndex(int value)
	{
		for(int i=0;i<allOdometerReadings.size();i++)
		{
			if(allOdometerReadings[i]==value)
				return i;
		}
		return -1;
	}
	
	
	void validateInput(int input){
		
	}
	
};

int main()
{
	int odometerSize = 4;
	int userChoice=0;
	int input;
	
	
	cout<<"Enter the odometer size:";
	cin>>odometerSize;
	
	odometer new_odometer = new odometer(odometerSize);
	do{
		
	cout<<"1.Generate all possible readings"<<endl;
	cout<<"2.Get Next"<<endl;
	cout<<"3.Get Previous"<<endl;
	cout<<"4.ValidateInput"<<endl;
	cout<<"5.Exit"<<endl;
	cout<<"Enter Choice:";
	cin>>userChoice;
	
	
	if(userChoice==1)
	odometer.generateAllReading();
	
	if(userChoice==2){
		cout<<"Enter value"<<endl;
		cin>>input;
		int nextOdometerReading=odometer.getNext(input);
		cout<<nextOdometerReading;
	}
	
	
	if(userChoice==3){
		cout<<"Enter value"<<endl;
		cin>>input;
		odometer.getPrevious(input);
	}
	
	
	if(userChoice==3){
		cout<<"Enter value"<<endl;
		cin>>input;
		odometer.validateInput(input);
	}
	
	
	}while(userChoice!=5);

}
