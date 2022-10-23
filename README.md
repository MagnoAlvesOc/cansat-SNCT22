![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)

# 📡CanSat - [SNCT22](https://www.ma.gov.br/noticias/19-semana-nacional-de-ciencia-e-tecnologia-tera-inicio-na-terca-feira-18-em-sao-luis)

Neste trabalho, propomos o desenvolvimento e programação de um nano
satélite (cansat) para **monitoramento climático em pequenas altitudes.**
Para o computador de bordo do cansat foi utilizado a placa de desenvolvimento
NodeMCU, sua escolha se deve a três principais características;
baixo custo, alta velocidade de processamento e tamanho reduzido, foram acoplados
a placa três sensores: *temperatura/umidade (dht11), pressão atmosférica (bmp280)
e um acelerômetro/giroscópio 3 eixos 6 (mpu-6050),* sendo que para a programação
utilizou-se a comunicação serial para a interface placa – sensor – computador.
A estação terrestre para recebimento dos dados (computador) foi desenvolvida
para receber todos os dados de telemetria (pressão, altura e temperatura).
O sistema de pouso é auxiliado por um paraquedas, feito de material reciclável,
adotando sacola plástica. A sacola plástica possui como principais característica
baixo peso específico, resistência mecânica e de baixo custo. Realizou-se uma
comparação dos dados obtidos na região de leitura com os dados disponibilizados
pelo site the channel water para verificar a eficiência do equipamento.
Posteriormente realizamos o teste houve pouca influência do ambiente onde foi
coletado os dados, apesar de ser realizado em um perímetro urbano.

## Board
 ![NodeMCU](/cansat-scheme.jpg)

## Setup

Projeto desenvolvido no [ArduinoCloud](https://cloud.arduino.cc)

```cpp
  Create Cloud Variables
    String chat;
    String chat2;
    String chat3;
    float accX;
    float accY;
    float accZ;
    float altitude;
    float gyroX;
    float gyroY;
    float gyroZ;
    CloudTemperatureSensor temperatura;
    int pressao;
    CloudLocation maps;
    CloudRelativeHumidity umidade;
```
## Associated Device
Configure a placa usando o ArduinoCloud
```
    ID: 
    Type: NodeMCU 1.0 (ESP-12E Module)
```
## Setting Network
*Secret Key gerado após configurar a placa*
```
    Wi-Fi Name:
    Password:
    Secret Key: 
```

## 🔗 Links
[![portfolio](https://img.shields.io/badge/my_portfolio-000?style=for-the-badge&logo=ko-fi&logoColor=white)](https://daisukedd.github.io)
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/contatokevinwallen/)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/da1suked_)




