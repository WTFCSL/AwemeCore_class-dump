//
//     Generated by private class-dump
//

@class NSString, UILabel, UIPanGestureRecognizer, UIView;

@interface IESLiveDoubleDirectionSlider : UIView <IESLiveSliderProtocol> {
    BOOL _showIndicator;
    id /* block */ _valueChangedBlock;
    id /* block */ _changeEndBlock;
    UIView *_thumbView;
    UIView *_zeroPoint;
    UIView *_defaultPoint;
    UIView *_backSlider;
    UIPanGestureRecognizer *_pan;
    UIView *_trackView;
    UILabel *_numberLabel;
    double _displayValue;
}

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *zeroPoint;
@property (retain, nonatomic) UIView *defaultPoint;
@property (retain, nonatomic) UIView *backSlider;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (retain, nonatomic) UIView *trackView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) double displayValue;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (copy, nonatomic) id /* block */ changeEndBlock;
@property (nonatomic) BOOL showIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackView;
- (void)setTrackView:(id)arg0;
- (void)setSliderHeight:(double)arg0;
- (void)setShowIndicator:(BOOL)arg0;
- (void)setSliderItemWidth:(double)arg0;
- (void)setChangeEndBlock:(id /* block */)arg0;
- (void)setDefaultDisplayValue:(long long)arg0;
- (void)buildGesture;
- (void)updateSubviewPosition;
- (void)updateDisplayNumber:(BOOL)arg0;
- (id)defaultPoint;
- (void)setDefaultPoint:(id)arg0;
- (id)backSlider;
- (void)setBackSlider:(id)arg0;
- (id /* block */)changeEndBlock;
- (void)setZeroPoint:(id)arg0;
- (id)pan;
- (BOOL)showIndicator;
- (void).cxx_destruct;
- (void)setMaximumTrackTintColor:(id)arg0;
- (id)thumbView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMinimumTrackTintColor:(id)arg0;
- (void)setValue:(long long)arg0;
- (void)setPan:(id)arg0;
- (double)displayValue;
- (void)setDisplayValue:(double)arg0;
- (void)setThumbView:(id)arg0;
- (id)zeroPoint;
- (void)buildView;
- (id /* block */)valueChangedBlock;
- (void)setValueChangedBlock:(id /* block */)arg0;
- (void)didPan:(id)arg0;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;

@end