class HelloWorld
{
	static void hello(string[] args)
	{
		// 设置控制台名称
		Console.Title = "Hello World";
		// 输出
		Console.WriteLine("Hello World");

		// 读取，等待输入
		Console.WriteLine("请输入你的姓名");
		string input = Console.ReadLine();
		Console.WriteLine(input);


		// 
		Console.ReadLine();
	}
}