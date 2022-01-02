// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/#
string encode(string src){     
  //Your code here
  string s = "";
  int n = src.length();
  char curr = src[0];
  int c = 1;
  for(int i = 1; i< n; i++){
      if(src[i] == curr){
          c++;
      }
      else{
          s+=curr;
          s+=to_string(c);
          curr = src[i];
          c = 1;
      }
  }
  s+=curr;
  s+=to_string(c);
  return s;
}
