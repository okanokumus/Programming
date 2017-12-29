using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


namespace NumberConversion
{
    public partial class Form1 : Form
    {
        long BinaryNumber = 0;
        long OctaNumber = 0;
        long DecimalNumber = 0;
        string HexNumber = "";
        long i = 1;
        long remainder = 0;
        string str_hex_remainder = "", str_binary_remainder = "", str_octa_remainder = "";
        public Form1()
        {
            InitializeComponent();
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            // Set the start position of the form to the center of the screen.
            this.StartPosition = FormStartPosition.CenterScreen;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            textBox1.Text = Convert.ToString(0);
            textBox2.Text = Convert.ToString(0);
            textBox3.Text = Convert.ToString(0);
            textBox4.Text = Convert.ToString(0);
        }
        // clear all texts
        private void button1_Click(object sender, EventArgs e)
        {
                button1.Text = "CLEAR";
                clear();
            }
        public void clear()
        {
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
            textBox4.Clear();
            textBox1.Text = Convert.ToString(0);
            textBox2.Text = Convert.ToString(0);
            textBox3.Text = Convert.ToString(0);
            textBox4.Text = Convert.ToString(0);
            str_binary_remainder = "";
            str_octa_remainder = "";
            str_hex_remainder = "";
            label3.Visible = false;
            label4.Visible = false;
            label6.Visible = false;
            label5.Visible = false;
        }
        
        // convert button
        private void button2_Click(object sender, EventArgs e)
        {           
            //HexNumber
            try
            {
                // only digit numbers can be accepted
                BinaryNumber = Convert.ToInt64(textBox1.Text);
                OctaNumber = Convert.ToInt64(textBox2.Text);
                DecimalNumber = Convert.ToInt64(textBox3.Text);
                // both alphebetic(A, B, C, D, E, F) and numeric numbers can be accepted
                HexNumber = textBox4.Text;
                // main loop for non zero value to convert
                if (BinaryNumber != 0 || OctaNumber != 0 || DecimalNumber != 0 || HexNumber != "0")
                {
                    // only BINARY conversion is requested
                    if (BinaryNumber != 0 && OctaNumber == 0 && DecimalNumber == 0 && HexNumber == "0")
                    {
                        binaryTOconvertor(BinaryNumber);
                        label3.Visible = true;
                    }
                    // only OCTA conversion is requested
                    if (BinaryNumber == 0 && OctaNumber != 0 && DecimalNumber == 0 && HexNumber == "0")
                    {
                        octaTOconvertor(OctaNumber);
                        label4.Visible = true;
                    }
                    // only DECIMAL conversion is requested
                    if (BinaryNumber == 0 && OctaNumber == 0 && DecimalNumber != 0 && HexNumber == "0")
                    {
                        decimalTOconvertor(DecimalNumber);
                        label6.Visible = true;
                    }
                    // only HEX conversion is requested
                    if (BinaryNumber == 0 && OctaNumber == 0 && DecimalNumber == 0 && HexNumber != "0")
                    {
                        hexTOconvertor(HexNumber);
                        label5.Visible = true;
                    }
                }
            }
            catch (Exception)
            {

                MessageBox.Show("Wrong Type of Input","ERROR",MessageBoxButtons.OK);
            }

        }
        // from BINARY number to other numbers
        void binaryTOconvertor(long x)
        {
            long  xbin=x;
            long xdecimal = 0;
            remainder = 0;
            i = 0;
            double j;
            // BINARY to DECIMAL
            while (xbin != 0)
            {
                remainder = xbin % 10;
                xbin = xbin / 10;
                // binary numbers only contain 0 and 1
                if (remainder == 0 || remainder == 1)
                {
                    j = Math.Pow(2,i);
                    i = i + 1;  
                    xdecimal = xdecimal + remainder * Convert.ToInt64(j);
                }
                else
                {
                    clear();
                    goto next;
                }
            }
            
            textBox3.Text = Convert.ToString(xdecimal);
            decimalTOconvertor(xdecimal);
            // DECIMAL TO OCTA
            textBox2.Text = Convert.ToString(str_octa_remainder);
            // DECIMAL TO HEX
            textBox4.Text = str_hex_remainder;
            next:
            //MessageBox.Show("Binary number contains only 0 and 1", "ERROR", MessageBoxButtons.OK);
            ;
        }
        // from OCTA number to other numbers
        void octaTOconvertor(long x)
        {
            long xocta = x;
            long xdecimal = 0;
            remainder = 0;
            i = 0;
            double j;
            // OCTAL to DECIMAL
            while (xocta != 0)
            {
                remainder = xocta % 10;
                xocta = xocta / 10;
                if (remainder >= 8)
                {
                    clear();
                    goto next;
                }
                j = Math.Pow(8, i);
                i = i + 1;
                xdecimal = xdecimal + remainder * Convert.ToInt64(j);
            }

            textBox3.Text = Convert.ToString(xdecimal);
            decimalTOconvertor(xdecimal);
            // DECIMAL TO OCTA
            textBox1.Text = Convert.ToString(str_binary_remainder);
            // OCTAL to OCTAL
            textBox2.Text = Convert.ToString(x);
            // DECIMAL TO HEX
            textBox4.Text = str_hex_remainder;
            next:
            ;
        }

        // from DECIMAL number to other numbers
        void decimalTOconvertor(long x)
        {
            long xbin = x, xocta = x, xhex = x;
            remainder=0;
            i = 1;
            // DECIMAL TO BINARY
            while (xbin != 0)
            {
                remainder = xbin % 2; // mode 2 of x
                xbin = xbin / 2;
                str_binary_remainder = Convert.ToString(remainder) + str_binary_remainder;
            }
            // DECIMAL TO OCTAL
            i = 1;
            remainder = 0;
            while (xocta != 0)
            {
                remainder = xocta % 8;  // mode 8 of x
                xocta = xocta / 8;
                str_octa_remainder = Convert.ToString(remainder) + str_octa_remainder;
            }
            // DECIMAL TO HEX
            remainder = 0;
            while (xhex != 0)
            {
                //str_remainder = str_remainder + str_remainder;
                remainder = xhex % 16;  // mode 16 of x
                if (remainder == 10)
                {
                    str_hex_remainder = "A" + str_hex_remainder;
                    //str_remainder = str_remainder + str_remainder;
                }
                if (remainder == 11)
                {
                    str_hex_remainder = "B" + str_hex_remainder;
                    //str_remainder = str_remainder + str_remainder;

                }
                if (remainder == 12)
                {
                    str_hex_remainder = "C" + str_hex_remainder;
                   // str_remainder = str_remainder + str_remainder;

                }
                if (remainder == 13)
                {
                    str_hex_remainder = "D" + str_hex_remainder;
                    //str_remainder = str_remainder + str_remainder;

                }
                if (remainder == 14)
                {
                    str_hex_remainder = "E" + str_hex_remainder;
                    // str_remainder = str_remainder + str_remainder;

                }
                if (remainder == 15)
                {
                    str_hex_remainder = "F" + str_hex_remainder;
                    //str_remainder = str_remainder + str_remainder;

                }
                if (remainder >= 0 && remainder < 10)
                {
                    str_hex_remainder = Convert.ToString(remainder) + str_hex_remainder;
                    //str_remainder = str_remainder + str_remainder;
                }
                xhex = xhex / 16;

            }
            // DECIMAL TO BINARY
            textBox1.Text = str_binary_remainder;
            // DECIMAL TO OCTA
            textBox2.Text = Convert.ToString(str_octa_remainder);
            // DECIMAL TO HEX
            textBox4.Text = str_hex_remainder;
        }
        // from HEX number to other numbers
        void hexTOconvertor(string x)
        {
            string str_remainder;
            int input_length = x.Length, i = 0;
            long xdecimal = 0;
            while (input_length != 0)
            {
                str_remainder = Convert.ToString(x[input_length-1]);
                try
                {
                    remainder = Convert.ToInt64(str_remainder);
                }
                catch (Exception)
                {
                    if (str_remainder == "A" || str_remainder == "a")
                    {
                        remainder = 10;
                    }
                    else if (str_remainder == "B" || str_remainder == "b")
                    {
                        remainder = 11;
                    }
                    else if (str_remainder == "C" || str_remainder == "c")
                    {
                        remainder = 12;
                    }
                    else if (str_remainder == "D" || str_remainder == "d")
                    {
                        remainder = 13;
                    }
                    else if (str_remainder == "E" || str_remainder == "e")
                    {
                        remainder = 14;
                    }
                    else if (str_remainder == "F" || str_remainder == "f")
                    {
                        remainder = 15;
                    }
                    else
                    {
                        clear();
                        goto next;
                    }
                }
                
                input_length = input_length - 1;
                xdecimal = xdecimal + remainder * Convert.ToInt64(Math.Pow(16, i));
                i = i + 1;
            }
            // DECIMAL TO HEX
            textBox3.Text = Convert.ToString(xdecimal);
            decimalTOconvertor(xdecimal);
            // HEX TO BINARY
            textBox1.Text = Convert.ToString(str_binary_remainder);
            // HEX to OCTAL
            textBox2.Text = Convert.ToString(str_octa_remainder);
            // HEX TO HEX
            textBox4.Text = Convert.ToString(x);
            next:
            ;
        }
    }
}
