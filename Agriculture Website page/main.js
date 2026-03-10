/* <!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>CSV Demo Website</title>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/PapaParse/5.4.1/papaparse.min.js"></script>
  <style>
    body { font-family: Arial, sans-serif; }
    .card { border: 1px solid #ccc; padding: 10px; margin: 10px; width: 250px; display:inline-block; vertical-align:top; }
    .card img { max-width: 100%; }
  </style>
</head>
<body>
  <h1>CSV Data Display</h1>

  <!-- 🔹 Place for YOUR CSV file -->
  <div id="my-data"></div>

  <!-- 🔹 Place for SAMPLE products.csv -->
  <div id="product-list"></div> */

  <script>
    // Function to load and display any CSV file
    function loadCSV(file, containerId) {
      Papa.parse(file, {
        download: true,
        header: true,
        complete: function(results) {
          const data = results.data;
          const container = document.getElementById(containerId);

          data.forEach(item => {
            const card = document.createElement("div");
            card.className = "card";
            card.innerHTML = `
              <h3>${item.name || item.title || "Untitled"}</h3>
              ${item.image_url ? `<img src="${item.image_url}" alt="${item.name}">` : ""}
              <p>${item.category ? "Category: " + item.category : ""}</p>
              <p>${item.price ? "Price: $" + item.price : ""}</p>
              <p>${item.description || ""}</p>
            `;
            container.appendChild(card);
          });
        }
      })
    }

    // 🔹 Load YOUR CSV file (replace "mydata.csv" with your filename)
    loadCSV("mydata.csv", "my-data");

    // 🔹 Load SAMPLE products.csv
    loadCSV("", "product-list");
  </script>
/* </body>
</html> */