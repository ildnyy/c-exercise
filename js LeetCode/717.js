var isOneBitCharacter = function(bits) {
    while(bits.length > 1){
      if(bits[0] === 1){
        bits = bits.slice(2)
      } else {
        bits.shift()
      }
    }
    return bits.length == 1
  };