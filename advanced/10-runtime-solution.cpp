We are reading n from the user, and n times the repeating body of iterate from one to i and breaking line

Runtime analysis example 1
int main(){
  int n, i, j;
  cout<<"Please enter n: "<<endl;
  cin>>n;
  
  for(i=1; i<=n; i++){    //n*n
    for(j=1; j<=n; j++)   //n
      ccout<<'*';
    cout<<endl;
    
    return 0 ;
  }
  
T(n) = theta(n)
  ****
  ****
  ****
  ****  //same amount of *, n*n
  
Runtime analysis example 2
int main(){
  int n, i, j;
  cout<<"Please enter n: "<<endl;
  cin>>n;
  
  for(i=1; i<=n; i++){
    for(j=1; j<=i; j++)
      ccout<<'*';
    cout<<endl;
    
    return 0 ;
  }

 T(n) = 1+2+3+..+n = (n(n+1))/2 = (1/2)*(n^2)+(1/2)*n = theta(n^2)
 T(n) = theta(n^2)
 *
 **
 ***
 ****  //varies from iteration i, need to know the sum
   
