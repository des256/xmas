fn main(){for y in-8i8..9{for x in-8i8..9{print!("{}",if((x.abs()-y.abs()).abs()<5)&&((x.abs()<5)||(y.abs()<5)){"*"}else{" "});}print!("\n");}}
