function mutation(arr) {
  let letters = arr[1];
  for (let l in letters) {
    let x = new RegExp(letters[l],'i')
    if (x.test(arr[0]) == false) {
      return false;
    }
  }
  return true
}

console.log(mutation(["zyxwvutsrqponmlkjihgfedcba", "qrstu"]));