/* hotel management system
Name:Brian Ouma
Reg no:PA106/G/28812/25
DESCRIPTION:A hotel management system program
*/
#include<stdio.h>

int main(){
	
	// 1D Array - Weekly Revenue Tracker
	
	float revenue [7];
	float total =0, average = 0;
	int i;
	
	printf("Weekly Revenue Tracker \n");
	for (i = 0;i < 7;i++){
		printf("Enter revenue for day %d:",i + 1);
		scanf("%f",&revenue[i]);
		total += revenue[i];
	}
	
	average = total / 7.0;
	printf("\n Total Weekly Revenue: %.2f\n",total);
	printf("Average Daily Revenue: %.2f\n\n",average);
	
	
	//2D Array - Room occupancy (one branch)
	
	int occupancy[5][10];
	int floor,room;
	int occupiedcount, vacantcount;
	
	printf("Room Occupancy (One Branch)\n");
	printf("Simulating random occupancy (1 = occupied,o = vacant)\n");
	
	//simmulate occupancy data
	for (floor = 0; floor < 5;floor++){
		for(room = 0;room < 10;room++){
			occupancy[floor][room] =rand()%2; 
		}
	}
	
	//Displaying occupancy results
	for(floor = 0;floor < 5;floor++){
		occupiedcount = 0;
		vacantcount = 0;
		
		for(room = 0;room < 10;room++){
			if(occupancy[floor][room] == 1)
				occupiedcount++;
			else
				vacantcount++;
			
		}
		printf("Floor %d -> occupied:%d | Vacant: %d\n",floor + 1,occupiedcount, vacantcount);
	}
	printf("\n");
	
	// 3D Array -Multiple Branches
	
	int chain[3][5][5];
	int branch;
	
	
	printf("Room Occupancy (All Branches) \n");
	printf("Simulating occupancy for 3 branches...\n\n");
	
	//simulating occupancy data for all branches
	for (branch = 0;branch <3;branch ++){
		printf("Branch %d: \n",branch + 1);
		for (floor = 1;floor <=5; floor++){
			occupiedcount = 0;
			vacantcount = 0;
			
			for(room = 0;room < 10; room++){
				chain[branch][floor][room] =rand() % 2;
				if(chain[branch][floor][room] == 1)
					occupiedcount++;
				else
					vacantcount++;
				
			}
			printf("Floor %d -> occupied:%d | Vacant: %d\n",floor ,occupiedcount,vacantcount);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}