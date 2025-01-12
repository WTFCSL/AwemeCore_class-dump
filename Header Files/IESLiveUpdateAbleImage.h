//
//     Generated by private class-dump
//

@class NSMapTable, NSString, UIImage, NSHashTable;

@interface IESLiveUpdateAbleImage : UIImage {
    NSString *_imageName;
    UIImage *_realImage;
    NSHashTable *_imageViews;
    NSMapTable *_buttons;
    NSMapTable *_buttonBackgrounds;
    NSMapTable *_sliders;
}

@property (retain, nonatomic) UIImage *realImage;
@property (retain, nonatomic) NSHashTable *imageViews;
@property (retain, nonatomic) NSMapTable *buttons;
@property (retain, nonatomic) NSMapTable *buttonBackgrounds;
@property (retain, nonatomic) NSMapTable *sliders;
@property (copy, nonatomic) NSString *imageName;

- (void)setRealImage:(id)arg0;
- (id)realImage;
- (void)addToImageView:(id)arg0;
- (void)removeFromImageView:(id)arg0;
- (void)addToButton:(id)arg0 forState:(unsigned long long)arg1;
- (void)removeFromButton:(id)arg0 forState:(unsigned long long)arg1;
- (void)removeFromButton:(id)arg0 forBackgroundState:(unsigned long long)arg1;
- (void)addToButton:(id)arg0 forBackgroundState:(unsigned long long)arg1;
- (id)buttonBackgrounds;
- (void)setButtonBackgrounds:(id)arg0;
- (void)addToSlider:(id)arg0 forState:(unsigned long long)arg1;
- (void)removeFromSlider:(id)arg0 forState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (void)setImageViews:(id)arg0;
- (id)imageViews;
- (void)updateImage:(id)arg0;
- (id)sliders;
- (void)setSliders:(id)arg0;

@end
