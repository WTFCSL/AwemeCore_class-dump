//
//     Generated by private class-dump
//

@class UIColor, UISlider;

@interface BDXLynxVideoSeekView : LynxUIView {
    BOOL _needRedrawThumb;
    UISlider *_seek;
    double _customScale;
    UIColor *_customColor;
}

@property (nonatomic) double customScale;
@property (retain, nonatomic) UIColor *customColor;
@property (nonatomic) BOOL needRedrawThumb;
@property (retain, nonatomic) UISlider *seek;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__751;
+ (id)__lynx_prop_config__802;
+ (id)__lynx_prop_config__863;
+ (id)__lynx_prop_config__934;
+ (id)__lynx_prop_config__985;

- (void)layoutDidFinished;
- (void)onNodeReady;
- (id)seek;
- (id)parseColor:(id)arg0;
- (void)didSeekValueChanged:(id)arg0 forEvent:(id)arg1;
- (void)setNeedRedrawThumb:(BOOL)arg0;
- (void)setCustomScale:(double)arg0;
- (void)currentDuration:(id)arg0 requestReset:(BOOL)arg1;
- (id)makeCircleWithSize:(struct CGSize { double x0; double x1; })arg0 color:(id)arg1;
- (void)setCustomColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)setCustomScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)current_duration:(id)arg0 requestReset:(BOOL)arg1;
- (void)duration:(id)arg0 requestReset:(BOOL)arg1;
- (void)setSeek:(id)arg0;
- (BOOL)needRedrawThumb;
- (void).cxx_destruct;
- (void)setCustomColor:(id)arg0;
- (id)customColor;
- (id)createView;
- (double)customScale;

@end
