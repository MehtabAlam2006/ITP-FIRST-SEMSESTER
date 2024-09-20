/*8. Write a C++ program that displays a basic progress indicator using ‘\r’. The progress indicator should
move from left to right and use ‘\t’ or spaces to format the loading of the bar. The bar should gradually
fill up using symbols (like #) as the progress increases.
• The program should first print “Downloading…”
• Use `\r` to move the cursor to the beginning of the line.
• Then the following progress indicators should be printed*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Downloading....\r"<<"progress [##        ]   20% \n";
    cout<<"progress [####      ]   40% \n";
    cout<<"progress [######    ]   60% \n";
    cout<<"progress [########  ]   80% \n";
    cout<<"progress [##########]   100%\n";
    return 0;
}