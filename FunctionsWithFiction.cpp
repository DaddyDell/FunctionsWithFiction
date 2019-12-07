// FunctionsWithFiction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace::std;

void NoSleepNoWork();
void NoSleepWork();
void NoSleepHomework();
void SleepNoWork();
void SleepWork();
void SleepHomework();

int main()
{
	int sleep; //Sleep tracks our sleep. 1 is less sleep, and 2 is more.
	int productivity; //productivity tracks our productivity level. Anything above 1 is good

	cout << "\n\n\n\n\n\n\nWelcome to 'To Work or Not to Work'!\n";
	cout << "The Interactive game in which you\n ";
	cout << "choose your own destiny in a life like world.\n\n\n\n";
	system("pause");
	cout << "\n\n\n\n The Story starts here. It is 7pm, and your shift\n";
	cout << "For work starts in 7 hours.\n";
	cout << "What do you choose to do?\n";
	cout << "Your Options are:\n";
	cout << "1: Stay Up and Game\n";
	cout << "2: Go to Sleep\n";
	cout << "(Select a number!)\nMy Choice:";
	cin >> sleep; //Get the first input

	cout << "\n\n\n\n\n\nIt is now 2am, with your alarm clock ringing\n";
	cout << "louder than that of a war drum.\n";
	cout << "What are you going to do?\n";
	cout << "Your Options are:\n";
	cout << "1: Go back Sleep\n";
	cout << "2: Wake up (And get homework done)\n";
	cout << "3: Wake up (And get ready for work)\n";
	cout << "(Select a number!)\nMy Choice:";
	cin >> productivity; //Get the second input
	
	if (productivity == 3)
	{//You Chose to go to work
		if (sleep == 1)
		{//Did not get enough Sleep
			NoSleepWork();
		}
		else if (sleep == 2)
		{//Got all the sleep
			SleepWork();
		}	
	}
	else if (productivity == 2)
	{//Wake up and get Homework Done
		if (sleep == 1)
		{//Did not get enough Sleep
			NoSleepHomework();
		}
		else if (sleep == 2)
		{//Got all the sleep
			SleepHomework();
		}
	}
	else if (productivity == 1)
	{//Sleep in
		if (sleep == 1)
		{// Did not get enough sleep
			NoSleepNoWork();
		}
		else if (sleep == 2)
		{//Got up with the alarm
			SleepNoWork();
		}
	}
	/*Debug Arena
	cout << "And the results are in!\n";
	cout << "Sleep: " << sleep << endl;
	cout << "Productivity: " << productivity << endl;
	*/
}
void NoSleepNoWork()
{//In this function the user skipped work and skipped sleep
	cout << "\n\n\nAfter a late session of gaming you wake up to\n";
	cout << "Many missed calls and texts...\n";
	cout << "You no longer have a job, and you also are behind on your homework still...\n\n\n\n\n";
}
void NoSleepWork()
{//In this function the user skipped sleep, but not work
	cout << "\n\n\nYou arrive late to work since you were too tired.\n";
	cout << "The Building Supervisor tells you that since you were late\n";
	cout << "You not only get a written warning, but you also get the worst job...\n";
	cout << "You have to Preload the trucks...\n\n\n\n\n";
}
void NoSleepHomework()
{//In this function the user skipped sleep, but not homework
	cout << "\n\n\nYou crawl out of bed...\n";
	cout << "Thinking you still have time to do homework...\n";
	cout << "But alas, you do not...\n";
	cout << "You have 5 missed calls from work, and several late assignments.\n\n\n\n\n";
}
void SleepNoWork()
{//In this function the user skipped work, but not sleep
	cout << "\n\n\nWhile you went to bed early and got plenty of sleep....\n";
	cout << "You feel as if you did nothing... and this is true.\n";
	cout << "You check your phone to many missed calls...\n";
	cout << "You listen to a voicemail to find out that you no longer have a job.\n\n\n\n";
}
void SleepWork()
{//In this function the user skips nothing
	cout << "\n\n\nYou arrive early to work since you got all the sleep.\n";
	cout << "You give the Building Supervisor a 'Good Morning' as you walk by\n";
	cout << "She gives you a 'Good Morning' back, as you walk to your position at Unload.\n";
	cout << "It is going to be a good day, you just know it.\n\n\n\n";
}
void SleepHomework()
{//In this function the user skips work, but not sleep
	cout << "\n\n\nYou wake up after the alarm and boot up your trusty PC.\n";
	cout << "You begin to crank out assignments one after the other, with all that sleep\n";
	cout << "You finish all of the late assignments, and even get ahead on assignments!\n\n\n\n\n";
}
