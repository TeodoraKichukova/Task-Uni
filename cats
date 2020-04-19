using System;

namespace ConsoleApp1
{
    class cat
    {
        public int age { set; get; }
        public string name { set; get; }
        public string color { set; get; }

    }


    class Program
    {
        static void Main(string[] args)

        {
            int freespace = 9;  
            do
            {
                Console.WriteLine("Разполагате с {0} свободни места.", freespace); 

                if (freespace > 0)

                {

                    Console.WriteLine("Въведете информация за ново животно. ");
                    freespace--;
                }
                cat cat1 = new cat();  
                Console.WriteLine("Моля въведете име на котката: ");
                cat1.name = Console.ReadLine();  
                Console.WriteLine("Моля въведете възраст на котката:  ");
                cat1.age = int.Parse(Console.ReadLine()); 
                Console.WriteLine("Моля въведете цвят на котката");
                cat1.color = Console.ReadLine(); 
                Console.WriteLine("Разполагате с {0} свободни места.", freespace); 
                Console.Clear(); 
                Console.WriteLine("Името на котката е: {0} , Тя е на {1} години  и е {2} на цвят ", cat1.name, cat1.age, cat1.color);
            } while (freespace != 0); 
            Console.WriteLine("Нямате налични места!!!");


        }
    }
}
