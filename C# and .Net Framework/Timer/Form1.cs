using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.Threading;

namespace TimerShutDown
{
    public partial class Form1 : Form
    {
        System.Windows.Forms.Timer timer = new System.Windows.Forms.Timer();

        public int hour;
        public int min;
        public int sec;
        public int total_sec = 0 ;
        
        public Form1()
        {
            InitializeComponent();
            this.MaximizeBox = false;
            textBox1.Text = "0";
            textBox2.Text = "0";
            textBox3.Text = "0";

        }
        // START the timer
        private void button1_Click(object sender, EventArgs e)
        {
            hour = Convert.ToInt32(textBox1.Text);
            min = Convert.ToInt32(textBox2.Text);
            sec = Convert.ToInt32(textBox3.Text);
            total_sec = hour * 3600 + min * 60 + sec;
            if (hour!=0 || min != 0 || sec!=0)
            {
                timer.Interval = 1000; // Time Interval 1000 miliseconds = 1 sec
                timer.Tick += new EventHandler(timer1_Tick); //Raising Event on each tick
                timer.Start();
            }
            else
            {
                MessageBox.Show("Please Enter The Time for Timer to Action", "WARNING", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

        }
        // select from choices that may computer to do
        private void SelectChoice()
        {
            if (comboBox1.Text == "Normal Shut Down")
            {
                System.Diagnostics.Process.Start("shutdown", "/s /t 0");
            }
            else if (comboBox1.Text == "Fast Shut Down Forcibly")
            {
                System.Diagnostics.Process.Start("shutdown", "/s /f /t 0");
            }
            else if (comboBox1.Text == "Restart")
            {
                System.Diagnostics.Process.Start("shutdown", "/r /t 0");
            }
            else if (comboBox1.Text == "Sleep")
            {
                Application.SetSuspendState(PowerState.Suspend, true, true);
            }
            else if (comboBox1.Text == "Hibernate")
            {
                Application.SetSuspendState(PowerState.Hibernate, true, true);
            }
            else
            {
                MessageBox.Show("Unknown Action for Computer","WARNING",MessageBoxButtons.OK,MessageBoxIcon.Warning);
            }
        }
        private void timer1_Tick(object sender, EventArgs e)
        {
            if (total_sec > 0)
            {
                total_sec = total_sec - 1;
                hour = total_sec / 3600; // Left hours
                min = (total_sec - (hour * 3600)) / 60; //Left Minutes
                sec = total_sec - (hour * 3600) - (min * 60); //Left Seconds
                textBox1.Text = hour.ToString(); // Setting hour Text on each timer tick
                textBox2.Text = min.ToString(); // Setting minutes Text on each timer tick
                textBox3.Text = sec.ToString(); // Setting sec Text on each timer tick
            }
            else
            {
                timer.Stop();
                SelectChoice();
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            timer.Stop();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            timer.Stop();
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
            textBox1.Text = "0";
            textBox2.Text = "0";
            textBox3.Text = "0";
        }
    }
}
