//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface AWETeenDiscoverAgeSettingView : UIView <AWEUserMessage, AWETeenUserMessage> {
    id /* block */ _ageLabelClickedBlock;
    UILabel *_titleLabel;
    UIImageView *_arrow;
    UIImageView *_avatar;
    UITapGestureRecognizer *_tap;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (copy, nonatomic) id /* block */ ageLabelClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishUpdateAwemeUser;
- (void)awe_themeDidChange:(long long)arg0;
- (void)setArrow:(id)arg0;
- (id)arrow;
- (void)p_addGestureRecognizer;
- (void)p_renderUI;
- (void)updateDiscoverUserInfo;
- (void)p_bindNotification;
- (void)p_setTitleAndIconColor;
- (void)tapClick:(id)arg0;
- (id /* block */)ageLabelClickedBlock;
- (void)p_ageSettingFinished;
- (void)setAgeLabelClickedBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)avatar;
- (void)setAvatar:(id)arg0;
- (id)tap;
- (void)setTap:(id)arg0;

@end