//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, NSMutableArray, UIView;

@interface IESLivePlaybackDanmakuSettingSlider : UIView {
    unsigned long long _count;
    unsigned long long _index;
    unsigned long long _maxValue;
    unsigned long long _minValue;
    id /* block */ _valueChangedBlock;
    UIView *_thumbView;
    UIView *_defaultPoint;
    UIView *_backSlider;
    UIPanGestureRecognizer *_pan;
    UIView *_trackView;
    NSMutableArray *_stepPoint;
}

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *defaultPoint;
@property (retain, nonatomic) UIView *backSlider;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIView *trackView;
@property (retain, nonatomic) NSMutableArray *stepPoint;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long maxValue;
@property (nonatomic) unsigned long long minValue;
@property (copy, nonatomic) id /* block */ valueChangedBlock;

- (id)trackView;
- (void)setTrackView:(id)arg0;
- (void)buildGesture;
- (double)stepPosition:(unsigned long long)arg0;
- (void)updateSubviewPosition;
- (void)updateDisplayNumber:(BOOL)arg0;
- (id)stepPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 count:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 index:(unsigned long long)arg1 maxValue:(unsigned long long)arg2 minValue:(unsigned long long)arg3;
- (id)defaultPoint;
- (void)setDefaultPoint:(id)arg0;
- (id)backSlider;
- (void)setBackSlider:(id)arg0;
- (void)setStepPoint:(id)arg0;
- (id)pan;
- (void)setCount:(unsigned long long)arg0;
- (void)setIndex:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)maxValue;
- (id)thumbView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)index;
- (unsigned long long)count;
- (unsigned long long)minValue;
- (unsigned long long)getValue;
- (void)setMinValue:(unsigned long long)arg0;
- (void)setMaxValue:(unsigned long long)arg0;
- (void)setPan:(id)arg0;
- (void)setThumbView:(id)arg0;
- (void)buildView;
- (id /* block */)valueChangedBlock;
- (void)setValueChangedBlock:(id /* block */)arg0;
- (void)didPan:(id)arg0;

@end
