//
//     Generated by private class-dump
//

@class NSDictionary, AWEUserModel, NSString;

@interface AWEProfileHeaderActionController : NSObject <AWEProfileHeaderActionControllerProtocol> {
    BOOL _isCurrentUser;
    BOOL _fromHomepage;
    AWEUserModel *_user;
    NSDictionary *_trackerParam;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL fromHomepage;
@property (retain, nonatomic) NSDictionary *trackerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowHideMyPostCellForUser:(id)arg0;
+ (void)showDoubleCheckForPrivateUser:(id)arg0 params:(id)arg1 unfollowConfirmationBlock:(id /* block */)arg2;
+ (void)didTapHideMyPostFromUser:(id)arg0 enterFrom:(id)arg1 otherTrackParams:(id)arg2;
+ (id)createAlertView:(id)arg0 description:(id)arg1;
+ (id)settingActionWithUser:(id)arg0;
+ (void)showDoubleCheckForBlockActionSheet:(id)arg0 enterFrom:(id)arg1 fromItemID:(id)arg2;
+ (void)showDoubleCheckForBlockActionSheet:(id)arg0 enterFrom:(id)arg1 fromItemID:(id)arg2 previousPage:(id)arg3;
+ (void)showDoubleCheckForBlockActionSheet:(id)arg0 enterFrom:(id)arg1 fromItemID:(id)arg2 isFromHot:(BOOL)arg3 groupID:(id)arg4 previousPage:(id)arg5;
+ (void)showLikeAlertViewWithUser:(id)arg0;
+ (BOOL)canShowHideHerPostCellForUser:(id)arg0;
+ (void)showDoubleCheckForUnFollowActionSheet:(id)arg0 params:(id)arg1 needAlert:(BOOL)arg2 unfollowConfirmationBlock:(id /* block */)arg3;
+ (void)showDoubleCheckForBlockActionSheet:(id)arg0 enterFrom:(id)arg1;
+ (void)didTapHideHerPostWithUser:(id)arg0 enterFrom:(id)arg1 enterMethod:(id)arg2 otherTrackParams:(id)arg3;
+ (id)idStrWithUser:(id)arg0;

- (id)trackerParam;
- (void)setTrackerParam:(id)arg0;
- (id)getUserAge;
- (void)setFromHomepage:(BOOL)arg0;
- (BOOL)shouldShowGender;
- (BOOL)shouldShowAge;
- (BOOL)fromHomepage;
- (BOOL)shouldShowLocation;
- (BOOL)shouldShowSchool;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (id)locationString;

@end
