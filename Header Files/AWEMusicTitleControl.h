//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface AWEMusicTitleControl : UIControl {
    UILabel *_aweTitleLabel;
    UIView *_backgroundColorView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _paddings;
}

@property (retain, nonatomic) UILabel *aweTitleLabel;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddings;

- (id)aweTitleLabel;
- (void)setPaddings:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddings;
- (void)setAweTitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)backgroundColorView;
- (void)setBackgroundColorView:(id)arg0;

@end
