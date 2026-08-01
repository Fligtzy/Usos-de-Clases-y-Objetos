# Usos-de-Clases-y-Objetos

# Actividad 8 - Clases y Objetos (POO)

## Datos del estudiante
- Nombre: Fausto Moreno
- Matrícula: 2025-1582

## Descripción del programa
Programa en C++ que usa la clase `Libro` para registrar y mostrar información de libros. Los atributos de la clase son privados y solo se accede a ellos mediante los métodos públicos `ingresarDatos()` y `mostrarInformacion()`. En la función `main` se crean 5 objetos `Libro`, se piden sus datos por teclado y luego se muestran todos en pantalla.

## Datos de entrada
Por cada uno de los 5 libros, el usuario introduce por teclado:
- Título
- Autor
- Año de publicación
- Edición
- Cantidad de páginas

## Datos que procesa
El programa guarda los datos ingresados en un arreglo de 5 objetos `Libro`, asignando cada valor al atributo privado correspondiente dentro del método `ingresarDatos()`.

## Datos de salida
El programa muestra en pantalla la información completa de los 5 libros registrados (título, autor, año de publicación, edición y cantidad de páginas) usando el método `mostrarInformacion()`.

## Importancia de la encapsulación en la POO
La encapsulación es importante porque protege los datos de un objeto y evita que se modifiquen directamente desde fuera de la clase. Al declarar los atributos como privados y dejar solo algunos métodos públicos, se controla cómo se ingresan y se muestran los datos, se evitan errores por accesos indebidos y el código queda más organizado, porque cada clase se encarga únicamente de manejar su propia información.

## Cómo compilar y ejecutar el programa
1. Abrir una terminal en la carpeta donde está `main.cpp`.
2. Compilar:
   ```
   g++ main.cpp -o libro
   ```
3. Ejecutar:
   - Windows: `libro.exe`
4. Ingresar los datos solicitados para cada uno de los 5 libros.

## Capturas de pantalla del programa en ejecución
Crea una carpeta llamada `capturas` junto a `main.cpp`, guarda ahí tus imágenes y enlázalas aquí con este formato:

<img width="876" height="848" alt="image" src="https://github.com/user-attachments/assets/bd6af44a-09e8-4be0-8381-d0726c33b30f" />

<img width="908" height="868" alt="image" src="https://github.com/user-attachments/assets/2846bcf9-b9d6-4cba-ac1a-7fe18dd530b1" />


