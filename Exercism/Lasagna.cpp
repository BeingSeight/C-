/*
Lucian's girlfriend is on her way home and he hasn't cooked their anniversary dinner!

In this exercise, you're going to write some code to help Lucian cook an exquisite lasagna from his favorite cookbook.

You have four tasks, all related to the time spent cooking the lasagna.

1. Define the ovenTime() function that does not take any arguments and returns how many minutes the lasagna
should be in the oven. According to the cookbook, the expected oven time is 40 minutes:


2. Define the remainingOvenTime(int actualMinutesInOven) function that takes the actual minutes the lasagna has 
been in the oven as an argument and returns how many minutes the lasagna still has to remain in the oven,
based on the expected oven time in minutes from the previous task.


3. 

*/
// ovenTime returns the amount in minutes that the lasagna should stay in the oven.
int ovenTime() {
    // Return the correct time.
    return 40;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // Calculate and return the remaining time in the oven based on the time
    // the lasagna has already been there.
    return ovenTime() - actualMinutesInOven;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // Calculate and return the preparation time with the
    // `numberOfLayers`.
    return numberOfLayers * 2; // Assuming 2 minutes per layer
}

// elapsedTime calculates the total time spent to create and bake the lasagna so far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // Calculate and return the total time so far.
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}