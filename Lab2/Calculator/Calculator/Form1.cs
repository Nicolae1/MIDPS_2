using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        float val = 0;
        String oper = "";
        bool oper_pres = false;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button17_Click(object sender, EventArgs e)
        {

            val = float.Parse(textBox.Text);

            val = val - 2 * val;

            textBox.Text = (val).ToString();
        }

       
        private void button_Click(object sender, EventArgs e)
        {
            if ((textBox.Text == "0") || (oper_pres)) textBox.Clear();
            oper_pres = false;
            Button b = (Button)sender;
            textBox.Text = textBox.Text + b.Text;
        }

        private void button20_Click(object sender, EventArgs e)
        {
            textBox.Text = "0";
        }

        private void operator_click(object sender, EventArgs e)
        {
            Button b = (Button)sender;
            oper = b.Text;
            val = float.Parse(textBox.Text);
            oper_pres = true;
            equ.Text = val + " " + oper;

        }

        private void button18_Click(object sender, EventArgs e)
        {
            oper_pres = true;
            equ.Text = "";
            switch (oper)
            {
                case "+":
                    textBox.Text = (val + float.Parse(textBox.Text)).ToString();
                    break;

                case "-":
                    textBox.Text = (val - float.Parse(textBox.Text)).ToString();
                    break;

                case "*":
                    textBox.Text = (val * float.Parse(textBox.Text)).ToString();
                    break;

                case "^":
                    float x = val;
                    for (int i = 0; i < int.Parse(textBox.Text) - 1; i++) { val = val * x; }
                    textBox.Text = (val).ToString();
                    break;

                case "%":
                    textBox.Text = (val / float.Parse(textBox.Text)).ToString();
                    break;

                case "/":
                    textBox.Text = (val / float.Parse(textBox.Text)).ToString();
                    break;

                default:
                    break;

            }//switch

        }

        private void button16_Click(object sender, EventArgs e)
        {
            textBox.Text = "0";
            val = 0;
            equ.Text = "";
        }

        private void buttonp_Click(object sender, EventArgs e)
        {
            if (oper_pres) textBox.Clear();
            oper_pres = false;

            textBox.Text = textBox.Text + ",";
        }

        private void operatorr_click(object sender, EventArgs e)
        {
            val = float.Parse(textBox.Text);
            Double z = val;
            z = Math.Sqrt(z);
            textBox.Text = (z).ToString();
            oper_pres = true;
            equ.Text = "sqrt(" + val + ")";
        }
    }
}
