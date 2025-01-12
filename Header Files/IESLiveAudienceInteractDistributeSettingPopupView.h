//
//     Generated by private class-dump
//

@class UILabel;

@interface IESLiveAudienceInteractDistributeSettingPopupView : UIView {
    int _option;
    long long _itemType;
    id /* block */ _trackCallback;
    id /* block */ _didUpdateDistributionOption;
    UILabel *_settingValueLabel;
}

@property (nonatomic) int option;
@property (retain, nonatomic) UILabel *settingValueLabel;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) id /* block */ trackCallback;
@property (copy, nonatomic) id /* block */ didUpdateDistributionOption;

- (void)setTrackCallback:(id /* block */)arg0;
- (id /* block */)trackCallback;
- (void)setSettingValueLabel:(id)arg0;
- (void)didClickSettingSwitch:(id)arg0;
- (id)settingValueLabel;
- (id /* block */)didUpdateDistributionOption;
- (void)setDidUpdateDistributionOption:(id /* block */)arg0;
- (void)setupWithSetting:(int)arg0 config:(id)arg1;
- (void)didClickBackBtn;
- (void)chooseSetting;
- (void)setupWithSetting:(int)arg0 prompts:(id)arg1;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (void)setOption:(int)arg0;
- (int)option;

@end
