const apiKey = 'aZFTowXXTuSwvrdvi1N5Fd754pD4BU2uscteKhRgJ8DN83yGwTUZ4HkN'; 
const numberOfPhotos = 5;
const apiUrl = `https://api.pexels.com/v1/search?query=people${numberOfPhotos}`;
let apiResponse;
let PhotoUrls;

const setImages = async () => {
  try {
    const response = await fetch(apiUrl, {
      headers: {
        Authorization: apiKey
      }
    });

    if (!response.ok) {
      throw new Error('Network response was not ok.');
    }
    // console.log(response);
    apiResponse = await response.json();
    collectURLs(apiResponse);
    setImageInElements();
    
  } catch (error) {
    console.error('Error setting images:', error);
  }
};

const collectURLs = (apiResponse) => {
  PhotoUrls = apiResponse.photos.map(photo => photo.src.original);
}
const setImageInElements = () => {
  const imageElements = document.querySelectorAll('.image');
  imageElements.forEach((element, index) => {
    element.style.backgroundImage = `url(${PhotoUrls[index]})`;
    element.style.backgroundSize = 'contain';
  });
}

setImages();