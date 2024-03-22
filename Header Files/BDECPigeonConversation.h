//
//     Generated by private class-dump
//

@class NSString, BDECPigeonUnReadCountModel;
@protocol BDECPigeonParticipantsInConversationDelegate;

@interface BDECPigeonConversation : BDECIMConversation {
    BDECPigeonUnReadCountModel *_unreadCountNew;
    NSString *_backupBizConversationID;
    NSString *_backupPigeonBizType;
}

@property (weak, nonatomic) id<BDECPigeonParticipantsInConversationDelegate> participantDelegate;
@property (copy, nonatomic) NSString *backupBizConversationID;
@property (copy, nonatomic) NSString *backupPigeonBizType;
@property (copy, nonatomic) BDECPigeonUnReadCountModel *unreadCountNew;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *bizConversationID;
@property (readonly, copy) NSString *pigeonConGroupID;
@property (readonly, nonatomic) int inbox;

+ (id)conversationWithBizConversationID:(id)arg0 pigeonBizType:(id)arg1 inbox:(int)arg2 belongeClient:(id)arg3;
+ (id)conversationWithIMCloudConversationID:(id)arg0;
+ (id)conversationWithBizConversationID:(id)arg0 pigeonBizType:(id)arg1 inbox:(int)arg2;
+ (id)conversationWithIMCloudConversationID:(id)arg0 belongeClient:(id)arg1;

- (id)pigeonBizType;
- (id)pigeonShopID;
- (id)initConversationWithIdentifier:(id)arg0 belongeClient:(id)arg1;
- (id)bizConversationID;
- (BOOL)isInNewUnreadCountAB;
- (id)unreadCountNew;
- (id)backupBizConversationID;
- (id)backupPigeonBizType;
- (BOOL)isCurrentUserConvWithIMCloudConversationID:(id)arg0 belongeClient:(id)arg1;
- (void)setBackupBizConversationID:(id)arg0;
- (void)setBackupPigeonBizType:(id)arg0;
- (void)setUnreadCountNew:(id)arg0;
- (id)pigeonConGroupID;
- (void).cxx_destruct;
- (unsigned long long)type;
- (unsigned long long)unreadCount;
- (int)inbox;

@end
