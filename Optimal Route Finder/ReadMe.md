
This program displays optimal routes for a set of source and destination cities

Input files –
The below files will be available to the program -

Filename – city_codes.dat
CITY         CODE
Bangalore --- BLR
Chennai ----- CHE
Delhi ------- DEL
Kolkata ----- KOL
Mysore ------ MYS
Trivandrum -- TRV
Pune -------- PUN
Hyderabad --- HYD
Gurgaon ----- GUR
Kochi ------- KOC
Tirupati ---- TIR

Filename - routes.dat
Inter-City routes and Distances
ROUTE No. --- SRC --- DEST --- KMs --- COST
0001 -------- BLR --- CHE ---- 300 --- 1000
0002 -------- BLR --- DEL ---- 1200 -- 5000
0003 -------- BLR --- HYD ---- 500 --- 1500
0004 -------- CHE --- PUN ---- 600 --- 1700
0005 -------- CHE --- KOC ---- 900 --- 2000
0006 -------- CHE --- TIR ---- 800 --- 1750
0007 -------- KOC --- MUN ---- 100 --- 900
0008 -------- TRV --- MUN ---- 75 ---- 800
0009 -------- BLR --- TRV ---- 950 --- 2500
0010 -------- BLR --- KOC ---- 1000 -- 2700

If the user wants to go from a source city to a destination city,
the program should display ALL the available routes between the
two cities sorted based on optimal routes (i.e. with the most
optimal route shown first and the least optimal route shown at
the end).

The optimality of the route is decided based on either of the
below two –
	 LEAST_DISTANCE between the source and destination cities
	 LEAST_COST between the source and destination citiesBy default, LEAST_DISTANCE is considered as optimality setting.

The output can be shown using City codes OR using ROUTE numbers.
By default, CITY_CODES is considered as output_format setting.
Configuration file (STS_config.dat)
The settings should be controlled using a configuration file
(STS_config.dat). The default format of the configuration file

STS_config.dat should be as below –
# Configuration file
# OPTIMALITY can be set to LEAST_DISTANCE or LEAST_COST
OPTIMALITY = LEAST_DISTANCE
# OUTPUT_FORMAT can be set to CITY_CODES or ROUTE_NOS
OUTPUT_FORMAT = CITY_CODES

EXAMPLE - If the user wants to go from Bangalore to Munnar, the
program should display all the available routes as below, with
the most optimal route shown first and the least optimal route
shown at the end. Please note how the values in the configuration
file decide the output format.

CASE 1 -
Configuration file:
OPTIMALITY = LEAST_DISTANCE
OUTPUT_FORMAT = CITY_CODES
Output:
1 - BLR -> TRV -> MUN = 950+75 = 1025 Kms
2 - BLR -> KOC -> MUN = 1000+100 = 1100 Kms
3 - BLR -> CHE -> KOC -> MUN = 300+900+100 = 1300 Kms

CASE 2 -
Configuration file:
OPTIMALITY = LEAST_COST
OUTPUT_FORMAT = CITY_CODES
Output:
1 - BLR -> TRV -> MUN = 2500+800 = 3300 INR
2 - BLR -> KOC -> MUN = 2700+900 = 3600 INR
3 - BLR -> CHE -> KOC -> MUN = 1000+2000+000 = 3900 INR

CASE 3 -
Configuration file:
OPTIMALITY = LEAST_DISTANCEOUTPUT_FORMAT = ROUTE_NOS
Output:
1 - 0009 -> 0008 = 950+75 = 1025 Kms
2 - 0010 -> 0007 = 1000+100 = 1100 Kms
3 - 0001 -> 0005 -> 0007 = 300+900+100 = 1300 Kms

CASE 4 -
Configuration file:
OPTIMALITY = LEAST_COST
OUTPUT_FORMAT = ROUTE_NOS
Output:
1 - 0009 -> 0008 = 2500+800 = 3300 INR
2 - 0010 -> 0007 = 2700+900 = 3600 INR
3 - 0001 -> 0005 -> 0007 = 1000+2000+000 = 3900 INR

How will the user input source and destination cities for which he wants to find
the routes and book tickets?
Single request - The user should be able to provide the source and destination cities
individually, as below -
SRC    DEST
BLR --- MUN
...and the program should display the optimal routes as shown in the above examples.
Group request - It should also be possible to provide sets of source and destination
cities in a group file, as below -
Input file containing sets of source and destination cities, one in each line –
Filename – find_routes.dat
SRC     DEST
BLR --- MUN
PUN --- GUR
CHE --- BLR
...and for each set of SRC and DEST cities, the program should display the optimal
routes as shown in the above examples.
