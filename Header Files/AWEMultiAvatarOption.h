//
//     Generated by private class-dump
//

@class UIColor, UIImage;

@interface AWEMultiAvatarOption : NSObject {
    BOOL _needCrop;
    BOOL _isLeftOnTop;
    BOOL _needPlaceholder;
    BOOL _needRoundRectBg;
    BOOL _customLayerCenter;
    UIColor *_backgroundColor;
    long long _direction;
    UIImage *_avatarPaceholderImage;
    double _paddingWidth;
    double _borderWidth;
    double _avatarBorderWidth;
    UIColor *_avatarBorderColor;
    long long _frameType;
    long long _moreAvatarCount;
    id /* block */ _performAllImageLoadFinishBlock;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL needCrop;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL isLeftOnTop;
@property (nonatomic) BOOL needPlaceholder;
@property (retain, nonatomic) UIImage *avatarPaceholderImage;
@property (nonatomic) BOOL needRoundRectBg;
@property (nonatomic) double paddingWidth;
@property (nonatomic) double borderWidth;
@property (nonatomic) double avatarBorderWidth;
@property (retain, nonatomic) UIColor *avatarBorderColor;
@property (nonatomic) long long frameType;
@property (nonatomic) BOOL customLayerCenter;
@property (nonatomic) long long moreAvatarCount;
@property (copy, nonatomic) id /* block */ performAllImageLoadFinishBlock;

+ (id)initWithColorNamed:(id)arg0;

- (void)setNeedPlaceholder:(BOOL)arg0;
- (id)avatarBorderColor;
- (void)setPerformAllImageLoadFinishBlock:(id /* block */)arg0;
- (void)setIsLeftOnTop:(BOOL)arg0;
- (void)setNeedRoundRectBg:(BOOL)arg0;
- (void)setCustomLayerCenter:(BOOL)arg0;
- (void)setMoreAvatarCount:(long long)arg0;
- (BOOL)needCrop;
- (void)setNeedCrop:(BOOL)arg0;
- (BOOL)isLeftOnTop;
- (BOOL)needPlaceholder;
- (id)avatarPaceholderImage;
- (void)setAvatarPaceholderImage:(id)arg0;
- (BOOL)needRoundRectBg;
- (double)avatarBorderWidth;
- (void)setAvatarBorderWidth:(double)arg0;
- (void)setAvatarBorderColor:(id)arg0;
- (BOOL)customLayerCenter;
- (long long)moreAvatarCount;
- (id /* block */)performAllImageLoadFinishBlock;
- (double)borderWidth;
- (id)init;
- (void).cxx_destruct;
- (long long)direction;
- (void)setBorderWidth:(double)arg0;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg0;
- (void)setDirection:(long long)arg0;
- (long long)frameType;
- (void)setFrameType:(long long)arg0;
- (double)paddingWidth;
- (void)setPaddingWidth:(double)arg0;

@end