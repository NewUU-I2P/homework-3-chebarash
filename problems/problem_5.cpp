float problemSolution5(float x, float y, char operation)
{
   switch (operation)
   {
   case '+':
      return x + y;
      break;
   case '-':
      return x - y;
      break;
   case '*':
      return x * y;
      break;
   case '/':
      return x / y;
      break;
   }
   return 0;
}
