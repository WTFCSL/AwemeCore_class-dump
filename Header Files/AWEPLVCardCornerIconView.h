//
//     Generated by private class-dump
//

@class UILabel;

@interface AWEPLVCardCornerIconView : AWEGradientView {
    BOOL _shouldHideBezierCurve;
    unsigned long long _iconType;
    UILabel *_titleLabel;
}

@property (nonatomic) BOOL shouldHideBezierCurve;
@property (nonatomic) unsigned long long iconType;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)setShouldHideBezierCurve:(BOOL)arg0;
- (BOOL)shouldHideBezierCurve;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (unsigned long long)iconType;
- (void)setIconType:(unsigned long long)arg0;

@end
