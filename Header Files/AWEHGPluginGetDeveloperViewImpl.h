//
//     Generated by private class-dump
//

@class UIButton, HGUniqueID, NSString;

@interface AWEHGPluginGetDeveloperViewImpl : NSObject <HGAwemeGetDeveloperViewPluginDelegate, UIGestureRecognizerDelegate> {
    BOOL _isMorePanelUIStype;
    UIButton *_avatarButton;
    UIButton *_followButton;
    HGUniqueID *_uniqueID;
}

@property (weak, nonatomic) UIButton *avatarButton;
@property (weak, nonatomic) UIButton *followButton;
@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (nonatomic) BOOL isMorePanelUIStype;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)hg_getDeveloperView:(id)arg0;
- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (void)setIsMorePanelUIStype:(BOOL)arg0;
- (BOOL)isMorePanelUIStype;
- (void)onDevButtonTap:(id)arg0;
- (void)onFollowButtonTap:(id)arg0;
- (void)changeFollowButton:(BOOL)arg0 forButton:(id)arg1;
- (void)changeFollowButtonNewStyle:(BOOL)arg0 forButton:(id)arg1;
- (void)changeFollowButtonOldStyle:(BOOL)arg0 forButton:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id)avatarButton;
- (void)setAvatarButton:(id)arg0;

@end
