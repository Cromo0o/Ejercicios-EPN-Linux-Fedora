#include <stdio.h>
#include <stdlib.h>


// Definimos el tamaño máximo del catálogo de productos
#define PRO_MAX 100


// Estructura para los productos del inventario
struct Producto {
    int id;
    char nombre[50];
    float precio;
    int stock;
    int tipoIVA;
};


int main(void) {
    // Variables generales
    int opcion = 0;
    int subOpcion = 0;
    int i = 0, k = 0, j = 0;
    int encontrado = 0;
    int continuar = 0;
   
    // Variables de caja
    int cajaAbierta = 0;
    float totalCaja = 0.0;
   
    // Variables de producto
    int idBuscado, cantidad;
   
    // Variables de venta
    char seguirVendiendo = 's';
    float totalTicket = 0.0;
    float subtotalTicket = 0.0;
    float ivaTicket = 0.0;
    float subtotalItem, ivaItem;
   
    // Variables para el ticket
    int ticketProdIndex[50];
    int ticketCantidad[50];
    int itemsTicket = 0;


    // Inventario precargado
    struct Producto inventario[PRO_MAX] = {
        {101, "Arroz (Funda 1kg)", 1.50, 50, 1},
        {102, "Azucar (Funda 1kg)", 1.25, 60, 1},
        {103, "Leche (Funda 1L)", 1.00, 25, 1},
        {104, "Galletas Saladas", 0.80, 70, 2},
        {105, "Aceite (1L)", 3.50, 20, 2}
    };
   
    // Variables para reportes de iva
    float ventasPorIVA[4] = {0.0, 0.0, 0.0, 0.0};
    float tasasIVA[4];
    tasasIVA[1] = 0.00;
    tasasIVA[2] = 0.12;
    tasasIVA[3] = 0.15;


    int totalProductos = 5;


    // Bucle principal del programa Aby's POS
    do {
        for(k = 0; k < 50; k++) { printf("\n"); }
       
        printf("__________________________________________________________\n");
        printf("                        ABY'S POS                         \n");
        printf("__________________________________________________________\n");
        if (cajaAbierta == 1) {
            printf("   Estado de Caja: ABIERTA | Total: $%.2f\n", totalCaja);
        } else {
            printf("   Estado de Caja: CERRADA\n");
        }
        printf("__________________________________________________________\n");
        printf("1. Modulo de Productos (Registrar, Listar, Editar)\n");
        printf("2. Modulo de Inventario (Ajustar stock)\n");
        printf("3. Modulo de Ventas (Registrar venta)\n");
        printf("4. Modulo de Caja (Abrir, Cerrar)\n");
        printf("5. Modulo de Reportes\n");
        printf("6. Salir\n");
        printf("__________________________________________________________\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);


        switch (opcion) {
           
            case 1: // Modulo de productos
                for(k = 0; k < 50; k++) { printf("\n"); }


                printf("--- MODULO DE PRODUCTOS ---\n");
                printf("1) Registrar nuevo producto\n");
                printf("2) Listar productos\n");
                printf("3) Editar producto\n");
                printf("Seleccione: ");
                scanf("%d", &subOpcion);


                if (subOpcion == 1) {
                    // Registro
                    if (totalProductos >= PRO_MAX) {
                        printf("Error: Catalogo lleno.\n");
                    } else {
                        printf("\n--- REGISTRO ---\n");
                        inventario[totalProductos].id = 101 + totalProductos;
                       
                        printf("Nombre: ");
                        scanf(" %[^\n]", inventario[totalProductos].nombre);
                        printf("Precio: ");
                        scanf("%f", &inventario[totalProductos].precio);
                        printf("Stock: ");
                        scanf("%d", &inventario[totalProductos].stock);
                        printf("Tipo IVA (1=0%%, 2=12%%, 3=15%%): ");
                        scanf("%d", &inventario[totalProductos].tipoIVA);
                       
                        if(inventario[totalProductos].tipoIVA < 1 || inventario[totalProductos].tipoIVA > 3)
                            inventario[totalProductos].tipoIVA = 2;


                        printf("Registrado ID: %d\n", inventario[totalProductos].id);
                        totalProductos++;
                    }
                } else if (subOpcion == 2) {
                    // Listado
                    printf("\n--- LISTA DE PRODUCTOS ---\n");
                    printf("ID   | NOMBRE               | PRECIO | STOCK | IVA\n");
                    for(i = 0; i < totalProductos; i++) {
                        printf("%d  | %-20s | $%.2f  | %-5d | %.0f%%\n",
                            inventario[i].id,
                            inventario[i].nombre,
                            inventario[i].precio,
                            inventario[i].stock,
                            tasasIVA[inventario[i].tipoIVA]*100);
                    }
                } else if (subOpcion == 3) {
                    // Edición
                    printf("\n--- SELECCIONE PRODUCTO ---\n");
                    for(i = 0; i < totalProductos; i++) {
                        printf("%d - %s ($%.2f)\n", inventario[i].id, inventario[i].nombre, inventario[i].precio);
                    }
                    printf("Ingrese ID: ");
                    scanf("%d", &idBuscado);
                   
                    encontrado = -1;
                    for(i = 0; i < totalProductos; i++) {
                        if(inventario[i].id == idBuscado) encontrado = i;
                    }


                    if (encontrado != -1) {
                        printf("Editando: %s\n", inventario[encontrado].nombre);
                        printf("Precio actual: $%.2f -> Nuevo: ", inventario[encontrado].precio);
                        scanf("%f", &inventario[encontrado].precio);
                       
                        printf("Stock actual: %d -> Nuevo: ", inventario[encontrado].stock);
                        scanf("%d", &inventario[encontrado].stock);
                        printf("Actualizado.\n");
                    } else {
                        printf("No encontrado.\n");
                    }
                }
                break;


            case 2: // Modulo de inventario
                for(k = 0; k < 50; k++) { printf("\n"); }


                printf("--- INVENTARIO ---\n");
                for(i = 0; i < totalProductos; i++) {
                    printf("%d - %s (Stock: %d)\n", inventario[i].id, inventario[i].nombre, inventario[i].stock);
                }
                // Ajuste de stock
                printf("\nIngrese ID: ");
                scanf("%d", &idBuscado);
               
                encontrado = -1;
                for(i = 0; i < totalProductos; i++) {
                    if(inventario[i].id == idBuscado) encontrado = i;
                }
               
                if (encontrado != -1) {
                    printf("Producto: %s\n", inventario[encontrado].nombre);
                    printf("Cantidad a sumar/restar: ");
                    scanf("%d", &cantidad);
                    // Validar que no quede stock negativo
                    if (inventario[encontrado].stock + cantidad < 0) {
                        printf("Error: Stock negativo.\n");
                    } else {
                        inventario[encontrado].stock += cantidad;
                        printf("Nuevo stock: %d\n", inventario[encontrado].stock);
                    }// Actualizar stock
                } else {
                    printf("No encontrado.\n");
                }
                break;


            case 3: // Modulo de ventas
                for(k = 0; k < 50; k++) { printf("\n"); }


                printf("--- VENTAS ---\n");
                if (cajaAbierta == 0) {
                    printf("Caja Cerrada.\n"); // No se pueden hacer ventas
                } else { // Caja abierta, se puede iniciar venta
                    totalTicket = 0.0; subtotalTicket = 0.0; ivaTicket = 0.0; seguirVendiendo = 's';
                    itemsTicket = 0;


                    printf("--- NUEVA TRANSACCION ---\n"); // Bucle de venta


                    do {
                        printf("\nDISPONIBLES:\n");
                        for(i = 0; i < totalProductos; i++) {
                            if(inventario[i].stock > 0) {
                                printf("%d - %s ($%.2f)\n", inventario[i].id, inventario[i].nombre, inventario[i].precio);
                            }
                        }


                        printf("\nID a vender: ");
                        scanf("%d", &idBuscado);


                        encontrado = -1;
                        for(i = 0; i < totalProductos; i++) {
                            if(inventario[i].id == idBuscado) encontrado = i;
                        }


                        if (encontrado != -1) {
                            printf("Seleccionado: %s\n", inventario[encontrado].nombre);
                            printf("Cantidad: ");
                            scanf("%d", &cantidad);


                            if (cantidad > inventario[encontrado].stock) {
                                printf("Stock insuficiente.\n");
                            } else if (cantidad <= 0) {
                                printf("Cantidad invalida.\n");
                            } else {
                                // Procesar venta
                                subtotalItem = inventario[encontrado].precio * cantidad;
                                int tipo = inventario[encontrado].tipoIVA;
                                ivaItem = subtotalItem * tasasIVA[tipo];
                               
                                inventario[encontrado].stock -= cantidad;
                                ventasPorIVA[tipo] += subtotalItem;
                                totalCaja += (subtotalItem + ivaItem);


                                subtotalTicket += subtotalItem;
                                ivaTicket += ivaItem;
                                totalTicket += (subtotalItem + ivaItem);


                                if(itemsTicket < 50) {// Guardar en ticket
                                    ticketProdIndex[itemsTicket] = encontrado;
                                    ticketCantidad[itemsTicket] = cantidad;  
                                    itemsTicket++;
                                }
                                printf(">> AGREGADO.\n");
                            }
                        } else {
                            printf("No encontrado.\n");
                        }


                        printf("\n¿Otro producto? (s/n): ");// Continuar venta
                        scanf(" %c", &seguirVendiendo);


                    } while (seguirVendiendo == 's' || seguirVendiendo == 'S');


                    // Imprimir ticket
                    if (totalTicket > 0) {
                        for(k = 0; k < 50; k++) { printf("\n"); } // Limpiar pantalla
                       
                        printf("____________________________________\n");
                        printf("              ABY'S POS             \n");
                        printf("____________________________________\n");
                        printf("CANT | PRODUCTO           | TOTAL\n");
                        printf("--------------------------------\n");
                       
                        // Bucle para imprimir items
                        for(j = 0; j < itemsTicket; j++) {
                            int idx = ticketProdIndex[j];
                            int cant = ticketCantidad[j];
                            float costo = inventario[idx].precio * cant;
                           
                            // Formato de impresión del ticket
                            printf(" %-3d | %-18s | $%.2f\n", cant, inventario[idx].nombre, costo);
                        }


                        printf("--------------------------------\n");
                        printf(" Subtotal neto:   $%.2f\n", subtotalTicket);
                        printf(" IVA Total:       $%.2f\n", ivaTicket);
                        printf("================================\n");
                        printf(" TOTAL A PAGAR:   $%.2f\n", totalTicket);
                        printf("================================\n");
                        printf("     ¡GRACIAS POR SU COMPRA!    \n");
                       
                        // Verificar stock bajo
                        for(i = 0; i < totalProductos; i++) {
                             if(inventario[i].stock > 0 && inventario[i].stock < 5) {
                                printf("[!] ALERTA: %s bajo stock (%d)\n", inventario[i].nombre, inventario[i].stock);
                             }
                        }
                    } else {
                        printf("\nVenta cancelada o vacia.\n");
                    }
                }
                break;


            case 4: // Modulo de caja
                // Ambos casos se manejan en el mismo bloque
            case 5: // Modulo de reportes
                // Ambos casos se manejan en el mismo bloque
            case 6: // Salir
                if (opcion == 4) {// Caja
                    for(k=0; k<50; k++) printf("\n");
                    printf("1. Abrir 2. Cerrar: "); scanf("%d", &subOpcion);
                    if(subOpcion==1) { cajaAbierta=1; totalCaja=0; ventasPorIVA[1]=0; ventasPorIVA[2]=0; ventasPorIVA[3]=0; printf("Abierta.\n"); }// Abrir caja
                    else { cajaAbierta=0; printf("Cerrada. Total: $%.2f\n", totalCaja); }// Cerrar caja
                }
                else if (opcion == 5) {// Reportes
                    for(k=0; k<50; k++) printf("\n");
                    printf("--- REPORTES ---\n");
                    printf("0%%: $%.2f | 12%%: $%.2f | 15%%: $%.2f\n", ventasPorIVA[1], ventasPorIVA[2], ventasPorIVA[3]);
                    printf("BAJO STOCK:\n");
                    for(i = 0; i < totalProductos; i++) {
                        if(inventario[i].stock < 5) printf("- %s (%d)\n", inventario[i].nombre, inventario[i].stock);
                    }// Reporte de IVA y stock bajo
                }
                break;// Fin switch
               
            default: printf("Opcion no valida.\n");
        }


        if (opcion != 6) {// Pausa antes de volver al menu
            printf("\nIngrese 1 para volver: ");
            scanf("%d", &continuar);
        }


    } while (opcion != 6);// Fin bucle principal del programa Aby's POS


    return 0;
}


