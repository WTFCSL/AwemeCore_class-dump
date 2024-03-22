//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEECOMIMAbstractConversationModel : NSObject {
    BOOL _lastMsgIsDraft;
    BOOL _lastMsgSenderIsMe;
    BOOL _isOnTop;
    BOOL _canSetTop;
    BOOL _isMute;
    BOOL _canMute;
    BOOL _canDelete;
    long long _convType;
    NSString *_conversationID;
    NSNumber *_conversationShortID;
    NSString *_avatarURL;
    NSString *_nickName;
    NSString *_lastMsg;
    NSString *_lastMsgID;
    long long _lastMsgType;
    long long _lastMessageSentStatus;
    long long _lastMsgTime;
    long long _unReadNum;
    NSString *_scheme;
    NSString *_shopID;
    NSString *_serviceEntityID;
    NSString *_officialText;
    long long _businessConvBizType;
    unsigned long long _remindStyle;
}

@property (nonatomic) long long convType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSNumber *conversationShortID;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *lastMsg;
@property (copy, nonatomic) NSString *lastMsgID;
@property (nonatomic) BOOL lastMsgIsDraft;
@property (nonatomic) BOOL lastMsgSenderIsMe;
@property (nonatomic) long long lastMsgType;
@property (nonatomic) long long lastMessageSentStatus;
@property (nonatomic) long long lastMsgTime;
@property (nonatomic) long long unReadNum;
@property (nonatomic) BOOL isOnTop;
@property (nonatomic) BOOL canSetTop;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL canMute;
@property (nonatomic) BOOL canDelete;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *serviceEntityID;
@property (copy, nonatomic) NSString *officialText;
@property (nonatomic) long long businessConvBizType;
@property (nonatomic) unsigned long long remindStyle;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (long long)convType;
- (void)setIsMute:(BOOL)arg0;
- (void)setConversationShortID:(id)arg0;
- (void)setShopID:(id)arg0;
- (id)conversationShortID;
- (id)shopID;
- (long long)unReadNum;
- (BOOL)isOnTop;
- (id)serviceEntityID;
- (BOOL)canSetTop;
- (BOOL)canMute;
- (void)setConvType:(long long)arg0;
- (id)lastMsg;
- (void)setLastMsg:(id)arg0;
- (id)lastMsgID;
- (void)setLastMsgID:(id)arg0;
- (BOOL)lastMsgIsDraft;
- (void)setLastMsgIsDraft:(BOOL)arg0;
- (BOOL)lastMsgSenderIsMe;
- (void)setLastMsgSenderIsMe:(BOOL)arg0;
- (long long)lastMsgType;
- (void)setLastMsgType:(long long)arg0;
- (long long)lastMessageSentStatus;
- (void)setLastMessageSentStatus:(long long)arg0;
- (long long)lastMsgTime;
- (void)setLastMsgTime:(long long)arg0;
- (void)setUnReadNum:(long long)arg0;
- (void)setIsOnTop:(BOOL)arg0;
- (void)setCanSetTop:(BOOL)arg0;
- (void)setCanMute:(BOOL)arg0;
- (void)setServiceEntityID:(id)arg0;
- (id)officialText;
- (void)setOfficialText:(id)arg0;
- (long long)businessConvBizType;
- (void)setBusinessConvBizType:(long long)arg0;
- (unsigned long long)remindStyle;
- (void)setRemindStyle:(unsigned long long)arg0;
- (void)setScheme:(id)arg0;
- (void)setNickName:(id)arg0;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)scheme;
- (id)conversationID;
- (id)nickName;
- (void)setConversationID:(id)arg0;
- (void)setCanDelete:(BOOL)arg0;
- (BOOL)isMute;

@end