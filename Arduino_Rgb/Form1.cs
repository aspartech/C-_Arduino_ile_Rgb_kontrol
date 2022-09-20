using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO.Ports;


namespace Arduino_Rgb
{
    public partial class Form1 : Form
    {
        String[] portlistesi;
        bool durum = false;
        public Form1()
        {
            InitializeComponent();
        }
        void portlistele()
        {
            comboBox1.Items.Clear();
            portlistesi = SerialPort.GetPortNames();

            foreach (string portadi in portlistesi)
            {
                comboBox1.Items.Add(portadi);
                if (portlistesi[0] != null)
                {
                    comboBox1.SelectedItem = portlistesi[0];
                }
            }

        }

        

       
        private void Form1_Load(object sender, EventArgs e)
        {
            groupBox2.Enabled = false;
            portlistele();
        }
       

        private void button19_Click(object sender, EventArgs e)
        {
            portlistele();
        }

        private void button18_Click(object sender, EventArgs e)
        {
            if (durum == false)
            {
                serialPort1.PortName = comboBox1.GetItemText(comboBox1.SelectedItem);
                serialPort1.BaudRate = 9600;
                serialPort1.Open();
                comboBox1.Enabled = false;
                button19.Enabled = false;
                durum = true;
                button18.Text = "Bağlantıyı Kes";
                groupBox2.Enabled = true;

            }
            else
            {
                serialPort1.Close();
                durum = false;
                button18.Text = "Bağlan";
                comboBox1.Enabled = true;
                button19.Enabled = true;
                groupBox2.Enabled = false;

            }
        }
        

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        
        private void groupBox2_Enter(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            serialPort1.Write("1");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            serialPort1.Write("2");
        }

        private void button3_Click(object sender, EventArgs e)
        {
            serialPort1.Write("3");
        }

        private void button4_Click(object sender, EventArgs e)
        {
            serialPort1.Write("4");
        }

        private void button7_Click(object sender, EventArgs e)
        {
            serialPort1.Write("5");
        }

        private void button8_Click(object sender, EventArgs e)
        {
            serialPort1.Write("6");
        }

        private void button9_Click(object sender, EventArgs e)
        {
            serialPort1.Write("7");
        }

        private void button10_Click(object sender, EventArgs e)
        {
            serialPort1.Write("8");
        }

        private void button11_Click(object sender, EventArgs e)
        {
            serialPort1.Write("9");
        }

        private void button6_Click(object sender, EventArgs e)
        {
            serialPort1.Write("0");
        }

        private void button12_Click(object sender, EventArgs e)
        {
            serialPort1.Write("a");
        }

        private void button13_Click(object sender, EventArgs e)
        {
            serialPort1.Write("b");
        }

        private void button14_Click(object sender, EventArgs e)
        {
            serialPort1.Write("c");
        }

        private void button17_Click(object sender, EventArgs e)
        {
            serialPort1.Write("d");
        }

        private void button5_Click(object sender, EventArgs e)
        {
            serialPort1.Write("e");
        }
        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (serialPort1.IsOpen == true)
            {
                serialPort1.Close();
            }
        }
    }
}
