# BRG-27-Labs
# Assignment

## Lab 1A
Obtaining Linux on your PC – Install Ubuntu using VMware

Downloading of ubuntu ISO file

Creating a new virtual machine in VMware

Configuration of VM settings and network issues (NAT instead of bridged)

Understanding Basic commands for Linux 

pwd (Print Working Directory) tells me which directory I am located (/home/user)

I created a new directory called Test1 using mkdir (mkdir Test1)

Next is did was ls which gives the listings of the current directory

After creating Test1 I used ls to check if it was created and yes it was there

Next command I used was cd which allows us to enter to that directory. I wanted to create a text file in Test1, so first I had to enter to Test1 directory and create a .txt file and use ls to check the contents of Test1 to see if a .txt file was created.

cd Test1 (going into Test1 directory)

touch myfile.txt (creating the text file in Test1 directory)

ls (Checking if I see myfile.txt in Test1 directory)

Now I wanted to edit my text file give it some words so I used nano myfile.txt and edited the file and enter some texts "Hello World!)

Saved the file

ls again to check the if txt file is still there in Test1

Next I did was copy and paste the txt file to Documents directory using cp

cd .. (is to exit the current directory and go backwards)

copy the txt file and move to Documents but first I had to tell how to move it so I used the pwd earlier on to show that I was in /home/user

Now we use cp myfile.txt /home/user/Documents

After that I used ls to check and everything was there

Used rm (to remove the txt file afterwards)

Used rmdir (to remove the Test1 directory)

Once again ls to double confirm everything also manually check the file tab.


## Lab 1B
📦 Deliverables 

# 

Deliverable 

Description 

✅ 1 

Apache Web Server Installed 

Screenshot or terminal output of sudo apt install apache2 and Apache running at http://127.0.0.1. 

✅ 2 

Modified index.html Page 

Edited /var/www/html/index.html and screenshot showing personalized content when visited via browser or neighbor’s IP. 

✅ 3 

IP Address Identified and Shared 

Output of ip a showing local and loopback IPs. Partner's IP exchanged and used to access each other's webserver. 

✅ 4 

Nmap Port Scan Results 

Output screenshot of nmap [partner’s IP] showing open ports before and after Apache is removed. 

✅ 5 

Firewall (UFW) Status and Rules 

Outputs of:  
• sudo ufw status verbose before and after enabling  
• Port 80 allowed and verified via partner’s Nmap scan 

✅ 6 

SSH Enabled and Tested 

Output of successful login via ssh to partner’s machine using both default and explicitly declared usernames. 

✅ 7 

New User Created and Verified 

Command and confirmation of user added via sudo adduser, with /etc/passwd showing new entry. 

✅ 8 

Compression and Decompression Tested 

Screenshots of:  
• tar cf, bzip2, bunzip2, and tar -xvf  
• Output of ls -la showing archive size comparison 

✅ 9 

SCP File Transfers Between Machines 

Output or screenshots showing successful use of scp to copy:  
• A file  
• A directory (bonus) 

✅ 10 

/etc/hosts File Modified 

Screenshot showing added custom hostname (e.g., 8.8.8.8 GoogleEpicDNS) and successful ping GoogleEpicDNS. 

✅ 11 

nslookup and whois Commands Run 

Output of:  
• nslookup google.com  
• whois google.com (after installing whois) 

✅ 12 

Public vs Private IP Comparison 

Screenshot of ip a and result from https://whatismyipaddress.com, with short explanation. 

✅ 13 

Hardware Info Extracted 

Output from:  
• lsusb  
• lspci  
• less /proc/cpuinfo with CPU core count identified. 

✅ 14 

Redirected Output Tested 

Output file from: lsusb > output_of_lsusb, viewed using cat and less. File size shown using ls -la. 

## Lab 2
📦 Deliverables 

# 

Deliverable 

Description 

✅ 1 

EC2 Instance Launched 

Screenshot of the EC2 dashboard showing the instance running (state = running), with Ubuntu 20.04, free tier eligible, and security group configured. 

✅ 2 

Security Group Configured 

Screenshot showing inbound rules:  
• Port 22 (SSH)  
• Port 80 (HTTP) opened 

✅ 3 

SSH Access Successful 

Terminal output showing successful SSH login using the .pem key. Example: ssh -i "yourkey.pem" ubuntu@<public_dns> 

✅ 4 

Apache Installed and Tested 

Output of sudo apt install apache2 and browser screenshot of the Apache welcome page (http://<public_ip>) 

✅ 5 

Custom index.html Edited 

Edited /var/www/html/index.html with personalized content. Screenshot of the file content (nano or gedit) and browser output 

✅ 6 

External File Downloaded with wget 

Screenshot of successful download using wget, e.g., wget http://...EECS-2009-28.pdf, saved in /home/ubuntu 

✅ 7 

File Copied to Web Root 

Screenshot of sudo cp command copying a file to /var/www/html, and ls -l output showing it there with correct permissions 

✅ 8 

PDF File Accessible via Browser 

Screenshot of downloading or viewing http://<public_ip>/EECS-2009-28.pdf from browser or mobile 

✅ 9 

Link Inserted in HTML Page 

index.html edited with a hyperlink to the PDF file. Screenshot of HTML snippet: <a href="EECS-2009-28.pdf">Click here</a> 

and visible link in browser 

✅ 10 

Budget Monitoring Enabled 

Screenshot of AWS Billing Dashboard with budget alert setup or cost summary 

✅ 11 

Instance Terminated (Optional) 

Screenshot of EC2 instance terminated or stopped, showing awareness of cost management 

 

🧪 Challenge Deliverables (Optional but recommended) 

# 

Challenge 

Description 

✅ C1 

Ping International Servers (I used DNS Checker)

Output of ping or mtr to servers in the US, Europe, Asia. Add latency comparison. 

✅ C2 

Upload Local File via scp 

Use scp with .pem file to upload from local to EC2 VM. Screenshot of command and successful upload. 

✅ C3 

Custom HTML Page Created (aravin.site)

Create a new index.html with multiple hyperlinks, headings, and styled content using basic HTML. Screenshot of code and browser output. 


Basic Bash Script Created and Run 

Evidence of: 
• hello_world.sh script created with #!/bin/bash and echo line 
• chmod 777 hello_world.sh 
• Output of script execution showing custom message (Welcome to Bash scripting lab!)



## Lab 3

Domain Name Registered 

A registered domain from Namecheap, GoDaddy, Route 53, or similar (namecheap)

A Record Created 

DNS A record pointing your domain to your VM's public IP 

Apache Installed 

Apache2 running and accessible on port 80 

Public IP to Domain Mapping Verified 

Test using nslookup, dig, and browser to confirm DNS is working 

Screenshot: Apache Welcome Page via Domain 

Open http://yourdomain.com and capture the Apache welcome page 

Screenshot: DNS Test Output 

Output of nslookup yourdomain.com or dig 

<img width="350" height="335" alt="image" src="https://github.com/user-attachments/assets/d0c61fc6-a302-4b0c-b5c1-c2b2862158a7" />


## Lab 4
 WORDPRESS 

Type: CMS / Blog / Website Platform 
Purpose: User-friendly content management system used by >40% of websites worldwide 

🔧 Installation Steps 

Update packages 

sudo apt update && sudo apt upgrade -y 

Install LEMP stack 

sudo apt install nginx mariadb-server php php-mysql php-fpm php-cli unzip curl -y 

Download WordPress 

cd /tmp 

curl -O https://wordpress.org/latest.tar.gz 

tar -xvzf latest.tar.gz 

sudo mv wordpress /var/www/html/ 

Database setup 

sudo mysql 

CREATE DATABASE wordpress; 

CREATE USER 'wpuser'@'localhost' IDENTIFIED BY 'StrongPassword!'; 

GRANT ALL PRIVILEGES ON wordpress.* TO 'wpuser'@'localhost'; 

FLUSH PRIVILEGES; 

EXIT; 

Configure Nginx virtual host 

sudo nano /etc/nginx/sites-available/wordpress 

Example block: 

server { 

  listen 80; 

  server_name example.com; 

  root /var/www/html/wordpress; 

  index index.php; 

  location / { 

    try_files $uri $uri/ /index.php?$args; 

  } 

  location ~ \.php$ { 

    include snippets/fastcgi-php.conf; 

    fastcgi_pass unix:/var/run/php/php-fpm.sock; 

  } 

} 

Enable and restart 

sudo ln -s /etc/nginx/sites-available/wordpress /etc/nginx/sites-enabled/ 

sudo systemctl restart nginx 

🔒 Security 

Use Certbot for HTTPS: 
sudo apt install certbot python3-certbot-nginx -y 

Secure DB with mysql_secure_installation 

Regularly update plugins/themes 

