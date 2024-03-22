//
//     Generated by private class-dump
//

@class UIImage, CAGradientLayer, UIColor;

@interface AWERatingViewRenderConfig : NSObject {
    BOOL _userInteractive;
    UIImage *_filledImage;
    UIImage *_emptyImage;
    long long _numberOfStars;
    double _starSpace;
    unsigned long long _ratingType;
    CAGradientLayer *_filledImageGradientColorLayer;
    CAGradientLayer *_emptyImageGradientColorLayer;
    UIColor *_filledImageColor;
    UIColor *_emptyImageColor;
    struct CGSize { double width; double height; } _starSize;
}

@property (retain, nonatomic) UIImage *filledImage;
@property (retain, nonatomic) UIImage *emptyImage;
@property (nonatomic) struct CGSize { double width; double height; } starSize;
@property (nonatomic) long long numberOfStars;
@property (nonatomic) double starSpace;
@property (nonatomic) unsigned long long ratingType;
@property (nonatomic) BOOL userInteractive;
@property (retain, nonatomic) CAGradientLayer *filledImageGradientColorLayer;
@property (retain, nonatomic) CAGradientLayer *emptyImageGradientColorLayer;
@property (retain, nonatomic) UIColor *filledImageColor;
@property (retain, nonatomic) UIColor *emptyImageColor;

+ (id)defaultConfig;

- (void)setStarSize:(struct CGSize { double x0; double x1; })arg0;
- (double)starSpace;
- (void)setFilledImage:(id)arg0;
- (void)setStarSpace:(double)arg0;
- (void)setRatingType:(unsigned long long)arg0;
- (void)setFilledImageColor:(id)arg0;
- (void)setFilledImageGradientColorLayer:(id)arg0;
- (void)setEmptyImageColor:(id)arg0;
- (void)setEmptyImageGradientColorLayer:(id)arg0;
- (id)filledImage;
- (id)filledImageGradientColorLayer;
- (id)emptyImageGradientColorLayer;
- (id)filledImageColor;
- (id)emptyImageColor;
- (void).cxx_destruct;
- (id)emptyImage;
- (BOOL)userInteractive;
- (unsigned long long)ratingType;
- (void)setUserInteractive:(BOOL)arg0;
- (void)setEmptyImage:(id)arg0;
- (void)setNumberOfStars:(long long)arg0;
- (long long)numberOfStars;
- (struct CGSize { double x0; double x1; })starSize;

@end
