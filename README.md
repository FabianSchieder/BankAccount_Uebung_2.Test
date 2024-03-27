### Erstelle eine Klasse BankAccount ###
  
- Füge Eigenschaften hinzu wie:
  - accountHolder (Kontoinhaber)
  - accountNumber (Kontonummer)
  - accountingEntries (Buchungen in einem vector)
    
- Füge Methoden hinzu wie:
  - deposit (Einzahlung) - speichert den gewünschten Betrag als Buchung im BankAccount
  - withdraw (Abheben) - speichert den gewünschten negativen Betrag als Buchung im BankAccount
  - transfer (Überweisen) - kann einen Betrag durch Angabe eines Empfängerkonto vom aktuellen Konto abbuchen und aufs angegeben Konto aufbuchen
  - calcBalance() - berechne den aktuellen Kontostand unter Berücksichtigung aller Buchungen
  - get/set-Methoden für relevante Eigenschaften
