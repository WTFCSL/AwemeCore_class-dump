//
//     Generated by private class-dump
//

@class BDPUniqueID, NSString, UILabel, UIView, UIButton;

@interface BDPAuthFeedCardNotifyDetailViewController : UIViewController {
    id /* block */ _feedDetailAnimationBlock;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIButton *_backButton;
    UIView *_feedImageView;
    NSString *_lottieFileString;
    UILabel *_descLabel;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *feedImageView;
@property (copy, nonatomic) NSString *lottieFileString;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ feedDetailAnimationBlock;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)showViewControllerCompletion:(id /* block */)arg0;
- (void)backButtonClickClose;
- (void)setFeedImageView:(id)arg0;
- (id)feedImageView;
- (void)setLottieFileString:(id)arg0;
- (id)lottieFileString;
- (id /* block */)feedDetailAnimationBlock;
- (id)initWithUniqueId:(id)arg0;
- (void)setFeedDetailAnimationBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)titleLabel;
- (id)contentView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setContentView:(id)arg0;
- (void)setupUI;

@end
