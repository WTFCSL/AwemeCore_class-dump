//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSNumber;

@interface AWEKaraokeEffectVocalAlignItemView : AWEKaraokeEffectEditItemView {
    long long _minOffset;
    long long _maxOffset;
    long long _bigScaleCount;
    long long _smallScaleCount;
    UIImageView *_leftArrow;
    UIImageView *_rightArrow;
    UIImageView *_scaleView;
    UILabel *_noteLabel;
    UIImageView *_scaleTag;
    NSNumber *_value;
    double _scaleWidth;
    struct CGSize { double width; double height; } _lastSize;
}

@property (retain, nonatomic) UIImageView *leftArrow;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *scaleView;
@property (retain, nonatomic) UILabel *noteLabel;
@property (retain, nonatomic) UIImageView *scaleTag;
@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) double scaleWidth;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) long long minOffset;
@property (nonatomic) long long maxOffset;
@property (nonatomic) long long bigScaleCount;
@property (nonatomic) long long smallScaleCount;

- (void)setupContentUI;
- (void)setRightArrow:(id)arg0;
- (void)setLeftArrow:(id)arg0;
- (double)scaleWidth;
- (void)setScaleWidth:(double)arg0;
- (id)noteLabel;
- (void)setNoteLabel:(id)arg0;
- (void)changeLeftArrowClicked;
- (void)changeRightArrowClicked;
- (void)drawScaleImage;
- (void)drawSliderImage;
- (void)configScaleTag:(id)arg0 changed:(BOOL)arg1;
- (long long)bigScaleCount;
- (long long)smallScaleCount;
- (id)scaleTag;
- (void)positionDidChanged:(id)arg0;
- (void)setScaleTag:(id)arg0;
- (void)setBigScaleCount:(long long)arg0;
- (void)setSmallScaleCount:(long long)arg0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (id)value;
- (void)setScaleView:(id)arg0;
- (void)layoutSubviews;
- (void)setValue:(id)arg0;
- (id)scaleView;
- (void)updateValue:(id)arg0;
- (struct CGSize { double x0; double x1; })lastSize;
- (void)setLastSize:(struct CGSize { double x0; double x1; })arg0;
- (id)rightArrow;
- (id)leftArrow;
- (long long)minOffset;
- (void)setMinOffset:(long long)arg0;
- (long long)maxOffset;
- (void)setMaxOffset:(long long)arg0;

@end
