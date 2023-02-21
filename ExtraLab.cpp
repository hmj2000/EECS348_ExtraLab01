#include <iostream>
#include <string>
using namespace std;

void Checker(int d_num1, int d_num2, int SameProgrammer, string &Department1Value, string &Department2Value, int Department1Array[], int Department2Array[], int ProgrammerArray1[], int ProgrammerArray2[], int ProgrammerArray3[], int ProgrammerArray4[], int ProgrammerArray5[], bool ProgrammerValue1, bool ProgrammerValue2, bool ProgrammerValue3 ,bool ProgrammerValue4 ,bool ProgrammerValue5)   {
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

