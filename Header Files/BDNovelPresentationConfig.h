//
//     Generated by private class-dump
//

@interface BDNovelPresentationConfig : NSObject {
    BOOL _enableFullScreen;
    double _marginTop;
    double _corner;
    double _transitionAlpha;
    double _shadowRadius;
    double _shadowOffset;
    double _shadowOpacity;
}

@property (nonatomic) double marginTop;
@property (nonatomic) double corner;
@property (nonatomic) double transitionAlpha;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) BOOL enableFullScreen;

+ (id)defaultConfig;

- (double)transitionAlpha;
- (BOOL)enableFullScreen;
- (void)setTransitionAlpha:(double)arg0;
- (void)setEnableFullScreen:(BOOL)arg0;
- (double)shadowRadius;
- (double)shadowOpacity;
- (void)setShadowOpacity:(double)arg0;
- (void)setShadowRadius:(double)arg0;
- (void)setShadowOffset:(double)arg0;
- (double)shadowOffset;
- (double)corner;
- (double)marginTop;
- (void)setMarginTop:(double)arg0;
- (void)setCorner:(double)arg0;

@end