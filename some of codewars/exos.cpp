bool XO(const std::string& s)
{  int x=0,o=0;
  for(int i=0;i<s.size();i++)
  {
  if(s[i]=='x' || s[i]=='X') {
  x++;
}
  else if(s[i]=='o' || s[i] == 'O' ){
   o++;
}
else{
  continue;
}
  }
 ///  cout<<x<<o;
 if(x==o) return true;
  return false;
}
