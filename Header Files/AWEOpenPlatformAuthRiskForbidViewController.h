//
//     Generated by private class-dump
//

@class UIImageView, UILabel, DUXButton;

@interface AWEOpenPlatformAuthRiskForbidViewController : UIViewController {
    id /* block */ _willCloseVCBlock;
    UIImageView *_forbidIcon;
    UILabel *_riskTitle;
    UILabel *_riskDesc;
    DUXButton *_knowButton;
}

@property (retain, nonatomic) UIImageView *forbidIcon;
@property (retain, nonatomic) UILabel *riskTitle;
@property (retain, nonatomic) UILabel *riskDesc;
@property (retain, nonatomic) DUXButton *knowButton;
@property (copy, nonatomic) id /* block */ willCloseVCBlock;

- (id)knowButton;
- (void)setKnowButton:(id)arg0;
- (void)setupCustomNavigationBar;
- (id)forbidIcon;
- (id)riskTitle;
- (id)riskDesc;
- (void)leftCloseTapped;
- (id /* block */)willCloseVCBlock;
- (void)knowButtonTouch;
- (void)setWillCloseVCBlock:(id /* block */)arg0;
- (void)setForbidIcon:(id)arg0;
- (void)setRiskTitle:(id)arg0;
- (void)setRiskDesc:(id)arg0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setupUI;

@end