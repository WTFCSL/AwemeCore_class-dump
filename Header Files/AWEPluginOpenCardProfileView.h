//
//     Generated by private class-dump
//

@class UIView, NSString, AWEUserModel, UIImageView, UIButton, BDPUniqueID, NSMutableArray, NSLayoutConstraint, AWEBDPCloseBtn, UILabel;

@interface AWEPluginOpenCardProfileView : UIView <UIGestureRecognizerDelegate> {
    NSString *_info;
    NSString *_functionFrom;
    BDPUniqueID *_uniqueID;
    id /* block */ _stateChangeBlock;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_commentLabel;
    UIView *_tagView;
    UIButton *_homepageBtn;
    UIButton *_followBtn;
    AWEBDPCloseBtn *_closeBtn;
    NSLayoutConstraint *_userViewTopCons;
    NSLayoutConstraint *_userViewBottomCons;
    NSLayoutConstraint *_userViewCenterCons;
    NSMutableArray *_heightConsArr;
    AWEUserModel *_currentUser;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UIButton *homepageBtn;
@property (retain, nonatomic) UIButton *followBtn;
@property (retain, nonatomic) AWEBDPCloseBtn *closeBtn;
@property (retain, nonatomic) NSLayoutConstraint *userViewTopCons;
@property (retain, nonatomic) NSLayoutConstraint *userViewBottomCons;
@property (retain, nonatomic) NSLayoutConstraint *userViewCenterCons;
@property (retain, nonatomic) NSMutableArray *heightConsArr;
@property (retain, nonatomic) AWEUserModel *currentUser;
@property (copy, nonatomic) NSString *info;
@property (retain, nonatomic) NSString *functionFrom;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ stateChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)onDimmingViewTap:(id)arg0;
- (id)followBtn;
- (void)setFollowBtn:(id)arg0;
- (void)setupCorner;
- (void)onTapBtn:(id)arg0;
- (void)event:(id)arg0 uniqueID:(id)arg1 param:(id)arg2;
- (void)setFunctionFrom:(id)arg0;
- (id)functionFrom;
- (void)setInfo:(id)arg0 withViewController:(id)arg1;
- (id)homepageBtn;
- (void)setHeightConsArr:(id)arg0;
- (id)heightConsArr;
- (void)setUserViewTopCons:(id)arg0;
- (void)setUserViewBottomCons:(id)arg0;
- (id)userViewTopCons;
- (id)userViewBottomCons;
- (void)showUserView:(BOOL)arg0;
- (void)showFollowBtn:(BOOL)arg0;
- (id)getTagLabel;
- (void)onGameExit;
- (void)setHomepageBtn:(id)arg0;
- (id)userViewCenterCons;
- (void)setUserViewCenterCons:(id)arg0;
- (void)prepareLayout;
- (id)init;
- (void)setAvatarView:(id)arg0;
- (id)info;
- (id)avatarView;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)setInfo:(id)arg0;
- (id)nameLabel;
- (id)currentUser;
- (void)setCurrentUser:(id)arg0;
- (void)dealloc;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;
- (id)commentLabel;
- (void)setCommentLabel:(id)arg0;
- (void)showFromViewController:(id)arg0;
- (id /* block */)stateChangeBlock;
- (void)setStateChangeBlock:(id /* block */)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
