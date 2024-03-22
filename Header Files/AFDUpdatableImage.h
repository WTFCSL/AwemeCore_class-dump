//
//     Generated by private class-dump
//

@class UIColor, NSMapTable, NSString, UIImage, NSHashTable;

@interface AFDUpdatableImage : UIImage {
    BOOL _dynamicTheme;
    UIImage *_realImage;
    NSString *_imageName;
    NSString *_channel;
    NSString *_bundleName;
    NSString *_cloudPath;
    UIColor *_themeColor;
    NSHashTable *_imageViews;
    NSHashTable *_highlightedImageViews;
    NSMapTable *_buttons;
    NSMapTable *_buttonBackgrounds;
}

@property (retain, nonatomic) UIImage *realImage;
@property (copy, nonatomic) NSHashTable *imageViews;
@property (copy, nonatomic) NSHashTable *highlightedImageViews;
@property (copy, nonatomic) NSMapTable *buttons;
@property (copy, nonatomic) NSMapTable *buttonBackgrounds;
@property (nonatomic) BOOL dynamicTheme;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *cloudPath;
@property (retain, nonatomic) UIColor *themeColor;

- (void)setCloudPath:(id)arg0;
- (void)setRealImage:(id)arg0;
- (id)realImage;
- (void)addToImageView:(id)arg0;
- (void)removeFromImageView:(id)arg0;
- (void)addToButton:(id)arg0 forState:(unsigned long long)arg1;
- (void)removeFromButton:(id)arg0 forState:(unsigned long long)arg1;
- (void)removeFromButton:(id)arg0 forBackgroundState:(unsigned long long)arg1;
- (void)addToButton:(id)arg0 forBackgroundState:(unsigned long long)arg1;
- (void)removeHighlightedImageFromImageView:(id)arg0;
- (void)addHighlightedImageToImageView:(id)arg0;
- (void)setDynamicTheme:(BOOL)arg0;
- (id)highlightedImageViews;
- (id)buttonBackgrounds;
- (void)setHighlightedImageViews:(id)arg0;
- (void)setButtonBackgrounds:(id)arg0;
- (BOOL)dynamicTheme;
- (id)channel;
- (void).cxx_destruct;
- (id)imageName;
- (void)setChannel:(id)arg0;
- (void)setImageName:(id)arg0;
- (void)setButtons:(id)arg0;
- (id)buttons;
- (id)bundleName;
- (void)setThemeColor:(id)arg0;
- (void)setBundleName:(id)arg0;
- (id)themeColor;
- (id)cloudPath;
- (void)setImageViews:(id)arg0;
- (id)imageViews;
- (void)updateImage:(id)arg0;

@end
