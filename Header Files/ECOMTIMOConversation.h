//
//     Generated by private class-dump
//

@class NSDate, NSString, NSOrderedSet, NSDictionary, ECOMTIMOSubConversation, NSObject, ECOMTIMOMessage, NSNumber;
@protocol OS_dispatch_source, ECOMTIMConversationModelProtocol, ECOMTIMOConversationParticipant;

@interface ECOMTIMOConversation : ECOMTIMOModel <ECOMTIMMessageStoreChangesObserver, ECOMTIMOConversationSortable> {
    BOOL _isStranger;
    BOOL _isCurrentUserAParticipant;
    BOOL _hasUnreadMention;
    BOOL _mute;
    BOOL _stickOnTop;
    BOOL _favorited;
    int _belongingInbox;
    int _mode;
    NSString *_identifier;
    unsigned long long _type;
    unsigned long long _status;
    NSNumber *_shortID;
    long long _sortOrder;
    long long _version;
    NSOrderedSet *_someParticipants;
    unsigned long long _participantsCount;
    long long _ownerID;
    long long _creatorUid;
    id<ECOMTIMOConversationParticipant> _userInfo;
    NSDate *_updatedAt;
    NSString *_lastMessageIdentifier;
    long long _boxType;
    ECOMTIMOMessage *_lastMessage;
    ECOMTIMOSubConversation *_subConversation;
    long long _createTime;
    NSString *_name;
    NSString *_desc;
    NSString *_icon;
    NSString *_notice;
    unsigned long long _unreadCount;
    NSString *_firstUnreadMessageID;
    NSString *_firstUnreadMentionMessageID;
    NSDate *_draftAt;
    NSString *_draftText;
    NSDictionary *_syncedExt;
    NSDictionary *_sharedSyncedExt;
    NSDictionary *_localExt;
    NSDate *_stickOnTopTime;
    NSDate *_favoriteTime;
    NSObject<OS_dispatch_source> *_messageReadPollingTimer;
    NSDictionary *_sharedSyncedExtInternal;
    NSDictionary *_syncedExtInternal;
    id<ECOMTIMConversationModelProtocol> _internalModel;
    NSString *_observerID;
    long long _lastP2PTime;
}

@property (retain) NSString *identifier;
@property unsigned long long type;
@property unsigned long long status;
@property int belongingInbox;
@property (retain) NSNumber *shortID;
@property long long sortOrder;
@property (retain) NSOrderedSet *someParticipants;
@property BOOL isCurrentUserAParticipant;
@property unsigned long long participantsCount;
@property (retain) id<ECOMTIMOConversationParticipant> userInfo;
@property (retain) NSDate *updatedAt;
@property (retain) NSString *lastMessageIdentifier;
@property unsigned long long unreadCount;
@property BOOL hasUnreadMention;
@property (copy) NSString *firstUnreadMessageID;
@property (copy) NSString *firstUnreadMentionMessageID;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *messageReadPollingTimer;
@property BOOL mute;
@property BOOL stickOnTop;
@property (retain) NSDate *stickOnTopTime;
@property (getter=isFavorited) BOOL favorited;
@property (retain) NSDate *favoriteTime;
@property (retain) NSDate *draftAt;
@property (retain) NSString *draftText;
@property (retain) NSString *name;
@property (retain) NSString *desc;
@property (retain) NSString *icon;
@property (retain) NSString *notice;
@property long long ownerID;
@property long long creatorUid;
@property long long createTime;
@property (retain) NSDictionary *sharedSyncedExtInternal;
@property (retain) NSDictionary *sharedSyncedExt;
@property (retain) NSDictionary *syncedExtInternal;
@property (retain) NSDictionary *syncedExt;
@property (retain) NSDictionary *localExt;
@property (retain) id<ECOMTIMConversationModelProtocol> internalModel;
@property (retain) NSString *observerID;
@property long long lastP2PTime;
@property int mode;
@property long long boxType;
@property (retain) ECOMTIMOSubConversation *subConversation;
@property (readonly) long long version;
@property (readonly) BOOL isStranger;
@property (readonly) id<ECOMTIMOConversationParticipant> owner;
@property (retain) ECOMTIMOMessage *lastMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)otherUserIDFor1to1ChatWithConversationID:(id)arg0;
+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 participantsBizRoleObjects:(id)arg3 options:(id)arg4 name:(id)arg5 completion:(id /* block */)arg6;
+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 completion:(id /* block */)arg3;
+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (void)createSubConversationWithParentConvShortID:(long long)arg0 parentConvID:(id)arg1 inInbox:(int)arg2 participantsObjects:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
+ (void)markAllConversationsAsReadWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
+ (id)instanceWithIdentifier:(id)arg0;
+ (id)instanceWithIdentifier:(id)arg0 modelProtocol:(id)arg1 coreInfo:(id)arg2 settingsInfo:(id)arg3;
+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 options:(id)arg3 name:(id)arg4 completion:(id /* block */)arg5;
+ (id)instanceWithPBModel:(id)arg0;
+ (id)instanceWithConversationShortID:(long long)arg0;
+ (BOOL)conversationExitsInDB:(id)arg0;
+ (void)sendMessageP2P:(long long)arg0 conversationId:(id)arg1 visibleUser:(id)arg2 messageType:(long long)arg3 content:(id)arg4 ext:(id)arg5 complection:(id /* block */)arg6;
+ (id)conversationIDFor1to1ChatWithOtherUserID:(long long)arg0 inbox:(int)arg1;
+ (id)conversationIDForGroupChatWithConversationShortID:(long long)arg0;

- (void)setParticipantsCount:(unsigned long long)arg0;
- (BOOL)stickOnTop;
- (void)setStickOnTop:(BOOL)arg0;
- (BOOL)isStranger;
- (BOOL)isCurrentUserAParticipant;
- (void)setIsCurrentUserAParticipant:(BOOL)arg0;
- (long long)creatorUid;
- (void)setCreatorUid:(long long)arg0;
- (id)favoriteTime;
- (void)setFavoriteTime:(id)arg0;
- (void)markAllMessagesBeforeMessage:(id)arg0 asReadWithMode:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)resendMessage:(id)arg0;
- (void)setStickOnTop:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setMute:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)deleteWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)updateCurrentIfNeeded:(id /* block */)arg0;
- (void)startMessageReadPollingTimerWithInterval:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)cancelMessageReadPollingTimer;
- (int)belongingInbox;
- (id)sharedSyncedExt;
- (id)localExt;
- (id)someParticipants;
- (id)lastMessageIdentifier;
- (id)shortID;
- (id)draftAt;
- (id)draftText;
- (id)subConversation;
- (id)syncedExt;
- (void)setSyncedExt:(id)arg0;
- (void)setLocalExt:(id)arg0;
- (id)sendMessage:(id)arg0 isSaveDB:(BOOL)arg1 error:(id *)arg2;
- (void)setBoxType:(long long)arg0;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setLocalExtEntry:(id)arg0 value:(id)arg1 completion:(id /* block */)arg2;
- (void)setLocalExtWithKeys:(id)arg0 values:(id)arg1 completion:(id /* block */)arg2;
- (id)syncedExtInternal;
- (void)setShortID:(id)arg0;
- (void)setDraftText:(id)arg0;
- (void)forceRefreshFromDB;
- (id)messageReadPollingTimer;
- (void)setMessageReadPollingTimer:(id)arg0;
- (void)setHasUnreadMention:(BOOL)arg0;
- (long long)conversationVersion;
- (void)onMessagesCreated:(id)arg0 belongingConversationMap:(id)arg1 reason:(id)arg2;
- (void)onMessagesUpdated:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onMessagesDeleted:(id)arg0 belongingConversationMap:(id)arg1;
- (void)onConversationsCreated:(id)arg0;
- (void)onConversationsUpdated:(id)arg0;
- (void)onConversationsDeleted:(id)arg0;
- (void)onConversationCleared:(id)arg0;
- (BOOL)shouldStickOnTop;
- (BOOL)hasUnreadMention;
- (void)setDraftAt:(id)arg0;
- (void)setStickOnTopTime:(id)arg0;
- (id)stickOnTopTime;
- (void)setUpWithModel:(id)arg0 coreInfo:(id)arg1 settingsInfo:(id)arg2;
- (id)initWithModel:(id)arg0 coreInfo:(id)arg1 settingsInfo:(id)arg2;
- (void)applyAttributesFromModel:(id)arg0 coreInfo:(id)arg1 settings:(id)arg2;
- (long long)__nextOldClientMsgId;
- (void)addParticipants:(id)arg0 options:(id)arg1 completion:(id /* block */)arg2;
- (void)removeParticipants:(id)arg0 options:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteWithOptions:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setBelongingInbox:(int)arg0;
- (id)participantModelFromPBParticipant:(id)arg0;
- (void)setSomeParticipants:(id)arg0;
- (void)setLastMessageIdentifier:(id)arg0;
- (id)firstUnreadMessageID;
- (void)setFirstUnreadMessageID:(id)arg0;
- (id)firstUnreadMentionMessageID;
- (void)setFirstUnreadMentionMessageID:(id)arg0;
- (void)setSyncedExtInternal:(id)arg0;
- (id)sharedSyncedExtInternal;
- (void)setSharedSyncedExtInternal:(id)arg0;
- (void)setSharedSyncedExt:(id)arg0;
- (void)setSubConversation:(id)arg0;
- (long long)lastP2PTime;
- (void)setLastP2PTime:(long long)arg0;
- (void)applyAttributesFromModel:(id)arg0;
- (void)addParticipants:(id)arg0 completion:(id /* block */)arg1;
- (void)removeParticipants:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteAllMessagesWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)markAsUnreadWithMode:(unsigned long long)arg0 unreadCount:(long long)arg1 completion:(id /* block */)arg2;
- (void)setSyncedExtWithEntries:(id)arg0 completion:(id /* block */)arg1;
- (void)setSharedSyncedExtWithEntries:(id)arg0 completion:(id /* block */)arg1;
- (void)updateAndCheckMessageContinues:(id /* block */)arg0;
- (void)forceSetUpdatedAt:(id)arg0;
- (void)sendMessageP2P:(id)arg0 messageType:(long long)arg1 content:(id)arg2 ext:(id)arg3 complection:(id /* block */)arg4;
- (long long)boxType;
- (void)setObserverID:(id)arg0;
- (id)desc;
- (BOOL)mute;
- (id)initWithModel:(id)arg0;
- (id)owner;
- (long long)sortOrder;
- (id)icon;
- (void).cxx_destruct;
- (BOOL)muted;
- (unsigned long long)status;
- (void)setCreateTime:(long long)arg0;
- (int)mode;
- (void)setUserInfo:(id)arg0;
- (void)setUnreadCount:(unsigned long long)arg0;
- (unsigned long long)type;
- (unsigned long long)participantsCount;
- (void)setMode:(int)arg0;
- (id)identifier;
- (void)setType:(unsigned long long)arg0;
- (long long)version;
- (void)setStatus:(unsigned long long)arg0;
- (id)userInfo;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (long long)createTime;
- (void)setSortOrder:(long long)arg0;
- (unsigned long long)unreadCount;
- (void)updateIfNeeded;
- (id)lastMessage;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)setDesc:(id)arg0;
- (id)name;
- (void)setMute:(BOOL)arg0;
- (void)setIdentifier:(id)arg0;
- (void)setLastMessage:(id)arg0;
- (id)notice;
- (void)setNotice:(id)arg0;
- (id)internalModel;
- (void)setInternalModel:(id)arg0;
- (id)sendMessage:(id)arg0 error:(id *)arg1;
- (void)setFavorited:(BOOL)arg0;
- (long long)ownerID;
- (void)leaveWithCompletion:(id /* block */)arg0;
- (void)setDraft:(id)arg0;
- (id)updatedAt;
- (void)setUpdatedAt:(id)arg0;
- (void)setOwnerID:(long long)arg0;
- (id)observerID;
- (BOOL)isFavorited;

@end
