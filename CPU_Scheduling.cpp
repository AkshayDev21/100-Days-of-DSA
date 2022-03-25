#include<bits/stdc++.h>
using namespace std;
struct process 
{
    int pid;
    int arrival_time;
    int burst_time;
    int priority;
    int start_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
    int response_time;
	
};
class Scheduling_alogorithm
{
	public:
		void FCFS();
		void SJF();
		void Priority();
		void Round_Robin();
};
void Scheduling_alogorithm::FCFS()
{
	int n, bt[20], wt[20], tat[20], avwt=0, avtat=0, i;
    cout<<"Enter Number of Processes: ";
    cin>>n;
 
    cout<<"Enter Process Burst Time:"<<endl;
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]: ";
        cin>>bt[i];
    }
 
    wt[0]=0;
    cout<<endl<<"Process\t\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
    for(i=0;i<n;i++){
        wt[i+1]= wt[i]+bt[i];
        tat[i]= wt[i]+bt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        cout<<"P["<<i+1<<"]\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
    cout<<"Average Waiting Time: "<<(float)avwt/(float)n<<endl;
    cout<<"Average Turnaround Time: "<<(float)avtat/(float)n<<endl;
}
void Scheduling_alogorithm::SJF()
{
	int n, bt[20], wt[20], tat[20], avwt=0, avtat=0, i, j, index[20];
    cout<<"Enter Number of Processes: ";
    cin>>n;
 
    cout<<"Enter Process Burst Time:"<<endl;
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
        index[i]=i;
    }
 
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(bt[j]<bt[i]){
                swap(bt[i], bt[j]);
                swap(index[i], index[j]);
            }
        }
    }
 
    wt[0]=0;
    cout<<endl<<"Process\t\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
    for(i=0;i<n;i++){
        wt[i+1]= wt[i]+bt[i];
        tat[i]= wt[i]+bt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        cout<<"P["<<index[i]+1<<"]\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
 
    cout<<endl<<"Average Waiting Time: "<<avwt/i<<endl;
    cout<<"Average Turnaround Time: "<<avtat/n<<endl;
}
void Scheduling_alogorithm::Priority()
{
	int n;
    struct process p[100];
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    float cpu_utilisation;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    int total_idle_time = 0;
    float throughput;
    int is_completed[100];
    memset(is_completed,0,sizeof(is_completed));

    cout << setprecision(2) << fixed;

    cout<<"Enter the number of processes: ";
    cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Enter arrival time of process "<<i+1<<": ";
        cin>>p[i].arrival_time;
        cout<<"Enter burst time of process "<<i+1<<": ";
        cin>>p[i].burst_time;
        cout<<"Enter priority of the process "<<i+1<<": ";
        cin>>p[i].priority;
        p[i].pid = i+1;
        cout<<endl;
    }

    int current_time = 0;
    int completed = 0;
    int prev = 0;

    while(completed != n) {
        int idx = -1;
        int mx = -1;
        for(int i = 0; i < n; i++) {
            if(p[i].arrival_time <= current_time && is_completed[i] == 0) {
                if(p[i].priority > mx) {
                    mx = p[i].priority;
                    idx = i;
                }
                if(p[i].priority == mx) {
                    if(p[i].arrival_time < p[idx].arrival_time) {
                        mx = p[i].priority;
                        idx = i;
                    }
                }
            }
        }
        if(idx != -1) {
            p[idx].start_time = current_time;
            p[idx].completion_time = p[idx].start_time + p[idx].burst_time;
            p[idx].turnaround_time = p[idx].completion_time - p[idx].arrival_time;
            p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;
            p[idx].response_time = p[idx].start_time - p[idx].arrival_time;
            
            total_turnaround_time += p[idx].turnaround_time;
            total_waiting_time += p[idx].waiting_time;
            total_response_time += p[idx].response_time;
            total_idle_time += p[idx].start_time - prev;

            is_completed[idx] = 1;
            completed++;
            current_time = p[idx].completion_time;
            prev = current_time;
        }
        else {
            current_time++;
        }
        
    }

    int min_arrival_time = 10000000;
    int max_completion_time = -1;
    for(int i = 0; i < n; i++) {
        min_arrival_time = min(min_arrival_time,p[i].arrival_time);
        max_completion_time = max(max_completion_time,p[i].completion_time);
    }

    avg_turnaround_time = (float) total_turnaround_time / n;
    avg_waiting_time = (float) total_waiting_time / n;
    avg_response_time = (float) total_response_time / n;
    cpu_utilisation = ((max_completion_time - total_idle_time) / (float) max_completion_time )*100;
    throughput = float(n) / (max_completion_time - min_arrival_time);

    cout<<endl<<endl;

    cout<<"#P\t"<<"AT\t"<<"BT\t"<<"PRI\t"<<"ST\t"<<"CT\t"<<"TAT\t"<<"WT\t"<<"RT\t"<<"\n"<<endl;

    for(int i = 0; i < n; i++) {
        cout<<p[i].pid<<"\t"<<p[i].arrival_time<<"\t"<<p[i].burst_time<<"\t"<<p[i].priority<<"\t"<<p[i].start_time<<"\t"<<p[i].completion_time<<"\t"<<p[i].turnaround_time<<"\t"<<p[i].waiting_time<<"\t"<<p[i].response_time<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time = "<<avg_turnaround_time<<endl;
    cout<<"Average Waiting Time = "<<avg_waiting_time<<endl;
    cout<<"Average Response Time = "<<avg_response_time<<endl;
    cout<<"CPU Utilization = "<<cpu_utilisation<<"%"<<endl;
    cout<<"Throughput = "<<throughput<<" process/unit time"<<endl;
}
void Scheduling_alogorithm::Round_Robin()
{
	int n, bt[20], wt[20], tat[20], avwt=0, avtat=0, i;
    cout<<"Enter Number of Processes: ";
    cin>>n;
 
    cout<<"Enter Process Burst Time:"<<endl;
    for(i=0;i<n;i++)
	{
        cout<<"P["<<i+1<<"]: ";
        cin>>bt[i];
	}
	int quantum = 2; 
	int rem_bt[n]; 
	for (int i = 0 ; i < n ; i++) 
	rem_bt[i] = bt[i]; 

	int t = 0; 

 
	while (1) 
	{ 
		bool done = true; 

		
		for (int i = 0 ; i < n; i++) 
		{ 
			if (rem_bt[i] > 0) 
			{ 
				done = false; 
				if (rem_bt[i] > quantum) 
				{ 				
					t += quantum; 					
					rem_bt[i] -= quantum; 
				} 			 
				else
				{ 					
					t = t + rem_bt[i]; 				
					wt[i] = t - bt[i]; 
					rem_bt[i] = 0; 
				} 
			} 
		} 
		if (done == true) 
		break; 
	} 
	for (int i = 0; i < n ; i++) 
	tat[i] = bt[i] + wt[i]; 
	int total_wt = 0, total_tat = 0; 
	cout << "Processes "<< " Burst time "
		<< " Waiting time " << " Turn around time\n"; 
	for (int i=0; i<n; i++) 
	{ 
		total_wt = total_wt + wt[i]; 
		total_tat = total_tat + tat[i]; 
		cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
			<< wt[i] <<"\t\t " << tat[i] <<endl; 
	} 
	cout << "Average waiting time = "
		<< (float)total_wt / (float)n; 
	cout << "\nAverage turn around time = "
		<< (float)total_tat / (float)n;
}
int main()
{
	int choice,temp;
	do
	{
		cout<<"1.FCFS\n2.SJF\n3.Priority\n4.Round Robin\n"<<endl;
		cout<<"Enter your Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				Scheduling_alogorithm s1;
				s1.FCFS();
				break;
			case 2:
				Scheduling_alogorithm s2;
				s2.SJF();
				break;
			case 3:
				Scheduling_alogorithm s3;
				s3.Priority();
				break;
			case 4:
				Scheduling_alogorithm s4;
				s4.Round_Robin();
				break;
			default:
				cout<<"invalid choice";
				break;
		}
		cout<<"do you want to continue(0/1)";
		cin>>temp;
	}while(temp==0);

	return 0;
}
