//
//     Generated by private class-dump
//

@class UIButton, UIView;

@interface AWEHGRankListRemindView : UIView {
    UIView *_contentView;
    UIButton *_knownButton;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *knownButton;

- (void)onCancelButtonTap:(id)arg0;
- (id)knownButton;
- (void)setKnownButton:(id)arg0;
- (void)setupTitleLabelView;
- (void)setupKnownButton;
- (void)onKnownButtonTap:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)setupCancelButton;
- (void)setupImageView;

@end