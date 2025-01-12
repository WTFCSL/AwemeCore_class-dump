//
//     Generated by private class-dump
//

@class AWEConcernBellPushSettingPanelPermissionView, AWEConcernBellPushSettingPanelSectionView, AWEUserModel, NSString, UILabel, UIScrollView, UIButton;
@protocol AFDModalViewHelperProtocol;

@interface AWEConcernBellPushSettingPanelViewController : UIViewController <AWEPanelTransitionWithBackground, AWEConcernBellPushSettingPanelSectionViewDelegate> {
    BOOL _needCheckPermissionWhenApplicationDidBecomeActive;
    id<AFDModalViewHelperProtocol> _halfModalViewHelper;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    AWEConcernBellPushSettingPanelPermissionView *_systemPermissionView;
    AWEConcernBellPushSettingPanelSectionView *_videoSectionView;
    AWEConcernBellPushSettingPanelSectionView *_liveSectionView;
    UIScrollView *_scrollView;
    long long _userFollowStatus;
    AWEUserModel *_toUser;
    id /* block */ _viewDidDisappear;
    NSString *_trackParaEnterFrom;
    NSString *_trackParaEnterMethod;
    long long _isGuide;
}

@property (retain, nonatomic) id<AFDModalViewHelperProtocol> halfModalViewHelper;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEConcernBellPushSettingPanelPermissionView *systemPermissionView;
@property (retain, nonatomic) AWEConcernBellPushSettingPanelSectionView *videoSectionView;
@property (retain, nonatomic) AWEConcernBellPushSettingPanelSectionView *liveSectionView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long userFollowStatus;
@property (retain, nonatomic) AWEUserModel *toUser;
@property (nonatomic) BOOL needCheckPermissionWhenApplicationDidBecomeActive;
@property (copy, nonatomic) id /* block */ viewDidDisappear;
@property (copy, nonatomic) NSString *trackParaEnterFrom;
@property (copy, nonatomic) NSString *trackParaEnterMethod;
@property (nonatomic) long long isGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (BOOL)wantsDimmingTransitionBackground;
- (id)aweui_emptyPageBelowView;
- (void)setToUser:(id)arg0;
- (id)initWithToUser:(id)arg0 isGuide:(long long)arg1 trackParaEnterFrom:(id)arg2 trackParaEnterMethod:(id)arg3 viewDidDisappear:(id /* block */)arg4;
- (void)setTrackParaEnterFrom:(id)arg0;
- (void)setTrackParaEnterMethod:(id)arg0;
- (void)setIsGuide:(long long)arg0;
- (void)setUserFollowStatus:(long long)arg0;
- (long long)userFollowStatus;
- (void)bellPushReachTheUpperLimit:(id)arg0;
- (id)trackParaEnterFrom;
- (id)trackParaEnterMethod;
- (long long)isGuide;
- (void)handleApplicationDidBecomeActiveNotification;
- (void)setHalfModalViewHelper:(id)arg0;
- (id)halfModalViewHelper;
- (double)heightForHalfContent;
- (BOOL)needCheckPermissionWhenApplicationDidBecomeActive;
- (void)openPermissionIfNeededWithIgnoreSystemPush:(BOOL)arg0;
- (void)handleForOpenPermissionEnd:(BOOL)arg0;
- (id)systemPermissionView;
- (void)setNeedCheckPermissionWhenApplicationDidBecomeActive:(BOOL)arg0;
- (void)hideNeteorkErrorEmptyPageView;
- (id)videoSectionView;
- (id)liveSectionView;
- (void)trackNewVideoNotificationClickWithStrategy:(unsigned long long)arg0;
- (void)updateUIWithCurrentPermissionStatus;
- (void)showNeteorkErrorEmptyPageView;
- (id)titleForSystemPermissionWithSystemEnable:(BOOL)arg0 douyinEnable:(BOOL)arg1 releationEnable:(BOOL)arg2;
- (void)p_clickCloseButton:(id)arg0;
- (void)setSystemPermissionView:(id)arg0;
- (void)setVideoSectionView:(id)arg0;
- (void)setLiveSectionView:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)fetchData;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)scrollView;
- (void)setupViews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)showLoadingView;
- (id /* block */)viewDidDisappear;
- (id)toUser;
- (void)hideLoadingView;
- (void)setViewDidDisappear:(id /* block */)arg0;

@end
