export function isSafeInteger(num){
    return (typeof num=='number' && Math.trunc(num)==num && Number.MIN_SAFE_INTEGER <= num && Number.MAX_SAFE_INTEGER>=num)
}