using System;
using System.Collections.Generic;

namespace AnimalClinic
{
//    Да се състави програма реализираща обект „Котка“.                           ok
//    Да бъдат създадени следни полета: име, години, цвят и брой животи.          ok
//    Да се реализират следните методи :
//●	Промяна на брой животи. Първоначално броят да е 9. Могат само да бъдат намалявани. ок
//●	Възможност за въвеждане на години, име и цвят.     ок
//●	Даване пълни данни за котката.  ок


   
    class Cat    //Реализиран Обект котка.
    {
        public string name { get; set; }  //поле:име
        public string color { get; set; }//поле :звят
        public int age { get; set; }     //поле: години
        public const int CatLimit = 9;   //поле ;брой животни
        private static List<Cat> Cats = new List<Cat>(9);

        public Cat(string name, string color, int age)
        {
            this.name = name;
            this.color = color;
            this.age = age;
        }


        public static void CatAdd() //Метод ,който добавя котка. Променя броя на котки.
        {
            if (Cats.Count == CatLimit)   
            {
                Console.WriteLine("Не разполагате с повече място !!! Напишете 'exit' за изход от програмата.");
            }
            else  
            {
                Console.WriteLine
                    ("Въведете информация за котката като започнете с Име, Цвят, Възраст. \nЗа раделител ползвате интервал:");
                string[] catInfo = Console.ReadLine().Trim().Split(' '); // парсваме 3-те полета по разделител - интервал
                if (catInfo.Length != 3)// проверка за налични 3 полета, ако не принтим грешка
                {  
                    Console.WriteLine("Грешка! Въведете информация за котката като започнете с Име, Цвят, Възраст. \nЗа раделител ползвате интервал.");
                }
                Cat newCat = new Cat(catInfo[0], catInfo[1], int.Parse(catInfo[2])); 
                Cats.Add(newCat); // добавяме в списъка
                Console.WriteLine("Успешен запис.");
                Console.WriteLine("- - - - - - - - - - - - - - - - - - - - - - - - -");
            }
        }

        public static void Printinfo() // ●	Даване пълни данни за котката.
        {
            Console.WriteLine("Списък с котките:");
            if (Cats.Count == 0)
            {
                Console.WriteLine("  Празен."); // ако списъка е празен, покажи това и не прави нищо друго
            }
            else
            {
                int c = 0;
                foreach (Cat cat in Cats)
                {
                    Console.WriteLine($"{c}. Име: {cat.name}");
                    Console.WriteLine($"   Цвят: {cat.color}");
                    Console.WriteLine($"   Възраст: {cat.age}");
                   
                    c++;
                }
            }
        }

    }
       class Program
    {

       

        
        static int Main(string[] args)
        {
          
            Console.WriteLine("Изберете действие. Натиснете бутон '1'  или '2'. Напишете 'exit' за изход от програмата.");
            Console.WriteLine("1. Покажи всички котки.");
            Console.WriteLine("2. Добави нова котка.");

            String s = Console.ReadLine().Trim();
            Console.Clear();
            while (s != null)
            {
                if (s == "exit")  // Ако въведем конзолата  излизаме от програмата .
                {
                    break;
                }

                if (s == "1")  // Ако въведем 1 принтира всичко записано.
                {
                    Cat.Printinfo(); //викаме метода за принтиране.
                }
                else if (s == "2")  //  Ако въведем 2 .Въвеждаме  данни за котката.
                {
                    Cat.CatAdd();//викаме метода за  въвеждане на данни.
                    
                }
                Console.WriteLine("Изберете действие. Натиснете бутон '1'-покажи или '2'-въведи. Напишете 'exit' за изход от програмата.");

                s = Console.ReadLine().Trim();  
                Console.Clear();
            }

            return 0;
        }
    }
}
