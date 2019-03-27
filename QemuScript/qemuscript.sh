#!/bin/bash
#hecho por l3afapad
sudo apt-get install figlet
clear
sleep 1s
clear
while :
do
figlet "Qemu Script"
echo "0. instalar dependencias"
echo "++++++++++++++++++++++++"
echo "1. crear maquina virtual"
echo "2. configurar y ejecutar maquina virtual para instalar sistema"
echo "3. Ejecutar Maquina virtual."
echo "4.salir"
read opcion
case $opcion in


0)sudo apt-get install qemu-kvm qemu libvirt-clients && clear;;

1)clear && echo "Escriba nombre que le dara al discoduro: "
read image
echo "escriba el tamaño que le asignara al discoduro(ej: 8G): "
read gb
qemu-img create -f qcow2 $image.img $gb && clear && echo "maquina virtual creada" && sleep 1s && clear;;


2)clear && echo "escribe cantidad de ram que agregaras en mb(ej: 1024): "
read ram
echo "cantidad de nucleos a usar(ej: 1): "
read nucleo
echo "nombre de la maquina(discoduro): "
read duro
echo "elija la ubicacion de la iso a instalar o ejecutar: "
read cdrom
qemu-system-x86_64 -m $ram -boot d -enable-kvm -smp $nucleo -net nic -net user -hda $duro.img -cdrom $cdrom && clear;;


3)clear && echo "escribe cantidad de ram que agregaras en mb(ej: 1024): "
read ram
echo "cantidad de nucleos a usar(ej: 1): "
read nucleo
echo "nombre de la maquina(discoduro): "
read duro
qemu-system-x86_64 -m $ram -boot d -enable-kvm -smp $nucleo -net nic -net user -hda $duro.img && clear;;

4)clear && echo "gracias por usar mi script :D" && sleep 1s && clear;
exit 1;;
esac
done
