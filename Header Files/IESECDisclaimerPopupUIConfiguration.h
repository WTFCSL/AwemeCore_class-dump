//
//     Generated by private class-dump
//

@class UIColor, UIFont, UIImage;

@interface IESECDisclaimerPopupUIConfiguration : NSObject {
    BOOL _useCloseOnBottomStyle;
    UIFont *_titleFont;
    UIColor *_titleColor;
    double _titleTopMargin;
    UIFont *_contentFont;
    UIColor *_contentColor;
    UIColor *_contentLinkTextColor;
    double _confirmButtonCornerRadius;
    UIColor *_confirmButtonTextColor;
    UIColor *_confirmButtonBackgroudColor;
    double _containerCornerRadius;
    UIImage *_closeButtonImage;
    struct CGPoint { double x; double y; } _contentOffset;
    struct CGSize { double width; double height; } _containerSize;
    struct CGPoint { double x; double y; } _closeButtonTopRightOffset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _confirmButtonEdges;
}

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double titleTopMargin;
@property (retain, nonatomic) UIFont *contentFont;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (retain, nonatomic) UIColor *contentLinkTextColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } confirmButtonEdges;
@property (nonatomic) double confirmButtonCornerRadius;
@property (retain, nonatomic) UIColor *confirmButtonTextColor;
@property (retain, nonatomic) UIColor *confirmButtonBackgroudColor;
@property (nonatomic) double containerCornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGPoint { double x; double y; } closeButtonTopRightOffset;
@property (nonatomic) BOOL useCloseOnBottomStyle;
@property (retain, nonatomic) UIImage *closeButtonImage;

- (id)closeButtonImage;
- (void)setCloseButtonImage:(id)arg0;
- (void)setTitleTopMargin:(double)arg0;
- (id)contentFont;
- (void)setContentFont:(id)arg0;
- (id)confirmButtonTextColor;
- (id)contentLinkTextColor;
- (void)setupDefaultsValue;
- (id)getValueWithArray:(id)arg0 withIndex:(long long)arg1;
- (void)setConfirmButtonTextColor:(id)arg0;
- (void)setContentLinkTextColor:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })confirmButtonEdges;
- (void)setConfirmButtonEdges:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (double)confirmButtonCornerRadius;
- (void)setConfirmButtonCornerRadius:(double)arg0;
- (id)confirmButtonBackgroudColor;
- (void)setConfirmButtonBackgroudColor:(id)arg0;
- (struct CGPoint { double x0; double x1; })closeButtonTopRightOffset;
- (void)setCloseButtonTopRightOffset:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)useCloseOnBottomStyle;
- (void)setUseCloseOnBottomStyle:(BOOL)arg0;
- (id)contentColor;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (id)titleColor;
- (void)setContentColor:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (id)titleFont;
- (void)setTitleFont:(id)arg0;
- (double)containerCornerRadius;
- (void)setContainerCornerRadius:(double)arg0;
- (double)titleTopMargin;

@end