/*
___________________________________________________________________________________________________________________________________________________________________________________________________

Name: Hamza Jalil
Class: EECS 210 Assignment Two
Inputs: N/A
Outputs: Departments and their respective programmers.
Functions: 
Creation Date: 02/18/2023
___________________________________________________________________________________________________________________________________________________________________________________________________
Description: 
Suppose there are 5 Departments and 5 Programmers, each identified with an integer number between 1 and 5. You are to assign each Programmer to a Department according to the preferences given below. 
Each Department has a preference for the Programmers. For example, Department #1 preferences are as follows: 1 5 3 2 4, meaning that it would like to have programmer #1 as its first choice and 
programmer #4 as its last option. When there is a conflict, i.e., two Departments would like to have the same Programmer as their first choice, then consult with the Programmer in question, 
(that is, check his/her preferences) to determine which Department gets to hire him/her. When the program terminates, all Departments should have one programmer assigned to them.
___________________________________________________________________________________________________________________________________________________________________________________________________

*/

#include <iostream>
#include <string>
using namespace std;

void StepOne(int D1[], int D2[], int D3[], int D4[], int D5[], string &D1Value, string &D2Value, string &D3Value, string &D4Value, string &D5Value, bool &P1Value, bool &P2Value, bool &P3Value, bool &P4Value, bool &P5Value)
    {
        
        int value1 = D1[0];
        int value2 = D2[0];
        int value3 = D3[0];
        int value4 = D4[0];
        int value5 = D5[0];
        
        //D1
        if(value1 != value2 && value1 != value3 && value1 != value4 && value1 != value5)
            {
                if(value1 == 1)
                    {
                        D1Value = "P1";
                        P1Value = true;
                    }
                if(value1 == 2)
                    {
                        D1Value = "P2";
                        P2Value = true;
                    }
                if (value1 == 3)
                    {
                        D1Value = "P3";
                        P3Value = true;
                    }
                if(value1 == 4)
                    {
                        D1Value = "P4";
                        P4Value = true;
                    }
                if(value1 == 5)
                    {
                        D1Value = "P5";
                        P5Value = true;
                    }
            }
        //D2
        if(value2 != value1 && value2 != value3 && value2 != value4 && value2 != value5)
            {   
                if(value2 == 1)
                    {
                        D2Value = "P1";
                        P1Value = true;
                    }
                if(value2 == 2)
                    {
                        D2Value = "P2";
                        P2Value = true;
                    }
                if(value2 == 3)
                    {
                        D2Value = "P3";
                        P3Value = true;
                    }
                if(value2 == 4)
                    {
                        D2Value = "P4";
                        P4Value = true;
                    }
                if(value2 == 5)
                    {
                        D2Value = "P5";
                        P5Value = true;
                    }
            }

        if(value3 != value1 && value3 != value2 && value3 != value4 && value3 != value5)
            {
                if(value3 == 1)
                    {
                        D3Value = "P1";
                        P1Value = true;
                    }
                if(value3 == 2)
                    {
                        D3Value = "P2";
                        P2Value = true;
                    }
                if(value3 == 3)
                    {
                        D3Value = "P3";
                        P3Value = true;
                    }
                if(value3 == 4)
                    {
                        D3Value = "P4";
                        P4Value = true;
                    }
                if(value3 == 5)
                    {
                        D3Value = "P5";
                        P5Value = true;
                    }
            }

        if(value4 != value1 && value4 != value2 && value4 != value3 && value4 != value5)
            {
                if(value4 == 1)
                    {
                        D4Value = "P1";
                        P1Value = true;
                    }
                if(value4 == 2)
                    {
                        D4Value = "P2";
                        P2Value = true;
                    }
                if(value4 == 3)
                    {
                        D4Value = "P3";
                        P3Value = true;
                    }
                if(value4 == 4)
                    {
                        D4Value = "P4";
                        P4Value = true;
                    }
                if(value4 == 5)
                    {
                        D4Value = "P5";
                        P5Value = true;
                    }
            }
        
        if(value5 != value1 && value5 != value2 && value5 != value3 && value5 != value4)
            {
                if(value5 == 1)
                    {
                        D5Value = "P1";
                        P1Value = true;
                    }
                if(value5 == 2)
                    {
                        D5Value = "P2";
                        P2Value = true;
                    }
                if(value5 == 3)
                    {
                        D5Value = "P3";
                        P3Value = true;
                    }
                if(value5 == 4)
                    {
                        D5Value = "P4";
                        P4Value = true;
                    }
                if(value5 == 5)
                    {
                        D5Value = "P5";
                        P5Value = true;
                    }
            }
    }

void checker(int Department1Array[], int Department2Array[], int SameProgrammer, int d_num1, int d_num2, string &Department1Value, string &Department2Value, int ProgrammerArray1[], int ProgrammerArray2[], int ProgrammerArray3[], int ProgrammerArray4[], int ProgrammerArray5[], bool &ProgrammerValue1, bool &ProgrammerValue2, bool &ProgrammerValue3 ,bool &ProgrammerValue4 ,bool &ProgrammerValue5)
    {
            bool programmerfound = false;
            int counter = 0;
            
            while (programmerfound == false)
                {
                    if(SameProgrammer == 1 && ProgrammerValue1 == false)
                        { // If they both equal P1 and P1 has not been assigned a value
                            
                            for (int i = 0; i < 5; i++)
                                {
                                    if (ProgrammerArray1[i] == d_num1)
                                        { // If P1 = D1
                                            Department1Value = "P1";
                                            ProgrammerValue1 = true;
                                            programmerfound = true;
                                            break;
                                        }
                                
                                    if (ProgrammerArray1[i] == d_num2)
                                        { // If P1 = D2
                                            Department2Value = "P1";
                                            ProgrammerValue1 = true;
                                            programmerfound = true;
                                            break;
                                        }
                                }
                        }
    
                    if(SameProgrammer == 2 && ProgrammerValue2 == false)
                        { // If they both equal P2 and P2 has not been assigned a value
    
                            for (int i = 0; i < 5; i++)
                                {
                                    if (ProgrammerArray2[i] == d_num1)
                                        { // If P2 = D1
                                            Department1Value = "P2";
                                            ProgrammerValue2 = true;
                                            programmerfound = true;
                                            break;
                                        }
    
                                    if (ProgrammerArray2[i] == d_num2)
                                        { // If P2 = D2
                                            Department2Value = "P2";
                                            ProgrammerValue2 = true;
                                            programmerfound = true;
                                            break;
                                        }
                                }
                        }
    
                    if(SameProgrammer == 3 && ProgrammerValue3 == false)
                        { // If they both equal P3 and P3 has not been assigned a value
    
                            for (int i = 0; i < 5; i++)
                                {
                                    if (ProgrammerArray3[i] == d_num1)
                                        { // If P3 = D1
                                            Department1Value = "P3";
                                            ProgrammerValue3 = true;
                                            programmerfound = true;
                                            break;
                                        }
    
                                    if (ProgrammerArray3[i] == d_num2)
                                        { // If P3 = D2
                                            Department2Value = "P3";
                                            ProgrammerValue3 = true;
                                            programmerfound = true;
                                            break;
                                        }
                                }
                        }
    
                    if(SameProgrammer == 4 && ProgrammerValue4 == false)
                        {
                        // If they both equal P4 and P4 has not been assigned a value
    
                            for (int i = 0; i < 5; i++)
                                {
                                    if (ProgrammerArray4[i] == d_num1)
                                        { // If P4 = D1
                                            Department1Value = "P4";
                                            ProgrammerValue4 = true;
                                            programmerfound = true;
                                            break;
                                        }
    
                                    if (ProgrammerArray4[i] == d_num2)
                                        { // If P4 = D2
                                            Department2Value = "P4";
                                            ProgrammerValue4 = true;
                                            programmerfound = true;
                                            break;
                                        }
                                }
                        }
    
                    if(SameProgrammer == 5 && ProgrammerValue5 == false)
                        { // If they both equal P5 and P5 has not been assigned a value
    
                        for(int i = 0; i < 5; i++)
                            {
                                if (ProgrammerArray5[i] == d_num1)
                                    { // If P5 = D1
                                        Department1Value = "P5";
                                        ProgrammerValue5 = true;
                                        programmerfound = true;
                                        break;
                                    }
    
                                if (ProgrammerArray5[i] == d_num2)
                                    { // If P5 = D2
                                        Department2Value = "P5";
                                        ProgrammerValue5 = true;
                                        programmerfound = true;
                                        break;
                                    }
                            }
    
                    if (counter == 4)
                        {
                            bool array1 = false;
                            programmerfound == true;
                            
                        }
    
                    if (programmerfound == false && counter <5)
                        {
                                counter = counter + 1;
                                SameProgrammer = Department1Array[counter];
                
                        }
                }
                
                if (Department1Value == "na")
                {
                    for (int i = 0; i < 5; i++)
                        {
                            if(ProgrammerValue1 == false && ProgrammerArray1[i] == d_num1)
                                { // If P1 = D1
                                    Department1Value = "P1";
                                    ProgrammerValue1 = true;
                                    break;
                                }
    
                            if(ProgrammerValue2 == false && ProgrammerArray2[i] == d_num1)
                                { // If P2 = D1
                                    Department1Value = "P2";
                                    ProgrammerValue2 = true;
                                    break;
                                }
    
                            if(ProgrammerValue3 == false && ProgrammerArray3[i] == d_num1)
                                { // If P3 = D1
                                    Department1Value = "P3";
                                    ProgrammerValue3 = true;
                                    break;
                                }
                                
                            if(ProgrammerValue4 == false && ProgrammerArray4[i] == d_num1)
                                { // If P4 = D1
                                    Department1Value = "P4";
                                    ProgrammerValue4 = true;
                                    break;
                                }
    
                            if(ProgrammerValue5 == false && ProgrammerArray5[i] == d_num1)
                                { // If P5 = D1
                                    Department1Value = "P5";
                                    ProgrammerValue5 = true;
                                    break;
                                }
                        }
                }
    
            else
                {
                    for (int i = 0; i < 5; i++)
                        {
                            if(ProgrammerValue1 == false && ProgrammerArray1[i] == d_num2)
                                { // If P1 = D1
                                    Department2Value = "P1";
                                    ProgrammerValue1 = true;
                                    break;
                                }
    
                            if(ProgrammerValue2 == false && ProgrammerArray2[i] == d_num2)
                                { // If P2 = D1
                                    Department2Value = "P2";
                                    ProgrammerValue2 = true;
                                    break;
                                }
    
                            if(ProgrammerValue3 == false && ProgrammerArray3[i] == d_num2)
                                { // If P3 = D1
                                    Department2Value = "P3";
                                    ProgrammerValue3 = true;
                                    break;
                                }
    
                            if(ProgrammerValue4 == false && ProgrammerArray4[i] == d_num2)
                                { // If P4 = D1
                                    Department2Value = "P4";
                                    ProgrammerValue4 = true;
                                    break;
                                }
    
                            if(ProgrammerValue5 == false && ProgrammerArray5[i] == d_num2)
                                { // If P5 = D1
                                    Department2Value = "P5";
                                    ProgrammerValue5 = true;
                                    break;
                                }
                        }
                }
        }
    }
    



int main()
    {
        int D1[5] = {1,5,3,2,4};
        int D2[5] = {1,3,4,2,5};
        int D3[5] = {3,4,2,5,1};
        int D4[5] = {3,1,2,4,5};
        int D5[5] = {4,3,1,2,5};
    
        int d1 = 1;
        int d2 = 2;
        int d3 = 3;
        int d4 = 4;
        int d5 = 5;
    
        string D1Value = "na";
        string D2Value = "na";
        string D3Value = "na";
        string D4Value = "na";
        string D5Value = "na";
    
        int P1[5] = {3,1,2,5,4};
        int P2[5] = {4,3,1,5,2};
        int P3[5] = {2,5,4,1,3};
        int P4[5] = {4,5,2,1,3};
        int P5[5] = {3,2,1,5,4};
    
        bool P1Value = false;
        bool P2Value = false;
        bool P3Value = false;
        bool P4Value = false;
        bool P5Value = false;
        
        int value = 0;
        
        StepOne(D1, D2, D3, D4, D5, D1Value, D2Value, D3Value, D4Value, D5Value, P1Value, P2Value, P3Value, P4Value, P5Value);
        
        if(D1[0]==D2[0] or D1[0]==D3[0] or D1[0]==D4[0] or D1[0]==D5[0])
            {
                if(D1[0]==D2[0])
                    {
                        value = D1[0];
                        // Run a function that does this then use an if statement to solve the other one tht checks each index of each programmer
                        checker(D1, D2, value, d1, d2, D1Value, D2Value, P1, P2, P3, P4, P5, P1Value, P2Value, P3Value, P4Value, P5Value);
                    }

                if(D1[0]==D3[0])
                    {
                        value = D1[0];
                        // Run a function that does this then use an if statement to solve the other one tht checks each index of each programmer
                        checker(D1, D3, value, d1, d3, D1Value, D3Value, P1, P2, P3, P4, P5, P1Value, P2Value, P3Value, P4Value, P5Value);
                    }
                
                if(D1[0]==D4[0])
                    {
                        value = D1[0];
                        // Run a function that does this then use an if statement to solve the other one tht checks each index of each programmer
                        checker(D1, D4, value, d1, d4, D1Value, D4Value, P1, P2, P3, P4, P5, P1Value, P2Value, P3Value, P4Value, P5Value);
                    }
                
                if(D1[0]==D5[0])
                    {
                        value = D1[0];
                        // Run a function that does this then use an if statement to solve the other one tht checks each index of each programmer
                        checker(D1, D5, value, d1, d5, D1Value, D5Value, P1, P2, P3, P4, P5, P1Value, P2Value, P3Value, P4Value, P5Value);
                    }
            }
    
        cout << D1Value << D2Value << D3Value << D4Value << D5Value;
        
        return 0;
    }
