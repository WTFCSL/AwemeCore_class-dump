//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData, NSDate;

@protocol ECOMTIMConversationModelProtocol <NSObject>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long shortID;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long participantsCount;
@property (nonatomic) BOOL isParticipant;
@property (retain, nonatomic) NSDate *updatedAt;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long fakeUnreadCount;
@property (nonatomic) BOOL hasUnreadMention;
@property (nonatomic) long long minIndex;
@property (nonatomic) int type;
@property (nonatomic) int status;
@property (retain, nonatomic) NSDate *draftAt;
@property (retain, nonatomic) NSString *draftText;
@property (nonatomic) int inbox;
@property (nonatomic) BOOL isStranger;
@property (retain, nonatomic) NSDate *ticketUpdatedAt;
@property (retain, nonatomic) NSData *firstPageParticipants;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *localInfo;
@property (retain, nonatomic) NSData *userInfo;
@property (retain, nonatomic) NSDictionary *localInfoDictionary;
@property (nonatomic) int badgeCount;
@property (nonatomic) long long currentSubConvShortID;
@property (nonatomic) long long lastMessageIndexV2;

- (void)setParticipantsCount:(long long)arg0;
- (BOOL)isStranger;
- (void)setIsStranger:(BOOL)arg0;
- (long long)shortID;
- (id)draftAt;
- (id)draftText;
- (void)setShortID:(long long)arg0;
- (void)setDraftText:(id)arg0;
- (id)localInfoDictionary;
- (void)setLocalInfoDictionary:(id)arg0;
- (id)cachedSettingsInfo;
- (void)setMinIndex:(long long)arg0;
- (void)setIsParticipant:(BOOL)arg0;
- (id)localInfo;
- (void)setLocalInfo:(id)arg0;
- (void)setFakeUnreadCount:(long long)arg0;
- (void)setHasUnreadMention:(BOOL)arg0;
- (long long)currentSubConvShortID;
- (id)firstPageParticipants;
- (long long)lastMessageIndexV2;
- (BOOL)isParticipant;
- (void)setFirstPageParticipants:(id)arg0;
- (void)setCurrentSubConvShortID:(long long)arg0;
- (void)setTicketUpdatedAt:(id)arg0;
- (void)setLastMessageIndexV2:(long long)arg0;
- (id)fetchCoreInfo;
- (id)fetchSettingsInfo;
- (id)fetchLocalInfo;
- (id)fetchSubConversation;
- (long long)fakeUnreadCount;
- (BOOL)hasUnreadMention;
- (id)ticketUpdatedAt;
- (id)cachedCoreInfo;
- (id)cachedLocalInfo;
- (id)cachedSubConversation;
- (void)setDraftAt:(id)arg0;
- (long long)sortOrder;
- (int)status;
- (void)setUserInfo:(id)arg0;
- (void)setUnreadCount:(long long)arg0;
- (int)type;
- (long long)participantsCount;
- (id)identifier;
- (long long)minIndex;
- (void)setType:(int)arg0;
- (void)setStatus:(int)arg0;
- (int)badgeCount;
- (id)userInfo;
- (void)setSortOrder:(long long)arg0;
- (long long)unreadCount;
- (void)setIdentifier:(id)arg0;
- (void)setBadgeCount:(int)arg0;
- (id)ticket;
- (void)setTicket:(id)arg0;
- (int)inbox;
- (void)setInbox:(int)arg0;
- (id)updatedAt;
- (void)setUpdatedAt:(id)arg0;

@end
