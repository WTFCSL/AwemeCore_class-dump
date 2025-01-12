//
//     Generated by private class-dump
//

@class UIColor, MASConstraint, CAShapeLayer, UIImage, CALayer, UILabel, UIImageView;
@protocol DVESBaseSliderProtocol;

@interface DVEBaseSlider : UIView {
    BOOL _showTitleWhenSliding;
    float _step;
    float _minimumValue;
    float _maximumValue;
    float _horizontalInset;
    float _defaultValue;
    float _value;
    CALayer *_centralLine;
    double _sliderHeight;
    id<DVESBaseSliderProtocol> _delegate;
    UIImage *_imageCursor;
    UIColor *_silderStrokeColor;
    UIColor *_centralLineColor;
    UIColor *_backLayerBackgroundColor;
    double _textOffset;
    UILabel *_label;
    CAShapeLayer *_tintLayer;
    CALayer *_backLayer;
    UIImageView *_cursorView;
    id /* block */ _sliderAction;
    double _radius;
    UIColor *_strokeColor;
    MASConstraint *_cursorLeftConstraint;
}

@property (nonatomic) float step;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) float horizontalInset;
@property (retain, nonatomic) CALayer *centralLine;
@property (nonatomic) double sliderHeight;
@property (nonatomic) BOOL showTitleWhenSliding;
@property (weak, nonatomic) id<DVESBaseSliderProtocol> delegate;
@property (retain, nonatomic) UIImage *imageCursor;
@property (nonatomic) float defaultValue;
@property (retain, nonatomic) UIColor *silderStrokeColor;
@property (retain, nonatomic) UIColor *centralLineColor;
@property (retain, nonatomic) UIColor *backLayerBackgroundColor;
@property (nonatomic) float value;
@property (nonatomic) double textOffset;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CAShapeLayer *tintLayer;
@property (retain, nonatomic) CALayer *backLayer;
@property (retain, nonatomic) UIImageView *cursorView;
@property (copy, nonatomic) id /* block */ sliderAction;
@property (nonatomic) double radius;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) MASConstraint *cursorLeftConstraint;

+ (id)sliderStroke;

- (id)cursorView;
- (void)setCursorView:(id)arg0;
- (void)buildLayout;
- (id)initWithStep:(float)arg0 defaultValue:(float)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)backLayer;
- (id)tintLayer;
- (id)centralLine;
- (void)updateCentralLine;
- (void)resetValueView;
- (id /* block */)sliderAction;
- (void)sliderValueChangedTouches:(id)arg0 end:(BOOL)arg1;
- (id)imageCursor;
- (void)setCentralLine:(id)arg0;
- (id)silderStrokeColor;
- (id)centralLineColor;
- (id)backLayerBackgroundColor;
- (void)setTintLayer:(id)arg0;
- (void)setBackLayer:(id)arg0;
- (void)setSliderAction:(id /* block */)arg0;
- (id)cursorLeftConstraint;
- (void)setCursorLeftConstraint:(id)arg0;
- (void)setSilderStrokeColor:(id)arg0;
- (void)setBackLayerBackgroundColor:(id)arg0;
- (void)setSliderHeight:(double)arg0;
- (void)setCentralLineColor:(id)arg0;
- (double)sliderHeight;
- (void)setImageCursor:(id)arg0;
- (BOOL)showTitleWhenSliding;
- (void)setShowTitleWhenSliding:(BOOL)arg0;
- (float)step;
- (void)setDefaultValue:(float)arg0;
- (float)defaultValue;
- (void)setStep:(float)arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (float)value;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (double)radius;
- (void)setLabel:(id)arg0;
- (float)maximumValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (float)minimumValue;
- (void)setStrokeColor:(id)arg0;
- (void)setMaximumValue:(float)arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)delegate;
- (void)setTextOffset:(double)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (double)textOffset;
- (void)setRadius:(double)arg0;
- (id)label;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setValue:(float)arg0;
- (void)setMinimumValue:(float)arg0;
- (void)updateLabelFrame;
- (void)setHorizontalInset:(float)arg0;
- (float)horizontalInset;

@end
