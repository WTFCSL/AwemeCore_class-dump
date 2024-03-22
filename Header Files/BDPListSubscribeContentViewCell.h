//
//     Generated by private class-dump
//

@class BDPCheckBox, UISwitch, UILabel;

@interface BDPListSubscribeContentViewCell : UITableViewCell {
    BOOL _useNewStyle;
    BDPCheckBox *_checkBox;
    UISwitch *_openSwitch;
    UILabel *_titleLabel;
    id /* block */ _handler;
}

@property (nonatomic) BOOL useNewStyle;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UISwitch *openSwitch;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ handler;

- (BOOL)useNewStyle;
- (void)setUseNewStyle:(BOOL)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (void)setupCheckBox;
- (void)onCheckBoxTap:(id)arg0;
- (id)openSwitch;
- (void)setOpenSwitch:(id)arg0;
- (void)setupSwitch;
- (void)openSwitchClicked:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)setupTitleLabel;

@end
