#include <iostream>
#include "Printer.h"

using namespace std;

int main()
{
    Printer printer;

    cout << "========================================" << endl;
    cout << "     SHARED PRINTER SIMULATION" << endl;
    cout << "========================================" << endl;

    // Create some printing jobs
    Job job1(101, "Seth", 5);
    Job job2(102, "Emman", 10);
    Job job3(103, "Trisha", 3);
    Job job4(104, "James", 8);
    Job job5(105, "Angel", 6);

    // Add jobs to the printer
    cout << "\n===== ADDING PRINT JOBS =====" << endl;

    printer.addJob(job1);
    printer.addJob(job2);
    printer.addJob(job3);
    printer.addJob(job4);
    printer.addJob(job5);

    // Display all pending jobs
    printer.displayJobs();

    // Process the first job
    cout << "\n===== PROCESSING FIRST JOB =====" << endl;

    printer.processJob();

    // Display remaining jobs
    printer.displayJobs();

    // Process all remaining jobs
    cout << "\n===== PROCESSING REMAINING JOBS =====" << endl;

    printer.processAllJobs();

    // Check if queue is empty
    cout << "\n===== CHECKING PRINTER QUEUE =====" << endl;

    if (printer.isEmpty())
    {
        cout << "The printer queue is empty." << endl;
    }
    else
    {
        cout << "There are still "
             << printer.getJobCount()
             << " jobs waiting." << endl;
    }

    cout << "\n========================================" << endl;
    cout << "       SIMULATION FINISHED" << endl;
    cout << "========================================" << endl;

    return 0;
}