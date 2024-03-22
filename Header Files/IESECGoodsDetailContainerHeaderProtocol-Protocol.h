//
//     Generated by private class-dump
//

@protocol IESECGoodsDetailContainerHeaderProtocol <NSObject>

@property (nonatomic) double headerTabTransparency;
@property (nonatomic) double headerShareButtonShowPercent;
@property (nonatomic) double headerTransparency;
@property (nonatomic) double headerContainerAlpha;
@property (readonly, nonatomic) BOOL transitionHeaderShow;

- (void)setHeaderTransparency:(double)arg0;
- (void)setHeaderContainerAlpha:(double)arg0;
- (void)updateHeadTabsCount;
- (void)updateTransitionHeaderWithFinalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 shadowShowAlpha:(double)arg1;
- (BOOL)transitionHeaderShow;
- (double)headerContainerAlpha;
- (void)setHeaderTabTransparency:(double)arg0;
- (void)updateSelectedIndexTabWithIndex:(unsigned long long)arg0;
- (void)updateHeaderTabsWithParameters:(id)arg0 needExpandGoodsDetail:(BOOL)arg1;
- (double)headerTabTransparency;
- (double)headerShareButtonShowPercent;
- (void)setHeaderShareButtonShowPercent:(double)arg0;
- (double)headerTransparency;
- (double)height;
- (void)setDelegate:(id)arg0;

@end