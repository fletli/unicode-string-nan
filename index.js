const addon = require('./build/Release/unicode-string-nan');

var dir = __dirname
length = Buffer.byteLength(dir,'utf16le')
console.log(length)
var buf = new Buffer(length)
buf.write(dir, 0, 'utf16le')
addon.pass_buffer(buf, length)
