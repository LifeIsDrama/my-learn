using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using C__learn.chapter1.data;

namespace C__learn.chapter1.view
{
	internal class View
	{

		public void show() {
			Model model = new Model();
			model.getData();
		}
	}
}
