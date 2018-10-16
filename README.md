# AirlineSeating-Chart
PROCESS:This program is desgined to read a list of data consisting of Passenger's Boarding Number, the Requested  
Flight Number, Section, Row, and the Column.This program assigns seats to passengers according to the Rules listed below. It also prints the waiting list.There are 8 flights. The first three rows are designated as "First Class"& the last seven rows are designated "Coach".		 
Rule 1 -The person should be place in the same row,if possible starting from the left side(lowest seat number.)			
Rule 2 - If the requested row is full, the passenger should	be seated as far forward as possible in the requested column but within the requested section.								
THERE IS NO SWITCHING OF SECTIONS.								
Rule 3-If the request using Rule2orRule 3 cannot be honored, the passenger should be assigned the first available seat starting from the front and left of the requested section going across each row until a vacant seat is found.	
Rule 4 - First Class and Coach request must be honored.If	there are no seats in the requested section, the passenger's    
Boarding Number must go on a "WAITING LIST" for the next flight.  
The Airline has 4 cities it services.The cities and their flight numbers are :
Memphis, Tennessee    	1010		Little Rock, Arkansas 	1020
Shreveport, Louisiana 	1030		Orlando, Florida 		1040
Theses flights are from Jackson, Mississippi to the indicated city.
Numbers for the return flights are the same except you add 5 to the appropriate
number.For example, 1025 would be the flight number for the return flight from 
Little Rock to Jackson.                                                                   
USER DEFINED MODULES :
AssignSeat - assigns the seats to the in every flight	   
emptyArray - sets all the seat value to -999 indicating empty seat									  
Header - prints the program header					  
Footer - prints the program footer					   
display1010 - displays the seating chart of the every flight
push1    - Stores boardnum in an array of people in waiting
