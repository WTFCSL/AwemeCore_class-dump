//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@protocol AWEAwemePlayInteractionInteractorProtocol <NSObject>

@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSString *pageTypeString;
@property (nonatomic, copy) NSString *fromPage;
@property (nonatomic) unsigned long long feedType;
@property (nonatomic, copy) NSString *adEventName;
@property (nonatomic, retain) AWEAwemeModel *model;
@property (nonatomic, retain) AWEAwemeModel *fromModel;
@property (nonatomic) unsigned long long eventSource;
@property (nonatomic, copy) NSDictionary *logExtraDict;
@property (nonatomic) long long shareSceneType;
@property (nonatomic, copy) NSString *interestGroupID;
@property (nonatomic) BOOL mustShowFavoriteToast;
@property (nonatomic, retain) NSNumber *favoriteToastBottomPadding;
@property (nonatomic, copy) id /* block */ shareActionStatusBlock;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (id)fromModel;
- (void)setFromModel:(id)arg0;
- (id)dislikeButtonText;
- (void)onVideoPlayerViewDoubleClicked:(id)arg0;
- (id)interestGroupID;
- (void)setInterestGroupID:(id)arg0;
- (void)setFromPage:(id)arg0;
- (id)pageTypeString;
- (void)onCommentButtonClicked:(id)arg0;
- (void)onShareButtonTapped:(id)arg0;
- (void)setPageTypeString:(id)arg0;
- (long long)shareSceneType;
- (void)setShareSceneType:(long long)arg0;
- (BOOL)mustShowFavoriteToast;
- (void)setMustShowFavoriteToast:(BOOL)arg0;
- (id)favoriteToastBottomPadding;
- (void)setFavoriteToastBottomPadding:(id)arg0;
- (id /* block */)shareActionStatusBlock;
- (void)setShareActionStatusBlock:(id /* block */)arg0;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 diggOriginItem:(BOOL)arg4 enterMethod:(id)arg5 inFollowFeed:(BOOL)arg6 ignoreUnlogin:(BOOL)arg7 animationBlock:(id /* block */)arg8;
- (void)doSafeDiggWithDiggBlock:(id /* block */)arg0 undiggBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 diggOriginItem:(BOOL)arg4 enterMethod:(id)arg5 inFollowFeed:(BOOL)arg6 ignoreUnlogin:(BOOL)arg7 animationBlock:(id /* block */)arg8;
- (void)favoriteWithFavoriteBlock:(id /* block */)arg0 unfavoriteBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 enterMethod:(id)arg4 enterFrom:(id)arg5 snackBarBottomPadding:(double)arg6;
- (void)favoriteWithFavoriteBlock:(id /* block */)arg0 unfavoriteBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 enterMethod:(id)arg4 enterFrom:(id)arg5 snackBarBottomPadding:(double)arg6;
- (void)favoriteWithFavoriteBlock:(id /* block */)arg0 unfavoriteBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 enterMethod:(id)arg4 enterFrom:(id)arg5 snackBarBottomPadding:(double)arg6 forceAFDSnackBar:(BOOL)arg7 a11yDismissView:(id)arg8;
- (void)favoriteWithFavoriteBlock:(id /* block */)arg0 unfavoriteBlock:(id /* block */)arg1 otherActionBlock:(id /* block */)arg2 actionFailedBlock:(id /* block */)arg3 enterMethod:(id)arg4 enterFrom:(id)arg5 snackBarBottomPadding:(double)arg6 forceAFDSnackBar:(BOOL)arg7 a11yDismissView:(id)arg8;
- (void)onLongPressShareWithSender:(id)arg0;
- (void)longPressDislikeVideo;
- (void)longPressDislikeVideoWithButtonType:(unsigned long long)arg0;
- (void)longPressDislikeVideoWithButtonType:(unsigned long long)arg0;
- (void)longPressFriendsAction;
- (void)generateAdditionalFunctionModelsWithEnterMethod:(id)arg0;
- (void)generateAdditionalFunctionModelsWithEnterMethod:(id)arg0;
- (void)onFollowViewClicked:(id)arg0 comletion:(id /* block */)arg1;
- (void)triggerSyncStatus;
- (void)onUserAvatarViewClicked:(id)arg0 contentSource:(id)arg1 enterLiveRoomBlock:(id /* block */)arg2;
- (void)onCommentAddNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)onCommentAddNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)onCommentDeleteNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)onCommentDeleteNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)onCommentTotalCountNotification:(id)arg0 completion:(id /* block */)arg1;
- (void)onCommentTotalCountNotification:(id)arg0 completion:(id /* block */)arg1;
- (id)realShowAuthor;
- (void)setEventSource:(unsigned long long)arg0;
- (void)setModel:(id)arg0;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg0;
- (unsigned long long)eventSource;
- (id)model;
- (id)fromPage;

@end
