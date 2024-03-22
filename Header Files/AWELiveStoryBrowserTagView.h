//
//     Generated by private class-dump
//

@class UILabel, CAGradientLayer, NSString;

@interface AWELiveStoryBrowserTagView : UIView <AWELiveStoryBrowserTagViewProtocol> {
    UILabel *_tagLabel;
    CAGradientLayer *_tagLayer;
    double _fontSize;
    double _borderWidth;
    struct CGColor { } *_borderColor;
    struct CGPoint { double x; double y; } _labelPadding;
}

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) CAGradientLayer *tagLayer;
@property (nonatomic) double fontSize;
@property (nonatomic) struct CGPoint { double x; double y; } labelPadding;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct CGColor { } *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 fontSize:(double)arg1 labelPadding:(struct CGPoint { double x0; double x1; })arg2;
- (id)tagLayer;
- (void)updateFrame:(id)arg0;
- (void)setTagLayer:(id)arg0;
- (void)setlabelPadding:(struct CGPoint { double x0; double x1; })arg0;
- (double)borderWidth;
- (void).cxx_destruct;
- (struct CGColor { } *)borderColor;
- (void)setFontSize:(double)arg0;
- (void)setBorderColor:(struct CGColor { } *)arg0;
- (double)fontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderWidth:(double)arg0;
- (void)layoutSubviews;
- (void)setGradientColor:(id)arg0;
- (void)setLabelPadding:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })labelPadding;

@end
