//
//     Generated by private class-dump
//

@class UILabel;

@interface IESLiveImageLabelButton : IESLiveButton {
    BOOL _enlargeImageWhenHighlighted;
    BOOL _markLayoutComponentsIfNeeded;
    unsigned long long _style;
    double _space;
    UILabel *_dummyLabel;
}

@property (retain, nonatomic) UILabel *dummyLabel;
@property (nonatomic) BOOL markLayoutComponentsIfNeeded;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double space;
@property (nonatomic) BOOL enlargeImageWhenHighlighted;

+ (id)buttonWithInsetStyle:(unsigned long long)arg0 space:(double)arg1 shadow:(BOOL)arg2;
+ (id)buttonWithInsetStyle:(unsigned long long)arg0 space:(double)arg1;

- (void)setMarkLayoutComponentsIfNeeded:(BOOL)arg0;
- (BOOL)markLayoutComponentsIfNeeded;
- (void)layoutComponentsIfNeeded;
- (BOOL)enlargeImageWhenHighlighted;
- (void)addDummyLabelIfNeeded;
- (id)dummyLabel;
- (void)setEnlargeImageWhenHighlighted:(BOOL)arg0;
- (void)setDummyLabel:(id)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (double)space;
- (void)layoutComponents;
- (void)setSpace:(double)arg0;

@end
