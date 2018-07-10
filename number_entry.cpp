/*******************************************************************************
 * C++ Number Entry                                                            *
 * =========================================================================== *
 * Allows for a framework where arrays of numbers can be manipulated by the    *
 * user.                                                                       *
 * First, the function will display the current numbers in the array.          *
 * Second, the function will prompt the user to add or remove or edit numbers  *
 * or if the user will confirm that the numbers are correct.                   *
 * For adding, the user will be prompted to enter a number.                    *
 * For removing, the numbers will be displayed with an index. The user will be *
 * prompted to select which index to delete.                                   *
 * For editing, the numbers will be displayed with an index. The user will be  *
 * prompted to select witch index to edit. Then, the user will be prompted to  *
 * enter a new number.                                                         *
 ******************************************************************************/
// Preprocessor
// Includes
// Standard Vector library
#include <vector>
// Standard IOStream library
#include <iostream>

void populate_int_vector(std::vector<int>& intVector)
{

}

namespace numberentry
{
  void display_current_numbers(std::vector<int>& intVector)
  {
    // Display the numbers currently in the vector unless there aren't any.
    if (intVector.size() == 0)
    {
      std::cout << "No numbers have been entered." << std::endl;
    }
    for (int index = 0; index < intVector.size(); index++)
    {

    }
  }
}
