//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWELiveShelfNetErrorRetryButton;

@interface AWELiveShelfNetErrorView : UIView {
    AWELiveShelfNetErrorRetryButton *_retryButton;
    UIImageView *_netErrorImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property (retain, nonatomic) UIImageView *netErrorImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWELiveShelfNetErrorRetryButton *retryButton;

- (void)configErrorText:(id)arg0;
- (id)netErrorImageView;
- (void)setNetErrorImageView:(id)arg0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)updateUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end
