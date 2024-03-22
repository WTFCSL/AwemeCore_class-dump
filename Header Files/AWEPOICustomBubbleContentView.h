//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEPOICustomBubbleContentView : UIView {
    UILabel *_leftLabel;
    UIView *_separateView;
    UILabel *_rightLabel;
    UIImageView *_arrowImageView;
    double _width;
    double _height;
}

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (void)setSeparateView:(id)arg0;
- (id)separateView;
- (id)init;
- (void).cxx_destruct;
- (double)height;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setWidth:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setupUI;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:(id)arg0;
- (void)setRightLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
