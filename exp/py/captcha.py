from PIL import Image, ImageDraw, ImageFont
import random, time
import string
import time
def generate_captcha(length=6):
    """
    Generate an image-based CAPTCHA.

    Args:
        length (int, optional): Length of the CAPTCHA. Defaults to 6.

    Returns:
        tuple: CAPTCHA image and the corresponding text.
    """
    start_time = time.time()

    # Generate random CAPTCHA text
    captcha_text = ''.join(random.choice(string.ascii_letters + string.digits) for _ in range(length))

    # Set image dimensions
    width, height = 300, 80

    # Create a new image with white background
    img = Image.new('RGB', (width, height), color = (73, 109, 137))
    d = ImageDraw.Draw(img)

    # Set font and font size
    font = ImageFont.load_default(size=40)
    font_size = 25

    # Draw CAPTCHA text on the image
    x, y = 50, 20
    for char in captcha_text:
        d.text((x, y), char, font=font, fill=(255, 255, 0))
        x += font_size

    # Add noise to the image
    for _ in range(200):
        x = random.randint(0, width)
        y = random.randint(0, height)
        d.point((x, y), fill=(0, 0, 0))

    end_time = time.time()
    response_time = end_time - start_time
    print(f'Response time: {response_time:.4f} seconds')

    return img, captcha_text


  captcha_img, captcha_text = generate_captcha()
  captcha_img.save('captcha.png')
  print(f'CAPTCHA text: {captcha_text}')
