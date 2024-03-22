//
//     Generated by private class-dump
//

@class CJPayLoadingStyleInfo, UILabel, UIView, BDImageView;

@interface CJPayDouyinStyleLoadingView : UIView {
    CJPayLoadingStyleInfo *_loadingStyleInfo;
    UIView *_containerView;
    UIView *_backgroundView;
    UIView *_logoFieldView;
    BDImageView *_logoPreGifView;
    BDImageView *_logoCompleteGifView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *logoFieldView;
@property (retain, nonatomic) BDImageView *logoPreGifView;
@property (retain, nonatomic) BDImageView *logoCompleteGifView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;

+ (id)sharedView;

- (void)showLoadingWithTitle:(id)arg0;
- (void)p_setupUI;
- (id)loadingStyleInfo;
- (void)setLoadingStyleInfo:(id)arg0;
- (id)repeatGifUrl;
- (id)logoFieldView;
- (id)logoPreGifView;
- (id)logoCompleteGifView;
- (void)setLogoFieldView:(id)arg0;
- (void)setLogoPreGifView:(id)arg0;
- (void)setLogoCompleteGifView:(id)arg0;
- (void)dismiss;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setLoadingTitle:(id)arg0;
- (void)showLoading;

@end