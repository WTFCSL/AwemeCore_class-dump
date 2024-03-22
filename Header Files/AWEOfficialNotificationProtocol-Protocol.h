//
//     Generated by private class-dump
//

@class NSNumber, NSArray;

@protocol AWEOfficialNotificationProtocol <NSObject>

@property (nonatomic) long long newFansCount;
@property (retain, nonatomic) NSNumber *lastReadNewFansNoticeID;
@property (retain, nonatomic) NSArray *customerServiceGroups;

- (long long)newFansCount;
- (long long)interactiveNoticeCellUnreadCount;
- (id)lastReadNewFansNoticeID;
- (void)setNewFansCount:(long long)arg0;
- (long long)getUnreadCountWithGroup:(long long)arg0;
- (void)readAssistantGroup:(long long)arg0;
- (void)fetchInteractNotification:(id /* block */)arg0 isLongConnectionRequest:(BOOL)arg1 context:(id)arg2;
- (unsigned long long)unreadCountShowTypeGroup:(long long)arg0;
- (long long)interactiveFlameCellUnreadCount;
- (long long)getDotUnreadCountWithGroup:(long long)arg0;
- (long long)interactiveCommentCellUnreadCount;
- (void)setLastReadNewFansNoticeID:(id)arg0;
- (id)customerServiceGroups;
- (void)setCustomerServiceGroups:(id)arg0;

@optional

- (id)countModelWithGroup:(long long)arg0;
- (void)onNoticeCountUpdateInfo:(id)arg0 fromPush:(BOOL)arg1 model:(id)arg2;

@end
