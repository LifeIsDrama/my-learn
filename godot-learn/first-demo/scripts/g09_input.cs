using Godot;
using System;

public partial class g09_input : Node2D
{
	// Called when the node enters the scene tree for the first time.
	public override void _Ready()
	{
		//鼠标设置： 显示、隐藏、限制在游戏窗口

		// 1. 隐藏鼠标
		// Hidden - 隐藏
		// Visible - 正常显示(默认)
		// Confined - 限制，鼠标出不去(F8停止,或者alt+tab)
		// ConfiendHidden - 限制隐藏
		bool b = false;
		if (b)
		{
			Input.MouseMode = Input.MouseModeEnum.ConfinedHidden;
		}
	}

	// 
	public override void _Process(double delta)
	{
		// 2. 监听按键
		if (Input.IsKeyPressed(Key.B)) {
			GD.Print("pressed b");
		}
	}


	public override void _Input(InputEvent @event)
	{
		base._Input(@event);
		//  InputEvent是不是键盘事件
		// InputEventKey 表示 键盘事件
		// InputEvent 表示输入输出事件
		if(@event is InputEventKey) {
			// 转化成键盘事件
			var keyEvent  =  @event as InputEventKey;
			if (keyEvent.Keycode == Key.V)
			{
				// 判度按键是否是持续按压
				if (keyEvent.IsEcho())
				{
					GD.Print("chi xu an ya");
				} 
				// 按下瞬间
				if(keyEvent.IsPressed()) {
					GD.Print("pressed");
				}
				// 抬起瞬间
				if (keyEvent.IsReleased())
				{
					GD.Print("released");
				}
				GD.Print("===========");
			}
		}

		// 鼠标输入事件
		if (@event is InputEventMouse)
		{
			var mouseEvent = @event as InputEventMouse;
			// 鼠标输入包括鼠标移动、鼠标按下
			if (mouseEvent.IsPressed())
			{
				// 输出位置
				GD.Print(mouseEvent.Position);
				GD.Print(mouseEvent.Position.X, mouseEvent.Position.Y);

				// 输出按键
				GD.Print(mouseEvent.ButtonMask);
			}
		}

	}
}
