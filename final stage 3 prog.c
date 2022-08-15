#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(void)
{
    char reply1, reply2, reply3, reply4, reply5, ns, *email[50], *nric[50], gen, *dob[50], *ph[10], *card[20], end;
    
    while (end != 'x')
       
    {
    
        printf("Welcome to Safra Singapore!\nWe Hope you're having an amazing day! If not, join Safra Club!\n\n");
        printf("By becoming a member at Safra, you will be able to enjoy members-only perks, such as purchasing DISCOUNTED Shaw Theatresmovie tickets, 1-1 offers on Birthdays at selected cruisines, cashback at shopping malls of up to 3%% on every purchase,\nand much more!\n\nDoesn't that sound exciting!?\n");
    
        printf("Would you like to know what facilities we offer? And why we're the best? \t\t\t\a[y/n]");
        scanf(" %c", &reply1);
        printf(" %c", reply1);
        
        reply1 = tolower(reply1);
        
        
        if (reply1 == 'y')

        {
            printf("\n\n      SAFRA                              ACTIVESG               ANYTIME FITNESS \n");
            printf("     -------                            ----------             -----------------\n");
            printf("       Gym                                 Gym                    Gym\n");
            printf("       Dance Studios                       Dance Studios          Dance Studios\n");
            printf("       Restaurants                         Restaurants            Restaurants\n");
            printf("       Swimming pool                       Indoor Hall            Annual Subscription, max 2h/day\n");       
            printf("       Entertainment Rooms                 Hourly Rental          Free Gym access on Birthdays\n");       
            printf("       Bowling Alleys                      No Perks\n");
            printf("       Indoor Sports Hall\n");
            printf("       Games Rooms\n");
            printf("       Movie Perks on special occasions\n");
            printf("       Annual Subscription, Unlimited Access\n\n\n");           
            printf("\n                                             ANNUAL COST\n");   
       
      
            printf("\n      SAFRA                               ACTIVESG                ANYTIME FITNESS\n");
            printf("     -------                             ----------              -----------------\n");
            printf("      $120                              None, $4/hour                 $360\n");
            printf("\nHence, Safra is the best choice overall since it has many more facilities than the other 2 common Gyms around Singapore,and is a cheaper alternative");
            printf("\nYou're literally gaining access to the most exclusive and top-notch facilities at a cheaper price than ever! 2 BIRDS with ONE stone!\n\n\n\n\n");
        }
    
        
        printf("Would you like to sign up for our membership?\nIf you sign up now, you will recieve a complimentary 1-month NETFLIX subscription from us! \t\t\t\a [y/n]");
        scanf(" %c", &reply2);
        reply2 = tolower(reply2);
        
        if (reply1 && reply2 == 'y' || reply1 == 'n' && reply2 == 'y')
        {   
            printf("\n\n\n\nLets begin rightaway!");
            printf("\nFor you to become a member, I would need to ask you for your credentials\n");
            printf("What is your citizenship status? \t\t\t\a[c/p/f]");
            scanf(" %c", &reply3);
            reply3 = tolower(reply3);
        }
    
        else if (reply1 != 'y' || reply2 != 'y')
        {
            printf("\n\n\nYou may exit as the following information may not suit your interests!\nSeeyou next time!!"); 
        }
    
        if (reply3 == 'c' || reply3 == 'p')
        {
            printf("\n\nPlease enter your email (for verification purposes) \t\t\t\a");
            scanf(" %s", &email);
            printf(" %s", email);
            
            printf("\n\nPlease enter the last 4 characters of your NRIC \t\t\t\a");
            scanf(" %s", &nric);
            printf(" %s", nric);
     
            printf("\n\nPlease enter your Gender\t\t\t\a[m/f]");
            scanf(" %c", &gen);
    
            printf("\n\nPlease enter your Date of Birth in this format [dd/mm/yyyy] \t\t\t\a");
            scanf(" %s", &dob);
            printf(" %s", dob);
     
            printf("\n\nPlease enter your Phone Number (which will be used for verification later on)\t\t\t\a");
            scanf(" %s", &ph);
            printf(" %s", ph);
     
            printf("\n\nDo you hereby acknowledge that the details provided by you are true and correct,\nAnd do you give consent of your personal data to be used in accordance with Safra's Policy and agree to comply with out Terms and Conditions? [y/n]\t\t\t\a");
            scanf(" %c", &reply4);
            printf(" %c", reply4);
            
            reply4 = tolower(reply4);
     
            if (reply4 == 'y')
            {
                printf("\n\nYou may now choose from our various Membership Packages");
                printf("\n\nWould you like to sign up for:\n1)Standard Annual Membership? ($120)\n2)Annual Family Membership ($140)\t\t\t\a [1/2]");
                scanf(" %c", &reply5);
                printf(" %c", reply5);
                
                printf("\n\nHave you completed your National Service? [y/n] \t\t\t");
                scanf(" %c", &ns);
               
                reply5 = tolower(reply5); 
      
                if (ns == 'y')
                {
                    printf("You get 50%% off our annual membership");
                }    
                
           
      
                printf("\n\nPlease enter your 16 digit card number (only mastsercard/visa accepted)\t\t\t\a");
                scanf(" %s", &card);
                printf(" %s", card);
                
                printf("\n\nPlease click 'YES' on your mobile phone's screen to verify this purchase");
                printf("\n\nYou will be redirected to login to your MySafra webpage, where you can sign in using your Singpass account");
                printf("\n\nWELCOME TO SAFRA CLUB, VISIT YOUR NEAREST CLUB AND ENJOY OUR EXCLUSIVE FACILITIES\nWe are glad to have you on board on this journey!");
            }
            
            else 
            {
                printf("\n\nSorry, we are unable to process your requests");
            }
        }
        if (reply3 == 'f')
        {
            printf("We are unable to process your request as Safra Membership is only offered to Singaporean Citizens or Permanent Residents\nPlease call us at 1800 377 9800 for further assistance");
        }
        printf("\n\nPress X to exit or R to restart\n\n\n");
        scanf(" %c",&end);
        }
    printf("\a\aMALWARE ALERT!!!!!!\a\a\a\a\a MALWARE ALERT !!!!!! \a\a\a\a\a\aMALWARE ALERT !!!!!!\a\a\a\a\a MALWARE ALERT !!!!!!\a\a\a\a\a MALWARE ALERT !!!!!!");
}
