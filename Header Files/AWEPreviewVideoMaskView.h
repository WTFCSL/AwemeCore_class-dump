//
//     Generated by private class-dump
//

@class UIImageView, UIVisualEffectView, UILabel, UIView;

@interface AWEPreviewVideoMaskView : UIView {
    UIView *_containerView;
    UIImageView *_tipImageView;
    UILabel *_tipLabel;
    UILabel *_subTipLabel;
    UIVisualEffectView *_effectView;
    UIImageView *_coverImageView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImageView *coverImageView;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setTipImageView:(id)arg0;
- (id)tipImageView;
- (void)setTipImage:(id)arg0;
- (id)subTipLabel;
- (void)setSubTipLabel:(id)arg0;
- (void)setContainerCenterY:(double)arg0;
- (void)addEffectiveView;
- (void)removeEffectView;
- (void)setSubTipContent:(id)arg0;
- (void)hiddenCoverImage;
- (void)showCoverImageWithImage:(id)arg0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setTipImageWithURLArray:(id)arg0;
- (void)setTipImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)showCoverImageWithURLArray:(id)arg0;
- (void)updateCoverImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (id)effectView;
- (void).cxx_destruct;
- (void)setTipContent:(id)arg0;
- (void)setContainerView:(id)arg0;
- (void)setEffectView:(id)arg0;
- (id)containerView;
- (void)layoutSubviews;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupUI;
- (void)setTopMargin:(double)arg0;

@end
