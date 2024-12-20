/*
 * Christopher Bennett
 *Binary Search
*/


use std::io;
use std::cmp::Ordering;


fn main()
{
    println!("We Ball");

    let arr = [10, 22, 30, 45, 55, 78, 100, 102, 104, 201];
    let length = arr.len();
    let mut start = 0;
    let mut end = length - 1;
    let mut mid = (start + end) / 2;
    let mut numToFind = String::new();
    let mut isFound: bool = false;


    println!("Enter a number to find");
    io::stdin()
        .read_line(&mut numToFind)
        .expect("Failed to read line");
    let numToFind: usize  = numToFind.trim().parse().expect("Failed to parse");

    
    while start <= end
    {
        mid = (start + end) / 2;

        match arr[mid].cmp(&numToFind)
        {
            Ordering::Equal => start = end + 1,
            Ordering::Less => start = mid + 1,
            Ordering::Greater => end = mid - 1,
        }
        
        //println!("mid: {mid}");

        if start > end {
            isFound = false;
        }
    }
    println!("You want to find: {numToFind}");

    if arr[mid] == numToFind{
        println!("Number found at index: {mid}");
    }else{
        println!("Number not found");
    }
}
