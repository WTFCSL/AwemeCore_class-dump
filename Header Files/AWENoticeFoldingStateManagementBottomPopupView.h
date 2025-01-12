//
//     Generated by private class-dump
//

@class AWEIMNoticeFoldStructModel, UIImageView, UISwitch, UILabel, UIView;

@interface AWENoticeFoldingStateManagementBottomPopupView : UIView {
    AWEIMNoticeFoldStructModel *_model;
    id /* block */ _closeBlock;
    UIImageView *_closeView;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UIView *_foldingStateView;
    UILabel *_hintLabel;
    UISwitch *_foldingStateSwitch;
}

@property (retain, nonatomic) AWEIMNoticeFoldStructModel *model;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *foldingStateView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UISwitch *foldingStateSwitch;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)p_configContents;
- (id)foldingStateSwitch;
- (id)foldingStateView;
- (void)onCloseViewTap;
- (id)colorInLightTheme:(id)arg0;
- (id)initWithModel:(id)arg0 closeBlock:(id /* block */)arg1;
- (void)setFoldingStateView:(id)arg0;
- (void)setFoldingStateSwitch:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)model;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (int)avatarWidth;

@end
