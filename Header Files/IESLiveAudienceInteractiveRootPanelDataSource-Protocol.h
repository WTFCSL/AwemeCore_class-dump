//
//     Generated by private class-dump
//

@class NSString, NSArray, RACSubject, IESLiveAudienceInteractTopRightItem, NSDictionary;
@protocol IESLiveDynamicActivityProvider, IESLiveAudienceInteractiveRootPanelUserService;

@protocol IESLiveAudienceInteractiveRootPanelDataSource <NSObject>

@property (retain, nonatomic) id<IESLiveAudienceInteractiveRootPanelUserService> rootPanelUserService;
@property (retain, nonatomic) RACSubject *someoneLeave;
@property (nonatomic) BOOL isInAlternateMode;
@property (retain, nonatomic) id<IESLiveDynamicActivityProvider> activityProvider;
@property (readonly, nonatomic) BOOL isInviteOnly;
@property (readonly, copy, nonatomic) NSString *settingPanelTitle;
@property (copy, nonatomic) NSString *emptyViewNotice;
@property (copy, nonatomic) NSArray *inviteFriendsList;
@property (readonly, copy, nonatomic) NSString *applyTitle;
@property (readonly, nonatomic) IESLiveAudienceInteractTopRightItem *topRightItem;
@property (copy, nonatomic) NSDictionary *waitingListHeightDic;

- (id)inviteFriendsList;
- (id)emptyViewNotice;
- (BOOL)isInAlternateMode;
- (BOOL)isInviteOnly;
- (id)waitingListHeightDic;
- (void)setWaitingListHeightDic:(id)arg0;
- (void)setEmptyViewNotice:(id)arg0;
- (void)setInviteFriendsList:(id)arg0;
- (void)setIsInAlternateMode:(BOOL)arg0;
- (id)applyTitle;
- (id)someoneLeave;
- (id)rootPanelUserService;
- (void)setRootPanelUserService:(id)arg0;
- (void)setSomeoneLeave:(id)arg0;
- (id)settingPanelTitle;
- (id)topRightItem;
- (id)activityProvider;
- (void)setActivityProvider:(id)arg0;

@optional

- (BOOL)isFirstInit;

@end