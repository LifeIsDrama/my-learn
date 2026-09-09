using Godot;
using System;

// 1. 继承自Sprite2D
// 2. this表示的是当前节点
// 3. 生命周期方法
public partial class g07_lifecycle : Sprite2D
{

	double timer = 5;

	// a.加入到节点树时调用
	public override void _EnterTree()
	{
		//
		base._EnterTree();
		// 输出
		GD.Print("entert tree");

	}

	// 节点树全部加载完成
	// b. 倒序调用
	public override void _Ready()
	{
		// 输出
		GD.Print("ready");
	}

	// 帧
	// delta - 帧的间隔时间
	public override void _Process(double delta)
	{
		// 游戏逻辑
		timer = timer - delta;
		if(timer <= 0) {
			timer = 100;
			// 销毁节点
			this.QueueFree();
		}

	}


	// 每次物理系统计算，会调用一次
	public override void _PhysicsProcess(double delta)
	{
		base._PhysicsProcess(delta);
	}

	// 节点离开节点树，销毁节点
	public override void _ExitTree()
	{
		base._ExitTree();

		GD.Print("exit tree");
	}


}
