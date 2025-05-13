##EDTING CODE
def takePhoto():
    cap = cv2.VideoCapture(0)
    cap.set(cv2.CAP_PROP_FRAME_WIDTH,640)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
    if not cap.isOpend():
        print("camera open error")
        return
    ret, image=cap.read()
    if not ret:
        print("frame read error")
        return
    cv2.imshow("CAMERA", image)
    time.sleep(1)
    cv2.imwrite("./image.jpg", image)
    cap.release()
    cv2.destroyAllWindows()

#async def alarm(context: ContextTypes.DEFAULT_TYPE) -> None:
#   """Send the alarm message."""
    takePhoto()
#   job = context.job
#   await context.bot.send_message(job.chat_id, text=f"Beep! {job.data} seconds are over!")
    await context.bot.sendPhoto(job.chat_id, photo=open("./image.jpg", "rb"))
