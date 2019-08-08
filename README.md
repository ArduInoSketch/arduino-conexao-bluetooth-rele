# Conexão Bluetooth + Relé 5v arduino
Nesse projeto vamos utilizar um módulo bluetooth HC-05 em modo mestre (master), que irá executar um reler de 5v conectado à  uma ventoinha que quando é acionada acende a led verde, e quando desligada a led vermelha é acesa. Demostração do projeto no blog [ardu.ino.sketch](https://www.instagram.com/ardu.ino.sketch/?utm_source=ig_profile_share&igshid=q0plxzc5k6m4) 
# Bluetooth HC-05
O módulo Bluetooth HC-05 pode trabalhar tanto em modo mestre (faz e aceita pareamento com outros dispositivos) como modo escravo (apenas aceita pareamento).
Importante observar que a  **tensão de comunicação nos módulos é de 3.3 V**, ou seja, apesar de a alimentação ser 5V, os pinos RX e TX utilizam sinais de 3.3V para se comunicar. Desta forma, é necessário utilizarmos divisor de tensão para obter 3.3 V a partir da saída de 5V do TX do Arduino.
Os pinos **RX** e **TX** são os canais de comunicação do módulo. O RX do módulo deve ser ligado ao TX do arduino por meio do divisor de tensão. O TX do módulo pode ser ligado direto ao RX do Arduino.
O pino +5V que é o pino de alimentação e o **GND** é a referência de alimentação, que deve ser a mesma do Arduino. O pino **EN** é utilizado para habilitar o modo de comandos AT do módulo bluetooth.
Aplicativo para uso do modulo [Bluetooth SPP](https://play.google.com/store/apps/details?id=com.electronica.android.bluetoothspp)
# Relé 5v arduino
O Módulo Relé é ideal para acionar uma lâmpada ou outra carga que exija até no máximo 10A contínuos utilizando o Arduino ou qualquer outro microcontrolador.  
  
Ele funciona exatamente como uma chave (interruptor). No borne cinza há 3 conexões: **NA (Normalmente Aberto)**, **C (Comum)** e **NF (Normalmente Fechado)**.  
Ou seja, quando o Módulo Relé estiver "desligado", C estará conectado à NF. Quando estiver ligado, C estará conectado à NA.