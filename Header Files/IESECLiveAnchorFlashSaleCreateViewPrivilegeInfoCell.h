//
//     Generated by private class-dump
//

@class UILabel, IESECLiveAnchorCreateFlashSalePrivilegeInfoModel, IESECButton;

@interface IESECLiveAnchorFlashSaleCreateViewPrivilegeInfoCell : IESECLiveAnchorFlashSaleCreateViewCell {
    UILabel *_privilegeNameLabel;
    IESECButton *_redSelectButton;
    UILabel *_subMsgLabel;
    IESECLiveAnchorCreateFlashSalePrivilegeInfoModel *_model;
}

@property (retain, nonatomic) UILabel *privilegeNameLabel;
@property (retain, nonatomic) IESECButton *redSelectButton;
@property (retain, nonatomic) UILabel *subMsgLabel;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSalePrivilegeInfoModel *model;

- (void)setItem:(id)arg0 showWarn:(BOOL)arg1;
- (void)p_setupCustomUI;
- (id)privilegeNameLabel;
- (id)redSelectButton;
- (id)subMsgLabel;
- (void)handleTapRedButton:(id)arg0;
- (void)setPrivilegeNameLabel:(id)arg0;
- (void)setRedSelectButton:(id)arg0;
- (void)setSubMsgLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;

@end
