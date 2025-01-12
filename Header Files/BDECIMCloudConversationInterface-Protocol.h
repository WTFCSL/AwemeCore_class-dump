//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSOrderedSet, NSDate, NSNumber;
@protocol BDECIMCloudSubConversationInterface;

@protocol BDECIMCloudConversationInterface <NSObject>

+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 participantsBizRoleObjects:(id)arg3 options:(id)arg4 name:(id)arg5 config:(id)arg6 completion:(id /* block */)arg7;
+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 config:(id)arg3 completion:(id /* block */)arg4;
+ (void)createConversationWithOtherParticipants:(id)arg0 type:(unsigned long long)arg1 inInbox:(int)arg2 options:(id)arg3 config:(id)arg4 completion:(id /* block */)arg5;
+ (void)createSubConversationWithParentConvShortID:(long long)arg0 parentConvID:(id)arg1 inInbox:(int)arg2 participantsObjects:(id)arg3 options:(id)arg4 config:(id)arg5 completion:(id /* block */)arg6;

@property (readonly) int belongingInbox;
@property (readonly) NSString *identifier;
@property (readonly) NSDictionary *sharedSyncedExt;
@property (readonly) NSDictionary *localExt;
@property (readonly) NSOrderedSet *someParticipants;
@property (readonly) NSString *lastMessageIdentifier;
@property (readonly) NSNumber *shortID;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, copy, nonatomic) NSDictionary *unreadCountDataNew;
@property (readonly) NSDate *draftAt;
@property (readonly) NSString *draftText;
@property (readonly) long long createTime;
@property (readonly) BOOL mute;
@property (readonly) BOOL stickOnTop;
@property (readonly) NSDate *updatedAt;
@property (readonly) id<BDECIMCloudSubConversationInterface> subConversation;
@property (readonly) unsigned long long type;
@property (readonly) NSString *name;
@property (readonly) NSString *desc;
@property (readonly) NSString *icon;
@property (readonly) NSString *notice;
@property (readonly) long long ownerID;
@property (readonly) BOOL isCurrentUserAParticipant;
@property (readonly) unsigned long long participantsCount;
@property (readonly) unsigned long long status;

- (BOOL)stickOnTop;
- (BOOL)isCurrentUserAParticipant;
- (void)markAllMessagesBeforeMessage:(id)arg0 asReadWithMode:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)resendMessage:(id)arg0;
- (void)setStickOnTop:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setMute:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)deleteWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)updateCurrentIfNeeded:(id /* block */)arg0;
- (long long)otherUserIDFor1to1Chat;
- (void)startMessageReadPollingTimerWithInterval:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)cancelMessageReadPollingTimer;
- (int)belongingInbox;
- (id)sharedSyncedExt;
- (id)localExt;
- (id)someParticipants;
- (id)lastMessageIdentifier;
- (id)shortID;
- (id)unreadCountDataNew;
- (id)draftAt;
- (id)draftText;
- (id)subConversation;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)initWithIdentifier:(id)arg0 config:(id)arg1;
- (id)desc;
- (BOOL)mute;
- (id)icon;
- (unsigned long long)status;
- (unsigned long long)type;
- (unsigned long long)participantsCount;
- (id)identifier;
- (long long)createTime;
- (unsigned long long)unreadCount;
- (void)updateIfNeeded;
- (id)name;
- (id)notice;
- (id)sendMessage:(id)arg0 error:(id *)arg1;
- (long long)ownerID;
- (void)setDraft:(id)arg0;
- (id)updatedAt;

@end
