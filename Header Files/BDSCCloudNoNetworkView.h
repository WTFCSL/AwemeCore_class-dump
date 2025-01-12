//
//     Generated by private class-dump
//

@class UILabel, UIButton;

@interface BDSCCloudNoNetworkView : UIView {
    UILabel *_tipLabel;
    UILabel *_checkLabel;
    UIButton *_settingsButton;
    id /* block */ _actionButtonBlock;
}

@property (copy, nonatomic) id /* block */ actionButtonBlock;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *checkLabel;
@property (retain, nonatomic) UIButton *settingsButton;

- (void)setCheckLabel:(id)arg0;
- (id)checkLabel;
- (void)setActionButtonBlock:(id /* block */)arg0;
- (id /* block */)actionButtonBlock;
- (void)settingButtonClicked:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithActionBlock:(id /* block */)arg0;
- (id)settingsButton;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setSettingsButton:(id)arg0;

@end
