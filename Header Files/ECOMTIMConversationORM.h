//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData, NSDate;
@protocol ECOMTIMConversationSettingsInfoModelProtocol, ECOMTIMConversationCoreInfoModelProtocol, ECOMTIMConversationLocalInfoModelProtocol, ECOMTIMSubConversationModelProtocol;

@interface ECOMTIMConversationORM : ECOMTIMBaseORM <WCTTableCoding, ECOMTIMOConversationSortable, ECOMTIMConversationModelProtocol> {
    BOOL _isParticipant;
    BOOL _hasUnreadMention;
    BOOL _isStranger;
    int _type;
    int _status;
    int _inbox;
    int _badgeCount;
    NSString *_identifier;
    long long _shortID;
    long long _sortOrder;
    long long _participantsCount;
    NSDate *_updatedAt;
    long long _unreadCount;
    long long _fakeUnreadCount;
    long long _minIndex;
    NSDate *_draftAt;
    NSString *_draftText;
    NSDate *_ticketUpdatedAt;
    NSData *_firstPageParticipants;
    NSString *_ticket;
    NSString *_localInfo;
    NSData *_userInfo;
    NSString *_ignoredIndexInConversationV2s;
    long long _currentSubConvShortID;
    long long _lastMessageIndexV2;
    id<ECOMTIMConversationSettingsInfoModelProtocol> __cachedSettingsInfo;
    id<ECOMTIMConversationCoreInfoModelProtocol> __cachedCoreInfo;
    id<ECOMTIMConversationLocalInfoModelProtocol> __cachedLocalInfo;
    id<ECOMTIMSubConversationModelProtocol> __cachedSubConversation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ECOMTIMConversationSettingsInfoModelProtocol> _cachedSettingsInfo;
@property (retain, nonatomic) id<ECOMTIMConversationCoreInfoModelProtocol> _cachedCoreInfo;
@property (retain, nonatomic) id<ECOMTIMConversationLocalInfoModelProtocol> _cachedLocalInfo;
@property (retain, nonatomic) id<ECOMTIMSubConversationModelProtocol> _cachedSubConversation;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long shortID;
@property (nonatomic) long long sortOrder;
@property (nonatomic) long long participantsCount;
@property (nonatomic) BOOL isParticipant;
@property (retain, nonatomic) NSDate *updatedAt;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long fakeUnreadCount;
@property (nonatomic) long long minIndex;
@property (nonatomic) int type;
@property (nonatomic) int status;
@property (retain, nonatomic) NSDate *draftAt;
@property (retain, nonatomic) NSString *draftText;
@property (nonatomic) BOOL hasUnreadMention;
@property (nonatomic) BOOL isStranger;
@property (nonatomic) int inbox;
@property (retain, nonatomic) NSDate *ticketUpdatedAt;
@property (retain, nonatomic) NSData *firstPageParticipants;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *localInfo;
@property (retain, nonatomic) NSData *userInfo;
@property (copy, nonatomic) NSString *ignoredIndexInConversationV2s;
@property (nonatomic) int badgeCount;
@property (nonatomic) long long currentSubConvShortID;
@property (nonatomic) long long lastMessageIndexV2;
@property (retain, nonatomic) NSDictionary *localInfoDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)isStranger;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)shortID;
+ (const void *)draftAt;
+ (const void *)draftText;
+ (const void *)localInfo;
+ (const void *)currentSubConvShortID;
+ (const void *)firstPageParticipants;
+ (const void *)lastMessageIndexV2;
+ (const void *)isParticipant;
+ (const void *)fakeUnreadCount;
+ (const void *)hasUnreadMention;
+ (const void *)ticketUpdatedAt;
+ (const void *)ignoredIndexInConversationV2s;
+ (const void *)sortOrder;
+ (const void *)status;
+ (const void *)type;
+ (const void *)participantsCount;
+ (const void *)identifier;
+ (const void *)minIndex;
+ (const void *)badgeCount;
+ (const void *)userInfo;
+ (const void *)unreadCount;
+ (const void *)ticket;
+ (const void *)inbox;
+ (const void *)updatedAt;

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
- (long long)conversationVersion;
- (long long)currentSubConvShortID;
- (id)firstPageParticipants;
- (long long)lastMessageIndexV2;
- (BOOL)isParticipant;
- (void)setFirstPageParticipants:(id)arg0;
- (void)setCurrentSubConvShortID:(long long)arg0;
- (void)setTicketUpdatedAt:(id)arg0;
- (void)setLastMessageIndexV2:(long long)arg0;
- (BOOL)shouldStickOnTop;
- (void)set_cachedCoreInfo:(id)arg0;
- (id)_cachedCoreInfo;
- (void)set_cachedSettingsInfo:(id)arg0;
- (id)_cachedSettingsInfo;
- (void)set_cachedLocalInfo:(id)arg0;
- (id)_cachedLocalInfo;
- (void)set_cachedSubConversation:(id)arg0;
- (id)_cachedSubConversation;
- (id)fetchCoreInfo;
- (id)fetchSettingsInfo;
- (id)fetchLocalInfo;
- (id)fetchSubConversation;
- (long long)fakeUnreadCount;
- (BOOL)hasUnreadMention;
- (id)ticketUpdatedAt;
- (id)ignoredIndexInConversationV2s;
- (id)cachedCoreInfo;
- (id)cachedLocalInfo;
- (id)cachedSubConversation;
- (void)setDraftAt:(id)arg0;
- (void)setIgnoredIndexInConversationV2s:(id)arg0;
- (long long)sortOrder;
- (void).cxx_destruct;
- (BOOL)muted;
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
