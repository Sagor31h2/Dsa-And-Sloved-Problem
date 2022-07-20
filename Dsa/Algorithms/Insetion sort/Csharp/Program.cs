using System;

namespace Csharp
{
    internal class Program
    {
         static void Sort(int[] arr)
        {
            var length=arr.Length;
            for(int i=1; i<length; i++)
            {
                var value=arr[i];
                var hole = i;
                while(hole > 0&& arr[hole - 1] > value)
                {
                     arr[hole]=arr[hole - 1];
                    hole--;
                }
                arr[hole] = value;

            }
        }

        static void printArray(int[] arr)
        {
            int n = arr.Length;
            for (int i = 0; i < n; ++i)
                Console.Write(arr[i] + " ");

            Console.Write("\n");
        }
        static void Main(string[] args)
        {
            int[] arr = { 12, 11, 13, 5, 6 };
           Sort(arr);
            printArray(arr);


        }
    }
}
