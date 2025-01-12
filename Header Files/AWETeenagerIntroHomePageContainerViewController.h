//
//     Generated by private class-dump
//

@class AWETeenIntroPageContainerViewController, NSString;

@interface AWETeenagerIntroHomePageContainerViewController : AWETeenProtectionHomeBaseViewController <AWETeenIntroPageContainerViewControllerDelegate, AWETeenProtectionHomeViewControllerProtocol, AWERouterViewControllerProtocol> {
    BOOL dismissVCWhenSucceed;
    BOOL isOpenedByServer;
    BOOL teenModeOn;
    BOOL _useNewContainer;
    BOOL _timeLockOn;
    BOOL _preferLightTheme;
    NSString *userName;
    NSString *enterMethod;
    AWETeenIntroPageContainerViewController *_teenNewIntroPageContainer;
    long long _triggerTime;
    NSString *_userID;
    NSString *_secUserID;
    NSString *_initialChannelID;
}

@property (retain, nonatomic) AWETeenIntroPageContainerViewController *teenNewIntroPageContainer;
@property (nonatomic) BOOL useNewContainer;
@property (nonatomic) BOOL timeLockOn;
@property (nonatomic) long long triggerTime;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSString *initialChannelID;
@property (nonatomic) BOOL preferLightTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL dismissVCWhenSucceed;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isOpenedByServer;
@property (nonatomic) BOOL teenModeOn;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *enterMethod;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (void)handleBroadcastNotification:(id)arg0;
- (void)setDismissVCWhenSucceed:(BOOL)arg0;
- (void)setTriggerTime:(long long)arg0;
- (long long)triggerTime;
- (void)setInitialChannelID:(id)arg0;
- (void)setTeenModeOn:(BOOL)arg0;
- (void)setIsOpenedByServer:(BOOL)arg0;
- (void)setTimeLockOn:(BOOL)arg0;
- (id)teenNewIntroPageContainer;
- (void)trackNewContainerShow;
- (BOOL)dismissVCWhenSucceed;
- (id)initialChannelID;
- (BOOL)timeLockOn;
- (BOOL)teenModeOn;
- (void)enableTeenModeWithParams:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isOpenedByServer;
- (void)p_trackEvent;
- (void)setTeenNewIntroPageContainer:(id)arg0;
- (BOOL)useNewContainer;
- (void)setUseNewContainer:(BOOL)arg0;
- (BOOL)preferLightTheme;
- (void)setPreferLightTheme:(BOOL)arg0;
- (id)userID;
- (id)userName;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setUserName:(id)arg0;
- (id)initWithType:(unsigned long long)arg0;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;

@end
