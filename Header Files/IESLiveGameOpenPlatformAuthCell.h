//
//     Generated by private class-dump
//

@class UILabel, UISwitch, IESLiveOpenPlatformAuthModel;

@interface IESLiveGameOpenPlatformAuthCell : UITableViewCell {
    UILabel *_scopeLabel;
    UISwitch *_scopeSwitch;
    IESLiveOpenPlatformAuthModel *_model;
    id /* block */ _changeScopeAuthBlock;
}

@property (retain, nonatomic) UILabel *scopeLabel;
@property (retain, nonatomic) UISwitch *scopeSwitch;
@property (retain, nonatomic) IESLiveOpenPlatformAuthModel *model;
@property (copy, nonatomic) id /* block */ changeScopeAuthBlock;

- (void)setScopeLabel:(id)arg0;
- (void)setScopeSwitch:(id)arg0;
- (id)scopeSwitch;
- (void)scopeSwitchDidChange;
- (id /* block */)changeScopeAuthBlock;
- (void)setChangeScopeAuthBlock:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (void)setupUI;
- (id)scopeLabel;

@end
