using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace WinForm
{
    public partial class WinForm : Form
    {
        public WinForm()
        {
            InitializeComponent();
        }

        [DllImport("cplusplus.dll", CharSet = CharSet.Auto, CallingConvention = CallingConvention.Cdecl)]
        private static extern int TestAdd(int a, int b);

        private void WinForm_Load(object sender, EventArgs e)
        {
            int nResult = TestAdd(5, 7);
            MessageBox.Show("5加7的结果是：" + nResult.ToString());
        }
    }
}
