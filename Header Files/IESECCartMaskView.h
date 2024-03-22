//
//     Generated by private class-dump
//

@class NSDictionary;

@interface IESECCartMaskView : UIView {
    NSDictionary *_extraParams;
    double _initTime;
}

@property (nonatomic) double initTime;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (void)dismissBottomMask;
+ (id)showBottomMaskWithExtraParams:(id)arg0 onView:(id)arg1;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)trackMaskViewTap;
- (void)setInitTime:(double)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)initTime;

@end