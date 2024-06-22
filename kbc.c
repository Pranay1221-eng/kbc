#include <stdio.h>

int main() {
    int questionNumber;
    int totalPrize;
    int option, answer;

    printf("Welcome to Kaun Banega Crorepati!\n\n");
    printf("host by-Dr. chandrasekhar\n");
    printf("done by p.pranay kumar reddy\n");
    printf("roll:no-AUU23EGCSE012\n");

    while (questionNumber <= 15) {
        printf("Question %d: ", questionNumber);

        // Display question and options
        switch (questionNumber) {
            case 1:
                printf("Who is father of c program?\n");
                printf("1. Dr.somasekhar garu\n2. dr.chandrasekhar garu\n3. Dr.sarath babu garu\n4. Dr.ganesh garu\n");
                answer = 2;
                if (answer == 2) {
		            printf("Correct answer!\n");
		            //totalPrize = 1000; 
		            totalPrize = 0;
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break; 
            case 2:
                printf("What does #include <stdio.h> do in a C program?\n");
                printf("1.It includes the standard input/output library. \n2.It declares a variable named stdio with header file h \n3. It defines the main function.\n4.It is used for commenting.

\n");
                answer = 2;
                if (answer == 2) {
		            printf("Correct answer!\n");
		            //totalPrize = 2000; 
		            totalPrize = 1000;
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
                break;
            case 3:
                printf("which is most sensitive organ in body\n");
                printf("1. skin\n2. tongue\n3. hands\n4. ears\n ");
                answer=1;
                if (answer == 1) {
		            printf("Correct answer!\n");
		            //totalPrize = 3000; 
		            totalPrize = 1000;
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
                break;
            case 4:
                printf("What are the terms 3G,4G,5G related to?\n");
                printf("1.population generation\n2. mobile networks\n3. digital camera\n4.grading in schools\n");
                answer=2;
                if (answer == 2) {
		            printf("Correct answer!\n");
		            //totalPrize = 5000;
					totalPrize = 1000; 
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
                break;
            case 5:
                printf("in 2008, rajasthan win in which of the national event\n");
                printf("1. ipl\n2. pkl\n3.isl\n4.phl\n");
                answer=1;
                if (answer == 1) {
		            printf("Correct answer!\n");
		            //totalPrize = 1000;
					totalPrize = 10000;
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
                break;
            case 6:
            	printf("which of the following is higher than 1450gms of iron\n");
            	printf("1. 1.2kg rice\n2. 1.4kg paper\n3. 1.7kg cotton\n4. 1.3kg\n ");
            	answer=3;
            	if (answer == 3) {
		            printf("Correct answer!\n");
		            //totalPrize = 20000; 
		            totalPrize = 10000;
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 7:
                printf("what is the least populous state in india\n");
                printf("1. bihar\n2. sikkim\n3. kerala\n4. meghalaya\n");
                answer=2;
                if (answer == 2) {
		            printf("Correct answer!\n");
		            //totalPrize = 40000; 
		            totalPrize = 10000; 
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 8:
                printf("which country has more natural lakes?\n");
                printf("1. india\n2. america\n3. japan\n4. canada\n");
                answer=4;
                if (answer == 4) {
		            printf("Correct answer!\n");
		            totalPrize = 10000; 
		            //totalPrize = 80000;
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 9:
                printf("which sport is known as america's past time?\n");
                printf("1. football\n2. handball\n3. volley ball\n4. baseball");
                answer=4;
                if (answer == 4) {
		            printf("Correct answer!\n");
		            totalPrize = 10000;
					//totalPrize = 160000; 
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 10:
                printf("which country won the most medals at the 2021 tokyo olympics?\n");
                printf("1.india\n2. japan\n3. united states\n4. russia");
                answer=3;
                if (answer == 3) {
		            printf("Correct answer!\n");
		            totalPrize = 10000;
					//totalPrize = 320000; 
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 11:
                printf("in which state did a politician named a p.subash chandra bose become deputy cheif minister in 2018?\n");
                printf("1. madya pradesh\n2. maharastra\n3. west bengal\n4. andhra pradesh");
                answer=4;
                if (answer == 4) {
		            printf("Correct answer!\n");
		            //totalPrize = 640000; 
		            totalPrize = 320000; 
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 12:
                printf("What is called us presidents wife in respect?\n");
                printf("1. governess\n2. first lady\n3. high lady\n4. new lady\n");
                answer=2;
                if (answer == 2) {
		            printf("Correct answer!\n");
		            //totalPrize = 1250000;
					totalPrize = 320000;  
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 13:
                printf("The release of which of which chemical led to the bhopal gas tragedy in 1984?\n");
                printf("1. hydrogen azide\n2. methyl isocyanate\n3. dichlorosilicon\n4. silicon tetrachloride\n");
                answer=2;
                if (answer == 2) {
		            printf("Correct answer!\n");
		            //totalPrize = 2500,000;
					totalPrize = 320000;  
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            
            case 14:
                printf("according to mahabharata, who among these was not arjuna's wife?)\n");
                printf("1. subadhra\n2. ulupi\n3. devika\n4. chitrangada\n");
                answer=3;
                if (answer == 3) {
		            printf("Correct answer!\n");
		           // totalPrize = 5000000;
					totalPrize = 320000;  
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            case 15:
                printf("Who actually invented the telescope in 1608?)\n");
                printf("1. johannes kepler\n2. nicolous copernicus\n3. hans lippershey\n4. gallileo gellili\n");
                answer=3;
                if (answer == 3) {
		            printf("Correct answer!\n");
		           // totalPrize = 1000000; 
		            totalPrize = 320000; 
		        } else {
		            printf("Sorry, wrong answer. Game over!\n");
		        }
            	break;
            	
                
                
            
            default:
                printf("Invalid question number.\n");
                return 1;
        }

        printf("Your answer: ");
        scanf("%d", &option);

        // Check if the answer is correct
        if (option == answer) {
            printf("Correct answer!\n");
            //totalPrize += 1000000; // Add 1 million to prize
        } else {
            printf("Sorry, wrong answer. Game over!\n");
            break; // Exit the loop if the answer is wrong
        }

        questionNumber++; // Move to the next question
    }

    printf("\nCongratulations! You won %d rupees.\n", totalPrize);
    printf("Thank you for playing Kaun Banega Crorepati!\n");

    return 0;
}
