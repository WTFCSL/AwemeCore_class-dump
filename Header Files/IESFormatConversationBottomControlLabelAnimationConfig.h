//
//     Generated by private class-dump
//

@interface IESFormatConversationBottomControlLabelAnimationConfig : NSObject {
    BOOL _needAlphaAnimation;
    BOOL _needScaleAnimation;
    double _fromAlpha;
    double _toAlpha;
    double _fromScale;
    double _toScale;
    long long _durationInMilliseconds;
    struct CGPoint { double x; double y; } _timingFunctionControlPoint1;
    struct CGPoint { double x; double y; } _timingFunctionControlPoint2;
}

@property (nonatomic) BOOL needAlphaAnimation;
@property (nonatomic) double fromAlpha;
@property (nonatomic) double toAlpha;
@property (nonatomic) BOOL needScaleAnimation;
@property (nonatomic) double fromScale;
@property (nonatomic) double toScale;
@property (nonatomic) long long durationInMilliseconds;
@property (nonatomic) struct CGPoint { double x; double y; } timingFunctionControlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } timingFunctionControlPoint2;

+ (id)easeInConfigForInterruptLabel;
+ (id)easeOutConfigForInterruptLabel;
+ (id)easeInConfigForPleaseSpeakLabel;
+ (id)easeOutConfigForPleaseSpeakLabel;
+ (id)easeInConfigForRespeakLabel;
+ (id)easeOutConfigForRespeakLabel;
+ (id)controlLabelAnimationConfigsWithType:(long long)arg0 easeIn:(BOOL)arg1;

- (BOOL)needAlphaAnimation;
- (double)fromAlpha;
- (BOOL)needScaleAnimation;
- (double)fromScale;
- (struct CGPoint { double x0; double x1; })timingFunctionControlPoint1;
- (struct CGPoint { double x0; double x1; })timingFunctionControlPoint2;
- (double)toAlpha;
- (double)toScale;
- (void)setNeedAlphaAnimation:(BOOL)arg0;
- (void)setFromAlpha:(double)arg0;
- (void)setToAlpha:(double)arg0;
- (void)setNeedScaleAnimation:(BOOL)arg0;
- (void)setFromScale:(double)arg0;
- (void)setToScale:(double)arg0;
- (void)setTimingFunctionControlPoint1:(struct CGPoint { double x0; double x1; })arg0;
- (void)setTimingFunctionControlPoint2:(struct CGPoint { double x0; double x1; })arg0;
- (long long)durationInMilliseconds;
- (void)setDurationInMilliseconds:(long long)arg0;

@end
