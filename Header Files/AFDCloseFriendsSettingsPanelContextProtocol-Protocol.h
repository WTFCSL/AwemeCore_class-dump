//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, AFDCloseFriendsMomentContext;

@protocol AFDCloseFriendsSettingsPanelContextProtocol <NSObject>

@property (copy, nonatomic) id /* block */ bottomButtonBlock;
@property (copy, nonatomic) id /* block */ closeButtonBlock;
@property (copy, nonatomic) id /* block */ obdPublishBlock;
@property (copy, nonatomic) id /* block */ backButtonBlock;
@property (copy, nonatomic) id /* block */ halfScreenDismissBlock;
@property (retain, nonatomic) AFDCloseFriendsMomentContext *momentContext;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSArray *selectedUserIDs;
@property (retain, nonatomic) NSArray *disabledUserIDs;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL shouldHandleAppearanceDelegate;
@property (copy, nonatomic) id /* block */ dismissExternalHalfContainerBlockComplete;
@property (copy, nonatomic) id /* block */ preferedContentSizeChangedBlock;
@property (nonatomic) BOOL enterFromIMOnlineStatus;
@property (nonatomic) BOOL isSpringEntrance;
@property (nonatomic) BOOL fromMomentFeed;
@property (nonatomic) BOOL fromPublish;
@property (nonatomic) BOOL fromFindCloseFriends;
@property (copy, nonatomic) NSString *fromAwemeID;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setFromAwemeID:(id)arg0;
- (id)fromAwemeID;
- (id)momentContext;
- (void)setMomentContext:(id)arg0;
- (void)setCloseButtonBlock:(id /* block */)arg0;
- (void)setFromMomentFeed:(BOOL)arg0;
- (void)setEnterFromIMOnlineStatus:(BOOL)arg0;
- (void)setDismissExternalHalfContainerBlockComplete:(id /* block */)arg0;
- (void)setPreferedContentSizeChangedBlock:(id /* block */)arg0;
- (void)setShouldHandleAppearanceDelegate:(BOOL)arg0;
- (void)setBottomButtonBlock:(id /* block */)arg0;
- (void)setHalfScreenDismissBlock:(id /* block */)arg0;
- (void)setFromPublish:(BOOL)arg0;
- (void)setObdPublishBlock:(id /* block */)arg0;
- (void)setSelectedUserIDs:(id)arg0;
- (void)setDisabledUserIDs:(id)arg0;
- (void)setIsSpringEntrance:(BOOL)arg0;
- (BOOL)shouldHandleAppearanceDelegate;
- (id /* block */)dismissExternalHalfContainerBlockComplete;
- (id /* block */)preferedContentSizeChangedBlock;
- (BOOL)fromMomentFeed;
- (BOOL)fromPublish;
- (id /* block */)obdPublishBlock;
- (id /* block */)bottomButtonBlock;
- (id /* block */)halfScreenDismissBlock;
- (id /* block */)closeButtonBlock;
- (id /* block */)backButtonBlock;
- (void)setBackButtonBlock:(id /* block */)arg0;
- (id)selectedUserIDs;
- (id)disabledUserIDs;
- (BOOL)enterFromIMOnlineStatus;
- (BOOL)isSpringEntrance;
- (BOOL)fromFindCloseFriends;
- (void)setFromFindCloseFriends:(BOOL)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
