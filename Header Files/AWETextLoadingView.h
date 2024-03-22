//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWETextLoadingView : UIView {
    UIImageView *_loadingLogo;
    UILabel *_label;
}

@property (retain, nonatomic) UIImageView *loadingLogo;
@property (retain, nonatomic) UILabel *label;

- (id)loadingLogo;
- (void)setLoadingLogo:(id)arg0;
- (void)stopAnimating;
- (void)startAnimating;
- (id)init;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)label;
- (void)setupUI;

@end
