//
//     Generated by private class-dump
//

@class BDECPigeonMessagesInConversationDataSource, LSIMObserverHash, NSString, NSDictionary, BDECPigeonConversation, NSDate, NSArray;

@interface LSIMBizConversation : NSObject <BDECPigeonParticipantsInConversationDelegate> {
    BOOL _isOneToOne;
    BOOL _closed;
    BOOL _isFetchingHistory;
    BDECPigeonConversation *_conversation;
    NSString *_customerUID;
    NSString *_groupIconURL;
    NSString *_groupChatIndempotentId;
    BDECPigeonMessagesInConversationDataSource *_dataSource;
    LSIMObserverHash *_observerHash;
}

@property (class, readonly, nonatomic) double serverTimestamp;

@property (retain, nonatomic) BDECPigeonMessagesInConversationDataSource *dataSource;
@property (retain, nonatomic) BDECPigeonConversation *conversation;
@property (retain, nonatomic) LSIMObserverHash *observerHash;
@property (nonatomic) BOOL isFetchingHistory;
@property (copy, nonatomic) NSString *groupIconURL;
@property (readonly, nonatomic) unsigned long long lsConversationType;
@property (readonly, copy, nonatomic) NSString *bizConversationID;
@property (readonly, copy, nonatomic) NSString *lastMessageIdentifier;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, copy, nonatomic) NSString *pigeonBizType;
@property (readonly, nonatomic) BOOL isMute;
@property (readonly, nonatomic) BOOL stickOnTop;
@property (readonly, nonatomic) BOOL countdown;
@property (readonly, nonatomic) NSDate *updatedAt;
@property (readonly, nonatomic) double updateTime;
@property (readonly, copy, nonatomic) NSDictionary *originExt;
@property (readonly, copy, nonatomic) NSDictionary *bizExt;
@property (readonly, nonatomic) int inbox;
@property (readonly, copy, nonatomic) NSString *draftText;
@property (readonly, nonatomic) BOOL hasMoreHistoryMessages;
@property (readonly, copy, nonatomic) NSString *pigeonShopID;
@property (readonly, copy, nonatomic) NSString *pigeonConGroupID;
@property (readonly, copy, nonatomic) NSString *customerUID;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *groupDesc;
@property (readonly, copy, nonatomic) NSString *groupIcon;
@property (readonly, nonatomic) NSString *groupNoticeString;
@property (readonly, nonatomic) long long ownerID;
@property (readonly, copy, nonatomic) NSString *ownerIDStr;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isGroupOneToOne;
@property (readonly, nonatomic) BOOL isOneToOne;
@property (readonly, copy, nonatomic) NSString *groupChatIndempotentId;
@property (readonly, nonatomic) BOOL isDissolved;
@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) NSArray *oParticipants;
@property (readonly, nonatomic) BOOL isCurrentUserAParticipant;
@property (readonly, nonatomic) unsigned long long participantsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)conversationsWithPigeonConversations:(id)arg0;
+ (id)conversationWithPigeonConversation:(id)arg0;
+ (id)serviceClientWithConversationType:(unsigned long long)arg0;
+ (id)conversationWithBizConversationID:(id)arg0 conversationType:(unsigned long long)arg1 inbox:(long long)arg2;
+ (double)serverTimestamp;

- (BOOL)stickOnTop;
- (BOOL)isCurrentUserAParticipant;
- (void)setMute:(BOOL)arg0 completion:(id /* block */)arg1;
- (id)lastMessageIdentifier;
- (id)draftText;
- (BOOL)isDissolved;
- (id)pigeonBizType;
- (id)pigeonShopID;
- (id)customerUID;
- (id)bizConversationID;
- (void)participantsDidUpdate:(id)arg0;
- (id)originExt;
- (id)bizExt;
- (id)pigeonConGroupID;
- (BOOL)hasMoreHistoryMessages;
- (id)groupIcon;
- (id)groupDesc;
- (id)ownerIDStr;
- (id)initWithPigeonConversation:(id)arg0;
- (void)p_groupParticipantsBind;
- (id)groupNoticeString;
- (id)groupIconURL;
- (void)setGroupIconURL:(id)arg0;
- (id)groupChatIndempotentId;
- (void)notifyDataSourceObserverWithHandler:(id /* block */)arg0;
- (BOOL)isGroupOneToOne;
- (void)notifyDataSourceConversationDidUpdate;
- (BOOL)isFetchingHistory;
- (void)setIsFetchingHistory:(BOOL)arg0;
- (void)registerObserver:(id)arg0 forProtocol:(id)arg1;
- (void)unregisterObserver:(id)arg0 forProtocol:(id)arg1;
- (void)notifyObserversWithProtocol:(id)arg0 handler:(id /* block */)arg1;
- (unsigned long long)lsConversationType;
- (void)p_fetchGroupIconURLWithRetryCount:(unsigned long long)arg0;
- (BOOL)checkUserIsAvailableMember:(id)arg0;
- (void)loadHistoryMessageWithCompletion:(id /* block */)arg0;
- (void)registerDataSourceObserver:(id)arg0;
- (void)unregisterDataSourceObserver:(id)arg0;
- (id)observersForProtocol:(id)arg0;
- (id)oParticipants;
- (void)fetchGroupIconURL;
- (void)setObserverHash:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (double)updateTime;
- (unsigned long long)participantsCount;
- (id)serviceClient;
- (BOOL)isGroup;
- (id)groupName;
- (void)setupDataSource;
- (unsigned long long)unreadCount;
- (void)updateIfNeeded;
- (id)conversation;
- (BOOL)closed;
- (BOOL)countdown;
- (void)setConversation:(id)arg0;
- (int)inbox;
- (BOOL)isEqualToConversation:(id)arg0;
- (long long)ownerID;
- (void)setDraft:(id)arg0;
- (id)updatedAt;
- (BOOL)isMute;
- (BOOL)isOneToOne;
- (id)observerHash;

@end
