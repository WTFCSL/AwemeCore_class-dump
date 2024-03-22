//
//     Generated by private class-dump
//

@class ACCRecordMode, CAShapeLayer, NSString, CALayer, UIView, NSNumber;

@interface ACCLightningRecordLongtailView : UIView <ACCLightningRecordAnimatable> {
    long long _state;
    ACCRecordMode *_recordMode;
    NSNumber *_longtailShootAnimationEnabled;
    UIView *_longtailView;
    CALayer *_longtailLayer;
    CAShapeLayer *_maskLayer;
}

@property (retain, nonatomic) UIView *longtailView;
@property (retain, nonatomic) CALayer *longtailLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (nonatomic) long long state;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (void)setLongtailShootAnimationEnabled:(id)arg0;
- (id)longtailShootAnimationEnabled;
- (BOOL)p_longtailShootAnimationEnabled;
- (id)longtailView;
- (void)setLongtailView:(id)arg0;
- (id)longtailLayer;
- (void)setLongtailLayer:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)maskLayer;
- (void)setProgress:(float)arg0 animated:(BOOL)arg1;
- (void)setMaskLayer:(id)arg0;

@end
