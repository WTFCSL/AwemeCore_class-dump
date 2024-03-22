//
//     Generated by private class-dump
//

@protocol IESLiveDanmakuEngineSettingsProtocol <NSObject>

@property (nonatomic) BOOL enableNormalDanmuku;
@property (nonatomic) double normalChannelHeight;
@property (nonatomic) double normalDanmakuHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalDanmukuFrame;
@property (nonatomic) double animationSpeed;
@property (nonatomic) double alpha;
@property (nonatomic) double fontSize;

- (double)normalDanmakuHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalDanmukuFrame;
- (double)normalChannelHeight;
- (void)setNormalChannelHeight:(double)arg0;
- (void)setNormalDanmakuHeight:(double)arg0;
- (BOOL)enableNormalDanmuku;
- (void)setEnableNormalDanmuku:(BOOL)arg0;
- (void)setNormalDanmukuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setFontSize:(double)arg0;
- (void)setAlpha:(double)arg0;
- (double)fontSize;
- (double)alpha;
- (void)setAnimationSpeed:(double)arg0;
- (double)animationSpeed;

@end
