using System;
using System.Collections.Generic;
using System.Linq;


namespace Animalclinic
{
    class Cat
    {
        public string name;
        public string color;
        public int age;
     

    }
    class Program
    {
        public static int UsedSpace { get; private set; }
        public static int FreeSpace { get; private set; }

        static void Main(string[] args)
        {
            
        Console.WriteLine
                ($"Въведете информация за котката като започнете с Име, Цвят,Възраст. За раделител ползвате интервал.  ");
            
            
            
            List<string> Catinfo = Console.ReadLine().Split(' ').ToList();            
            List<Cat> AnimalClinic = new List<Cat>();
            FreeSpace = 9;
            UsedSpace++;
            FreeSpace--;
            Console.Clear();
            Console.WriteLine($"Свободните места са:{FreeSpace}. Ако желаете иформация за котките напишете: \"Info\"");
            while (Catinfo[0] !="Info"||FreeSpace>9)
                                      
            {
                
                Console.WriteLine($"Въведете информация за котката като започнете с Име, Цвят,Възраст. За раделите ползвате интервал.");
                
                Cat NastoqshotoCat = new Cat();
                NastoqshotoCat.name = Catinfo[0];
                
                NastoqshotoCat.color = Catinfo[1];
                NastoqshotoCat.age = int.Parse(Catinfo[2]);
                AnimalClinic.Add(NastoqshotoCat);  //добавя котка към клиниката 
                
                Catinfo = Console.ReadLine().Split(' ').ToList();
                Console.Clear();
                UsedSpace++;
                FreeSpace--;
                Console.WriteLine($"Свободните места са:{FreeSpace}.  " +
                    $" Ако желаете иформация за котките напишете: \"Info\"");

                if (UsedSpace >=9)
                {
                   
                    Console.WriteLine("Не разполагате с повече място !!!");
                }

               if (FreeSpace==0)
                {
                    Catinfo[0] = "Info";
                    Console.Clear();
                    Console.WriteLine("Ето информация за вашите животни!!!");
                }

                 
            }


            for (int i = 0; i < AnimalClinic.Count; ++i)// обхождаме целия списък и го принтираме 
            {
                Console.WriteLine($"Списък на котките ");
                Console.WriteLine($"Името на котката е: {AnimalClinic[i].name}." +
                    $" Цвета на котката е : {AnimalClinic[i].color}. Възрастта и е : {AnimalClinic[i].age}. ");

            }





        }
    }
}
