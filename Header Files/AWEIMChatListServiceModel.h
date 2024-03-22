//
//     Generated by private class-dump
//

@class AWEIMUser, NSString, AWEIMChatListServiceDraftModel, AWEIMChatListServiceMessageModel, AWEECOMIMAbstractConversationModel, AWEIMChatModel, AWEURLModel;

@interface AWEIMChatListServiceModel : NSObject <NSCopying> {
    BOOL _stickOnTop;
    BOOL _mute;
    NSString *_uid;
    long long _serviceType;
    NSString *_sessionId;
    NSString *_displayText;
    NSString *_name;
    double _updateDate;
    long long _unreadCount;
    AWEURLModel *_avatarURLModel;
    AWEIMUser *_peerUser;
    AWEIMChatListServiceMessageModel *_latestMessage;
    NSString *_explainText;
    AWEIMChatListServiceDraftModel *_draftModel;
    AWEIMChatModel *_chatModel;
}

@property (copy, nonatomic) NSString *encodedShopID;
@property (retain, nonatomic) AWEECOMIMAbstractConversationModel *originalDataModel;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *displayText;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double updateDate;
@property (nonatomic) long long unreadCount;
@property (retain, nonatomic) AWEURLModel *avatarURLModel;
@property (retain, nonatomic) AWEIMUser *peerUser;
@property (retain) AWEIMChatListServiceMessageModel *latestMessage;
@property (copy, nonatomic) NSString *explainText;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) BOOL mute;
@property (retain, nonatomic) AWEIMChatListServiceDraftModel *draftModel;
@property (weak, nonatomic) AWEIMChatModel *chatModel;

- (BOOL)stickOnTop;
- (void)setStickOnTop:(BOOL)arg0;
- (void)setExplainText:(id)arg0;
- (void)setAvatarURLModel:(id)arg0;
- (void)setPeerUser:(id)arg0;
- (void)setLatestMessage:(id)arg0;
- (id)encodedShopID;
- (id)originalDataModel;
- (void)setEncodedShopID:(id)arg0;
- (void)setOriginalDataModel:(id)arg0;
- (id)peerUser;
- (void)setDraftModel:(id)arg0;
- (id)latestMessage;
- (id)avatarURLModel;
- (id)draftModel;
- (id)chatModel;
- (void)setChatModel:(id)arg0;
- (id)explainText;
- (BOOL)mute;
- (void)setUid:(id)arg0;
- (id)uid;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setUnreadCount:(long long)arg0;
- (id)displayText;
- (long long)serviceType;
- (void)setServiceType:(long long)arg0;
- (void)setName:(id)arg0;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (long long)unreadCount;
- (id)name;
- (void)setMute:(BOOL)arg0;
- (void)setDisplayText:(id)arg0;
- (double)updateDate;
- (void)setUpdateDate:(double)arg0;

@end