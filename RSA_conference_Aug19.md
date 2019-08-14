5 Attack Techniques introduced in the seminar held in Singapore

# 1) Bypassing 2 Factor Authentication (2FA) or multiple factor
# VPN, BitLockers 
 

a. Man in the middle tools to bypass 2FA, https, ssl

Forward Proxy 
Load Balancing
Reverse Proxy

Muraena ~ A reverse proxy to help automate phishing campaigns with 2FA bypass
https://github.com/muraenateam

NecroBrowser ~ Dockerized headless Chrome browser instance used to make requests as the victim
https://conference.hitb.org/hitbsecconf2019ams/materials/


Muraena using NecroBrowser
Phishing email to attacker site with a valid SSL certificate with another TLD (top-level domain) etc .com or .net
Proxying, decrypting the traffic you are sending them, and fulfilling your request to the real site.
Get all the cookies communicates with NecroBrowser to spawn headless Chrome browsers within Docker containers.

NecroBrowser Docker Instances => Pretend they are you.


U2F Universal 2 Factor Challenge-Response Protocol
Phishing and MitM protection
Performs origin validation and a cryptographic challenge
hardware token required
https://developers.yubico.com/U2F/Protocol_details/Overview.html

Beware Wildcard SSL certificates.

As counter:
yubi key. hardwarebase encryption on it uses symmetric key cryptography

But the man in the middle can also prompt the user to input the hardwarebase encryption key inside too, isnt it?

# A large number of breaches are the result of unpatched systems

CIS Critical security controls
1. Inventory and Control of Hardware Assets
2. Inventory and Control of Software Assets

Example Equifax was compromised due to an unpatched web application compiled with a vulnerable Apache Struts2 framework
