using System;
using System.Collections;

namespace stack
{
    class Program
    {
        static void Main(string[] args)
        {
            var myStack = new Stack();
            myStack.Push(4);
            myStack.Push("second");
            myStack.Push(9.8);
            myStack.Push('h');
            myStack.Push(null);
            myStack.Push("sixth");
            myStack.Push("the last element");

            Console.WriteLine("im poping");
            var test = myStack.Pop();

            Console.WriteLine(test);

            Console.WriteLine("im pushing");
            foreach (var element in myStack)
            {
                Console.WriteLine(element);
            }
        }
    }
}
