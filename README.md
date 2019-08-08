# Conex�o Bluetooth + Rel� 5v arduino
Nesse projeto vamos utilizar um m�dulo bluetooth HC-05 em modo mestre (master), que ir� executar um reler de 5v conectado �  uma ventoinha que quando � acionada acende a led verde, e quando desligada a led vermelha � acesa. Demostra��o do projeto no blog [ardu.ino.sketch](https://www.instagram.com/ardu.ino.sketch/?utm_source=ig_profile_share&igshid=q0plxzc5k6m4) 
# Bluetooth HC-05
O m�dulo Bluetooth HC-05 pode trabalhar tanto em modo mestre (faz e aceita pareamento com outros dispositivos) como modo escravo (apenas aceita pareamento).
Importante observar que a  **tens�o de comunica��o nos m�dulos � de 3.3 V**, ou seja, apesar de a alimenta��o ser 5V, os pinos RX e TX utilizam sinais de 3.3V para se comunicar. Desta forma, � necess�rio utilizarmos divisor de tens�o para obter 3.3 V a partir da sa�da de 5V do TX do Arduino.
Os pinos **RX** e **TX** s�o os canais de comunica��o do m�dulo. O RX do m�dulo deve ser ligado ao TX do arduino por meio do divisor de tens�o. O TX do m�dulo pode ser ligado direto ao RX do Arduino.
O pino +5V que � o pino de alimenta��o e o **GND** � a refer�ncia de alimenta��o, que deve ser a mesma do Arduino. O pino **EN** � utilizado para habilitar o modo de comandos AT do m�dulo bluetooth.
Aplicativo para uso do modulo [Bluetooth SPP](https://play.google.com/store/apps/details?id=com.electronica.android.bluetoothspp)
# Rel� 5v arduino
O M�dulo Rel� � ideal para acionar uma l�mpada ou outra carga que exija at� no m�ximo 10A cont�nuos utilizando o Arduino ou qualquer outro microcontrolador.  
  
Ele funciona exatamente como uma chave (interruptor). No borne cinza h� 3 conex�es: **NA (Normalmente Aberto)**, **C (Comum)** e **NF (Normalmente Fechado)**.  
Ou seja, quando o M�dulo Rel� estiver "desligado", C estar� conectado � NF. Quando estiver ligado, C estar� conectado � NA.