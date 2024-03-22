//
//     Generated by private class-dump
//

@class UIImageView, AWEMixVideoModel, UILabel, UIButton;

@interface AWERelatedVideoMixVideoHeadView : UIView {
    id /* block */ _closeButtonClick;
    UIImageView *_mixImageView;
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_hintIcon;
    UIButton *_closeButton;
    AWEMixVideoModel *_mixVideoModel;
}

@property (retain, nonatomic) UIImageView *mixImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *hintIcon;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEMixVideoModel *mixVideoModel;
@property (copy, nonatomic) id /* block */ closeButtonClick;

- (id /* block */)closeButtonClick;
- (id)mixImageView;
- (void)setMixImageView:(id)arg0;
- (id)mixVideoModel;
- (void)setMixVideoModel:(id)arg0;
- (id)hintIcon;
- (void)updateMixInfo:(id)arg0;
- (id)attributedStringWithTitleLabel:(id)arg0;
- (void)hintIconTapped:(id)arg0;
- (double)getMixVideoHeadViewHeight;
- (void)setCloseButtonClick:(id /* block */)arg0;
- (void)setHintIcon:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;
- (void)closeButtonTapped;

@end
