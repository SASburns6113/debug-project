#include <iostream>
#include <string>

using namespace std;


int main()
{
	//these are the unavrsal values that the data will be put into
	string textToAnalyze;
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int spaces = 0;
	int lengthOfStringSubmittedForAnalysis = 0;
	int unknownCharacters = 0;
	int checkSum = 0;
	
	

	//this two lines are the beginning of the code
	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	//this asks for the users string for analas
	getline(cin, textToAnalyze);

	//we are looping the code to analies the string for the data 
	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		//this part of the code checks the string that the user made and then looks for the
		//vowels in the string the user wrote
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			//sets the vowels in the code to go up by one
			++vowels;//fixed
		}
		//this looks for consonants in the users code(will still look for vowels but the code above will
		//make them count as vowels)
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z'))
		{
		//makes it so that the consenants go up by one when one is found	
			++consonants;//fixed
		}
		//this part looks for the numbers in the code
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
		//increases "digits" counter by one	
			++digits;
		}
		//this looks for all spaces in the code
		else if (textToAnalyze[i] == ' ')
		{
		//increases "spaces" counter by one
			++spaces;
		}
		//this marks that anything that is not in the listed above is unknown
		else
		{
		//increases "unknownCharacters" counter by one
			++unknownCharacters;
		}
	} 

	//tells the code to put all the data gathered and put it togther
	lengthOfStringSubmittedForAnalysis = textToAnalyze.length();
	checkSum = unknownCharacters + vowels + consonants + digits + spaces;

	//this is where the data will be desplayed for the user to see
	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	//checks to see if the checkSum os the same as the text length
	if (checkSum == lengthOfStringSubmittedForAnalysis)
	{
	//if it is this will display	
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else
	{
	//if not this will display
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause");

	return 0;
}


