double factorial(double n)
{
  int i;
  double fac; 

  fac=1.0;
   
  for(i=1;i<=n;i++)
    {
     fac=fac*i;   
    }
 return fac;
}

double seno(double x, int n)
{
  int i;
  double sin;
  
  sin=0.0;
  for(i=0;i<=n;i++)
    {
      sin=sin+(pow(-1,i)*pow(x,2*i+1)/(factorial(2*i+1)));
    }
    return sin;
}

double coseno(double x, int n)
{
  int i;
  double cos;
  
  cos = 0.0;
  for(i=0;i<=n;i++)
    {
      cos=cos+(pow(-1,i)*pow(x,2*i)/(factorial(2*i)));
    }
    return cos;
}