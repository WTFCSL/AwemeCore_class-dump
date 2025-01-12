//
//     Generated by private class-dump
//

@class UILabel, UIImageView, BDPScreenCastHelpCircleView;

@interface BDPScreenCastHelpViewController : BDPBusinessXScreenViewController {
    long long _originOrientation;
    UILabel *_firstStepLabel;
    UILabel *_secondStepLabel;
    UILabel *_connectTipLabel;
    UILabel *_locateTipLabel;
    UILabel *_subTipLabel;
    BDPScreenCastHelpCircleView *_firstCircleView;
    BDPScreenCastHelpCircleView *_secondCircleView;
    UIImageView *_connectTipImageView;
    UIImageView *_locateTipImageView;
}

@property (nonatomic) long long originOrientation;

- (void)setOriginOrientation:(long long)arg0;
- (long long)originOrientation;
- (void)imageView:(id)arg0 setImageFromRemoteWithName:(id)arg1;
- (id)initWithUniqueID:(id)arg0 orientation:(long long)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)setupData;
- (void)updateNavigationTitle;

@end
