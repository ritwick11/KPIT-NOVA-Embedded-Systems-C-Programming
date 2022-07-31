#include "bitmap.h"

//Complete other records in this array...
VehD VD1[MAX_SIZE] = {
			{"KonaElectric", 7548, 42, 996, 920400}, //0 
			{"JaguarIPace", 8990, 70, 470, 5070000}, //1 
			{"StromMotorsR3", 4572, 12, 200, 701600}, //2
			{"MerBenzEQC", 9098, 21, 120, 4798000}, //3
			{"MG_ZS_EV ", 9011, 42, 403, 3987111}, //4 
			{"E_Verito", 8006, 21, 140, 2055000}, //5
			{"TigorEV", 7676, 21, 213, 1634000}, //6
			{"NexonEV ", 7155, 28, 220, 1533555} //7
			//complete other records here...	 		
	};

//Pointer creation and pointing to the array...
VehD *ptr = VD1;

/*The function returns the Price of EV with the Highest 
Value in the given records.
In case there are 2 or more vehicles with the same 
highest price, return the first EV record found.*/

unsigned long HighestPrice(const VehD *parr, int length)
{
	unsigned long maxPrice = 0;
	for(int i=length-1; i>0; i--)
	{
		if(VD1[i].Price>VD1[i-1].Price)
		{
			maxPrice = VD1[i].Price;
		}
		else
		{
			maxPrice = VD1[i-1].Price;
		}
	}
	return maxPrice;
}


/*
The function returns the lowest/least distance covered 
in the given EV records.  
The candidate must navigate through the records and 
return the lowest no. of DistanceCovered.
In case there are 2 or more vehicles with the same distance 
covered, return the first EV record found.
*/
unsigned int VehWithLeastDistanceCovered(const VehD *parr, int length)
{
	unsigned int lowestDistance = VD1[0].DistanceCovered;
	for(int i=1; i<length; i++)
	{
		if(lowestDistance>VD1[i].DistanceCovered)
			{lowestDistance = VD1[i].DistanceCovered;}
	}
	return lowestDistance;
}


/*
The function returns the total number of vehicles with specific 
BatteryPack value from the given records. Specific BatteryPack 
Value to be identifed as per the third argument passed to the 
function. If argument value is not found in the records under 
BatteryPack, return 0 from function.
Else, return the number of vehicles with the given argument 
BatteryPack value from the function.
*/
unsigned int NoOfVehWithSpecificBatteryPack(const VehD *parr, int length, unsigned int VehBattPack)
{

	unsigned int count=0;
	for(int i=0; i<length; i++)
	{
		if(VehBattPack==VD1[i].BatteryPack)
			count++;
	}
	return count;
}

/*
The function must calculate the average VehicleMass 
from provided record entries and return the average value 
(unsigned integer) from the function. 
In case records are absent, return 0 from the function.
*/
unsigned int AverageVehicleMass (const VehD *parr, int length)
{
	unsigned int average = 0;
	for(int i=0; i<length; i++)
	{
		if(VD1[i].VehicleMass>0)
		{
			average += VD1[i].VehicleMass;
		}
	}
	return average/length;
}

/*
This function is used to display all Vehicle Data Records. 
Call the function displayOneEntry() in this function.
*/
void displayEntries(const VehD *ptr,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		VD1[i].BatteryPack;
		VD1[i].DistanceCovered;
		VD1[i].ModelName;
		VD1[i].Price;
		VD1[i].VehicleMass;
	}
}


/*
This function used for displaying a single record at a time. 
This function should be called inside displayEntries function.
*/
void displayOneEntry(const VehD *ptr)
{
	int i,j;
	for(i=0;i<sizeof(VD1);i++)
	{
		for(j=0;j<sizeof(VD1);j++)
		{
			VD1[j].BatteryPack;
			VD1[j].DistanceCovered;
			VD1[j].ModelName;
			VD1[j].Price;
			VD1[j].VehicleMass;
			break;
		}
	}
}






