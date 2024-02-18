// 2. Ingresar tres valores, imprimir la suma total, sólo sabe sumar de a dos.

use std::io;

fn main() {
    let mut x = String::new();
    println!("Please, insert a number X:");

    io::stdin().read_line(&mut x).expect("Failed to read line.");

    let x: i32 = match x.trim().parse() {
        Ok(num) => num,
        Err(msg) => {
            println!("Something went wrong. {}", msg);
            return;
        }
    };

    let mut y = String::new();
    println!("Please, insert a number Y:");
    io::stdin().read_line(&mut y).expect("Failed to read line.");

    let y: i32 = match y.trim().parse() {
        Ok(num) => num,
        Err(msg) => {
            println!("Something went wrong: {}", msg);
            return;
        }
    };

    let res = x + y;
    println!("{x} + {y} = {res}");

    let mut z = String::new();
    println!("Please, insert a number Z:");
    io::stdin().read_line(&mut z).expect("Failed to read line.");

    let z: i32 = match z.trim().parse() {
        Ok(num) => num,
        Err(msg) => {
            println!("Something went wrong {}", msg);
            return;
        }
    };
}
