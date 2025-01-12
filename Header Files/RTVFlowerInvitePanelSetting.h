//
//     Generated by private class-dump
//

@class NSString;

@interface RTVFlowerInvitePanelSetting : JSONModel <AWEIMRTVInviteFriendPresenterContext> {
    NSString *_navBarTitle;
    NSString *_buttonTitle;
    NSString *_buttonBgColor;
    NSString *_buttonTitleColor;
}

@property (readonly, copy, nonatomic) NSString *navBarTitle;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *buttonBgColor;
@property (readonly, copy, nonatomic) NSString *buttonTitleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *navBarTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonBgColor;
@property (copy, nonatomic) NSString *buttonTitleColor;

+ (id)keyMapper;

- (void)setButtonBgColor:(id)arg0;
- (id)buttonBgColor;
- (void).cxx_destruct;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg0;
- (void)setNavBarTitle:(id)arg0;
- (void)setButtonTitleColor:(id)arg0;
- (id)buttonTitleColor;
- (id)navBarTitle;

@end
