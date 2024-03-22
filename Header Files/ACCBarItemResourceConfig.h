//
//     Generated by private class-dump
//

@class NSString;

@interface ACCBarItemResourceConfig : NSObject {
    BOOL _isLottie;
    NSString *_imageName;
    NSString *_selectedImageName;
    NSString *_lottieResourceName;
    NSString *_title;
    void *_itemId;
    unsigned long long _location;
}

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (nonatomic) BOOL isLottie;
@property (copy, nonatomic) NSString *lottieResourceName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) void *itemId;
@property (nonatomic) unsigned long long location;

- (id)selectedImageName;
- (void)setSelectedImageName:(id)arg0;
- (BOOL)isLottie;
- (void)setIsLottie:(BOOL)arg0;
- (id)lottieResourceName;
- (void)setLottieResourceName:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)imageName;
- (void)setImageName:(id)arg0;
- (unsigned long long)location;
- (id)title;
- (void)setLocation:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;
- (void *)itemId;
- (void)setItemId:(void *)arg0;

@end
