var txt;

async function paste(input) {
  input = await navigator.clipboard.readText();
}


async function code() {
  document.querySelector('#text').value = await navigator.clipboard.readText();
};
