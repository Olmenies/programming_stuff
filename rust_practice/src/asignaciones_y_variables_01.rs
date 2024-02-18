// 1. Ingresar dos valores enteros y sumarlos.
use std::io;

fn main() {
    println!("Please insert a number: ");
    let mut x = String::new();
    io::stdin().read_line(&mut x).expect("Failed to read line");
    let x: i32 = match x.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please insert a number:");
            return;
        }
    };

    println!("Please insert number:");
    let mut y = String::new();
    io::stdin().read_line(&mut y).expect("Failed to read line:");
    let y: i32 = match y.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please insert a number:");
            return;
        }
    };

    let res = add(x, x);
    println!("{} + {} = {}", x, y, res);
}

fn add(x: i32, y: i32) -> i32 {
    x + y
}
