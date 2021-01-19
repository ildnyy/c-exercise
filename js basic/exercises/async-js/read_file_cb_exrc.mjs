/* npm t exercises/async-js/read_file_cb_exrc.mjs
Instructions:
- The first test is synchronous, implement the second test via the callback-based readFile()
- For the test to work asynchronously, you need to call t.end() at the end
*/

import test from 'ava';
import {strict as assert} from 'assert';
import {fileURLToPath} from 'url';

const testFilePath = fileURLToPath(new URL('read_file_cb_exrc_data.txt', import.meta.url));

import {readFileSync} from 'fs';

test('Read file synchronously', t => {
  const text = readFileSync(testFilePath, { encoding: 'utf8' }).trim();
  assert.equal(text, 'The test data');
});

import {readFile} from 'fs';

test.cb('Read file via callback', t => {
  readFile(testFilePath,{encoding:'utf8'},
  function(erro,text){
    if(erro){
      console.log(erro)
      t.end(erro)
      return;
    }
    else{
      text=text.trim()
      assert.equal(text,'The test data')
      t.end()
    }
  }
  )
});
