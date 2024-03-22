//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface AWEHomePageBubbleBigLabelContentConfig : NSObject <AWEHomePageBubbleContentConfigProtocol> {
    BOOL _autoPlayAnimatedImage;
    UIImage *_popoverImage;
    NSString *_popoverString;
    double _delayTime;
    long long _customLoop;
}

@property (retain, nonatomic) UIImage *popoverImage;
@property (retain, nonatomic) NSString *popoverString;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) double delayTime;
@property (nonatomic) long long customLoop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAutoPlayAnimatedImage:(BOOL)arg0;
- (void)setCustomLoop:(long long)arg0;
- (long long)customLoop;
- (BOOL)autoPlayAnimatedImage;
- (void)setPopoverString:(id)arg0;
- (void)setPopoverImage:(id)arg0;
- (id)popoverImage;
- (id)popoverString;
- (id)contentType;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)setDelayTime:(double)arg0;
- (double)delayTime;

@end
