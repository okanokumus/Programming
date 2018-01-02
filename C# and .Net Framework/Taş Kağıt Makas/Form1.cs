using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace TaşKağıtMakas
{
    public partial class Form1 : Form
    {
        int indeks1, indeks2; // taş kağıt makasın indeksleri
        int ctr1, ctr2; // kullanıcı puanlarını tutar
        int sınır = 0; // oyunun kaçta biteceğini belirler

        public Form1()
        {
            InitializeComponent();
            textBox3.Text = "0";
            textBox4.Text = "0";
            textBox5.Text = "0";
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            label1.Text = "Oyun Kaçta Biter?";
            sınır = Convert.ToInt32(textBox5.Text);
        }
        // 1. oyuncu sonuç üretici
        private void button1_Click(object sender, EventArgs e)
        {
            Random rnd = new Random();
            string[] seçenekler = { "TAŞ", "KAĞIT", "MAKAS" };
            // random indeksler üretilir
            indeks1 = rnd.Next(0, seçenekler.Length);
            textBox1.Text = seçenekler[indeks1];
            
        }
        // 2. oyuncu sonuç üretici
        private void button2_Click(object sender, EventArgs e)
        {
            Random rnd = new Random();
            string[] seçenekler = { "TAŞ", "KAĞIT", "MAKAS" };
            // random indeksler üretilir
            indeks2 = rnd.Next(0, seçenekler.Length);
            textBox2.Text = seçenekler[indeks2];
            
        }
        // skorları sıfırla
        public void clear()
        {
            ctr1 = 0;
            ctr2 = 0;
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = Convert.ToString(ctr2);
            textBox4.Text = Convert.ToString(ctr1);
            textBox5.Text = "0";
        }
        // sıfırla butonu
        private void button4_Click(object sender, EventArgs e)
        {
            clear();
            textBox5.Text = "0";
        }
       
        // skorları hesaplar
        private void button5_Click(object sender, EventArgs e)
        {
            
            if (sınır == 0)
            {
                MessageBox.Show("Lütfen Oyunun Biteceği Sınırı Giriniz", "UYARI", MessageBoxButtons.OK);
            }
            else
            {
                okan();
                sonucHesap();
            }
            
        }
        public void sonucHesap()
        {
            DialogResult dialog;
            if (ctr1 == sınır || ctr2 == sınır)
            {
                dialog = MessageBox.Show("Devam etmek istiyor musunuz?\nÖnceki bilgiler sınırlanır!", "Sonuç", MessageBoxButtons.RetryCancel, MessageBoxIcon.Information);
                if (dialog == DialogResult.Retry)
                {
                    clear();
                }
                else
                {
                    if (ctr1 > ctr2)
                    {
                        MessageBox.Show("1. Oyuncu Kazandı!", "Bilgi", MessageBoxButtons.OK);
                        clear();
                    }

                    else
                    {
                        MessageBox.Show("2. Oyuncu Kazandı!", "Bilgi", MessageBoxButtons.OK);
                        clear();
                    }
                        
                }
            }
        }
        public void okan()
        {

            // taş taş -> 
            if ((indeks1 == 0 && indeks2 == 0) || (indeks1 == 1 && indeks2 == 1) || (indeks1 == 2 && indeks2 == 2))
            {
                ctr1 = ctr1 + 0;
                ctr2 = ctr2 + 0;
            }
            // taş kağıt -> kağıt
            if (indeks1 == 0 && indeks2 == 1)
                ctr2 = ctr2 + 1;
            // taş makas -> taş
            if (indeks1 == 0 && indeks2 == 2)
                ctr1 = ctr1 + 1;
            // kağıt taş -> kağıt
            if (indeks1 == 1 && indeks2 == 0)
                ctr1 = ctr1 + 1;
            // kağıt makas -> makas
            if (indeks1 == 1 && indeks2 == 2)
                ctr2 = ctr2 + 1;
            // makas taş -> taş
            if (indeks1 == 2 && indeks2 == 0)
                ctr2 = ctr2 + 1;
            // makas kağıt -> makas
            if (indeks1 == 2 && indeks2 == 1)
                ctr1 = ctr1 + 1;
            textBox4.Text = Convert.ToString(ctr1);
            textBox3.Text = Convert.ToString(ctr2);
            //textBox4.Text = Convert.ToString(sınır);
        }
        // sonuçları temizle
        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
        }
    }
}