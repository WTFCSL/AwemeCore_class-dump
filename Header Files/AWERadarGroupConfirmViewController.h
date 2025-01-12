//
//     Generated by private class-dump
//

@class UIView, NSString, NSTimer, AWERadarNearbyItemListViewController, AFDButton, AWENavigationBar, UIImageView, AWERadarGroupEnterCommandView, NSDictionary, UILabel;
@protocol AWEIMFaceToFaceConfigProtocol;

@interface AWERadarGroupConfirmViewController : UIViewController {
    BOOL _isCommandInvalid;
    BOOL _willOpenClickCreateGroupButton;
    BOOL _hasExit;
    BOOL _isExited;
    BOOL _hasPeople;
    BOOL _delayLocationRequest;
    long long _enterType;
    NSDictionary *_routerParam;
    NSString *_groupCommad;
    NSString *_groupId;
    AWENavigationBar *_navigationBar;
    UIView *_hintView;
    UILabel *_hintLabel;
    AWERadarGroupEnterCommandView *_commandView;
    AWERadarNearbyItemListViewController *_userListController;
    AFDButton *_enterButton;
    long long _radarUserListCount;
    NSTimer *_uploadLocationTimer;
    id<AWEIMFaceToFaceConfigProtocol> _materialInfo;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_topBackgroundImageView;
    NSString *_leavePageEventName;
}

@property (retain, nonatomic) NSString *groupCommad;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) AWENavigationBar *navigationBar;
@property (retain, nonatomic) UIView *hintView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWERadarGroupEnterCommandView *commandView;
@property (retain, nonatomic) AWERadarNearbyItemListViewController *userListController;
@property (retain, nonatomic) AFDButton *enterButton;
@property (nonatomic) BOOL isCommandInvalid;
@property (nonatomic) BOOL willOpenClickCreateGroupButton;
@property (nonatomic) BOOL hasExit;
@property (nonatomic) long long radarUserListCount;
@property (retain, nonatomic) NSTimer *uploadLocationTimer;
@property (nonatomic) BOOL isExited;
@property (nonatomic) BOOL hasPeople;
@property (retain, nonatomic) id<AWEIMFaceToFaceConfigProtocol> materialInfo;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *topBackgroundImageView;
@property (nonatomic) BOOL delayLocationRequest;
@property (copy, nonatomic) NSString *leavePageEventName;
@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSDictionary *routerParam;

- (void)awe_onReturnButtonClicked:(id)arg0;
- (id)routerParam;
- (void)p_setupUI;
- (void)setRouterParam:(id)arg0;
- (void)setHintView:(id)arg0;
- (id)enterButton;
- (void)setEnterButton:(id)arg0;
- (void)p_stopTimer;
- (BOOL)hasExit;
- (void)setHasExit:(BOOL)arg0;
- (void)p_startTimer;
- (id)commandView;
- (void)setCommandView:(id)arg0;
- (BOOL)isSpringFestivalActive;
- (id)materialInfo;
- (void)setMaterialInfo:(id)arg0;
- (void)setIsExited:(BOOL)arg0;
- (BOOL)isExited;
- (void)setTopBackgroundImageView:(id)arg0;
- (id)topBackgroundImageView;
- (void)setupCommandView;
- (id)initWithGroupCommand:(id)arg0 andGroupId:(id)arg1;
- (void)__trackAPIEventResCode:(long long)arg0 duration:(long long)arg1 apiName:(id)arg2;
- (void)setHasPeople:(BOOL)arg0;
- (BOOL)delayLocationRequest;
- (void)p_removeGroupCommandVC;
- (void)p_updateUserList:(id)arg0 withNoticeList:(id)arg1;
- (void)p_dismissEvent;
- (void)p_startHeartBeat:(BOOL)arg0;
- (BOOL)willOpenClickCreateGroupButton;
- (void)p_removeSelfAndActivityCreateGroupVC;
- (void)p_removeSelfVC;
- (id)leavePageEventName;
- (void)trackLeaveViewMethod:(id)arg0;
- (void)p_exitAWERadarBuildGroup;
- (void)p_startHeartBeat;
- (id)userListController;
- (long long)radarUserListCount;
- (id)groupCommad;
- (void)setIsCommandInvalid:(BOOL)arg0;
- (void)setRadarUserListCount:(long long)arg0;
- (id)uploadLocationTimer;
- (void)p_setHintViewInvalid;
- (void)p_uploadLocation;
- (void)setUploadLocationTimer:(id)arg0;
- (BOOL)isCommandInvalid;
- (void)trackGroupEnterClick;
- (void)setLeavePageEventName:(id)arg0;
- (void)p_trackAddFaceToFaceGroupWithMemberStatus:(BOOL)arg0;
- (void)trackGroupCreateSucces;
- (void)trackCreateGroupWithRespModel:(id)arg0;
- (void)setWillOpenClickCreateGroupButton:(BOOL)arg0;
- (void)trackEnterChat;
- (id)p_getRootVC;
- (void)setGroupCommad:(id)arg0;
- (void)setUserListController:(id)arg0;
- (void)setDelayLocationRequest:(BOOL)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (id)titleLabel;
- (long long)preferredStatusBarStyle;
- (id)groupId;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (void)enterGroup;
- (long long)enterType;
- (void)setEnterType:(long long)arg0;
- (BOOL)hasPeople;
- (id)hintView;
- (void)p_addObservers;

@end
