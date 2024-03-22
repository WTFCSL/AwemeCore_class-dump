//
//     Generated by private class-dump
//

@class AWENonageVerifyViewModel, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWENonageVerifyViewDelegate;

@interface AWENonageVerifyPhoneView : UIView <AWENonageVerifyView> {
    id<AWENonageVerifyViewDelegate> _delegate;
    AWENonageVerifyViewModel *_viewModel;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_nonageButton;
    UIButton *_adultButton;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *nonageButton;
@property (retain, nonatomic) UIButton *adultButton;
@property (weak, nonatomic) id<AWENonageVerifyViewDelegate> delegate;
@property (retain, nonatomic) AWENonageVerifyViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (id)nonageButton;
- (id)adultButton;
- (void)clickNonageButton:(id)arg0;
- (void)clickAdultButton:(id)arg0;
- (void)setNonageButton:(id)arg0;
- (void)setAdultButton:(id)arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)setImageView:(id)arg0;
- (id)contentView;
- (id)delegate;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end