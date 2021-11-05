import tkinter as tk
import tkinter.filedialog
from serial import Serial
import time

serial_arduino = Serial('COM2', 9600)
time.sleep(1)


class VentanaPrincipal(tk.Frame):

    def __init__(self, master=None):
        super().__init__(master)
        self.master = master
        self.pack()
        self.crear_widgets()

    def crear_widgets(self):
        self.button_guardar = tk.Button(self)
        self.button_guardar["text"] = "Enviar Dato"
        self.button_guardar["command"] = self.enviar
        self.button_guardar.grid(row="0", column="1")

        self.campo_entrada = tk.Entry(self)
        self.campo_entrada.grid(row="0", column="0")

        self.etiqueta_texto = tk.Label(self)
        self.etiqueta_texto["text"] = ""
        self.etiqueta_texto.grid(row="2", column="0")

        self.label_recibido = tk.Label(self)
        self.label_recibido["font"] = "Century Gothic", 18
        self.label_recibido["text"] = "Datos Recibidos"
        self.label_recibido.grid(row="3", column="0")

        self.etiqueta_recibido = tk.Label(self)
        self.etiqueta_recibido["font"] = "Century Gothic", 18
        self.etiqueta_recibido["text"] = ""
        self.etiqueta_recibido.grid(row="4", column="0")

    def enviar(self):
        # self.etiqueta_texto = tkinter.Label(self)
        # self.etiqueta_texto["text"] = self.campo_nombre.get('text')
        # self.texto1.set("hola")
        self.etiqueta_texto["text"] = self.campo_entrada.get()
        if self.campo_entrada.get() == 'h':
            try:
                serial_arduino.write(b'h')
            except Exception as ex:
                print(ex.args)
        elif self.campo_entrada.get() == 'l':
            try:
                print(serial_arduino.write(b'l'))
            except Exception as ex:
                print(ex.args)
        else:
            print('Opción Inválida')


if __name__ == '__main__':
    root = tkinter.Tk()
    root.title("Comunicación Serial")
    root.geometry("300x200")
    ventana_principal = VentanaPrincipal(root)

    root.mainloop()
