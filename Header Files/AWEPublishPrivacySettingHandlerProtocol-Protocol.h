//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;

@protocol AWEPublishPrivacySettingHandlerProtocol <NSObject>

@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *publishModel;

- (id)publishModel;
- (id)initWithPublishModel:(id)arg0;
- (void)didSelectPrivacy:(unsigned long long)arg0 isExclusionSelected:(BOOL)arg1 exclusionSecUidList:(id)arg2 exclusionUserList:(id)arg3 isPartOfVisibleSelected:(BOOL)arg4 partOfVisibleUsers:(id)arg5 isCloseFriendsSelected:(BOOL)arg6 closeFriendsCount:(long long)arg7 isHideSearch:(BOOL)arg8 param:(id)arg9 isUserSelect:(BOOL)arg10 isTrackable:(BOOL)arg11;
- (void)refreshWithPublishViewModel:(id)arg0;
- (void)showRedpacketPrivatePublishToastIfNeeded:(unsigned long long)arg0;
- (void)addSubscriber:(id)arg0;
- (void)removeSubscriber:(id)arg0;

@end
