# Define a class for jobs
class Job:
    def __init__(self, id, deadline, profit):
        self.id = id        # Job ID
        self.deadline = deadline  # Deadline to complete the job
        self.profit = profit      # Profit for completing the job

# Define a solution class to solve the job scheduling problem
class Solution:
    def jobScheduling(self, jobs):
        # Step 1: Sort jobs by profit in descending order
        jobs.sort(key=lambda x: x.profit, reverse=True)
        
        # Find the maximum deadline to determine the range of time slots available
        maxi = jobs[0].deadline
        for i in range(1, len(jobs)):
            maxi = max(maxi, jobs[i].deadline)

        # Initialize slots to keep track of assigned jobs, with each slot initially empty (-1)
        slot = [-1] * (maxi + 1)

        # Variables to store the number of jobs done and the total profit
        countJobs = 0
        jobProfit = 0

        # Step 2: Iterate through each job in sorted order
        for i in range(len(jobs)):
            # Try to find a free slot for this job, starting from its deadline and moving backwards
            for j in range(jobs[i].deadline, 0, -1):
                if slot[j] == -1:  # If the slot is empty
                    slot[j] = i    # Assign the job to this slot
                    countJobs += 1 # Increment the count of jobs done
                    jobProfit += jobs[i].profit # Add the job's profit to the total profit
                    break           # Break as the job is scheduled

        # Return the total count of jobs done and the total profit
        return countJobs, jobProfit

# Test the code with a sample list of jobs
if __name__ == "__main__":
    jobs = [Job(1, 4, 20), Job(2, 1, 10), Job(3, 2, 40), Job(4, 2, 30)]
    count, profit = Solution().jobScheduling(jobs)
    print(count, profit)  # Output the number of jobs done and the total profit
