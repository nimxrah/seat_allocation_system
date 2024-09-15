Directorate of Technical Education (DTE) Goa, allocates professional college to candidates based on the performance in the entrance exam. A candidate is allotted a college based on his/her marks scored in the entrance exam and his/her preferences for the various colleges indicated in the application form. You are required to solve the problem of allocation of a college to the candidate based on his/her score and preferences. The candidate is chosen for allocation based on their decreasing score in the entrance exam. If there is tie in the score, applications are processed in the order of submission in the input. We design an object-oriented solution to the problem using appropriate classes and data structure. 

Input Specifications
The first line indicates the number of colleges - N
The next N lines contain information of these N colleges
Each line contains
<name> <number of seats>
The next line contains the number of candidates - C
The next C lines contain candidate information
<id> <marks> <number of preferences> <names of colleges in the descending order of preference>

Sample Input
7 \n
PCC 3 \n
GEC 3 \n
RIT 1 \n
GCA 3 \n
GCP 1 \n 
GMC 1 \n
GDC 1 \n
6 \n
411002 86 3 GCA GCP GMC \n
321003 94 3 PCC RIT GDC \n
321007 89 1 RIT \n
321004 90 2 PCC RIT \n
321006 96 1 PCC \n
321005 95 1 PCC \n

Output Specifications
The output lists the candidate id followed by the college allotted a single line per candidate.
Sample Output
321006 PCC \n
321005 PCC \n
321003 PCC \n
321004 RIT \n
321007 null \n 
411002 GCA \n
