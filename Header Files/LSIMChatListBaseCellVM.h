//
//     Generated by private class-dump
//

@class NSString, LSIMBizMessage, LSIMBizConversation, LSIMUseMember;
@protocol LSBind;

@interface LSIMChatListBaseCellVM : LSListCellVM <LSIMMemberObserver, LSIMListViewModelProtocol> {
    BOOL _lastMessageSendFailed;
    NSString *conversationID;
    unsigned long long modelType;
    LSIMBizMessage *_lastMessage;
    NSString *_lastMessageText;
    double _lastMessageTime;
    NSString *_lastMessageTimeStr;
    long long _unreadCount;
    NSString *_name;
    NSString *_avatarURL;
    LSIMBizConversation *_keyModel;
    LSIMUseMember *_member;
    id<LSBind> _messageStatusBinding;
}

@property (retain, nonatomic) LSIMBizConversation *keyModel;
@property (retain, nonatomic) LSIMUseMember *member;
@property (retain, nonatomic) LSIMBizMessage *lastMessage;
@property (retain, nonatomic) id<LSBind> messageStatusBinding;
@property (copy, nonatomic) NSString *lastMessageText;
@property (nonatomic) double lastMessageTime;
@property (copy, nonatomic) NSString *lastMessageTimeStr;
@property (nonatomic) BOOL lastMessageSendFailed;
@property (nonatomic) long long unreadCount;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;
@property (readonly, weak, nonatomic) LSIMBizConversation *conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long modelType;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)handleCellWillDisplay:(id)arg0;
- (void)memeberDidUpdate:(id)arg0;
- (double)lastMessageTime;
- (void)setLastMessageTime:(double)arg0;
- (id)lastMessageText;
- (void)setLastMessageText:(id)arg0;
- (BOOL)lastMessageSendFailed;
- (void)setLastMessageSendFailed:(BOOL)arg0;
- (void)deleteByUserOperation;
- (void)updateRecalledContentIfNeed;
- (id)messageStatusBinding;
- (void)setMessageStatusBinding:(id)arg0;
- (double)messageTime;
- (void)clearUnreadMessage;
- (void)configMember:(id)arg0;
- (void)dataUpdateTimestampShow;
- (void)conversationDidUpdate;
- (BOOL)canEditInTableRow;
- (id)lastMessageTimeStr;
- (void)handleDataBind;
- (void)setLastMessageTimeStr:(id)arg0;
- (void)lastMessageIdDidChanged;
- (void)unreadCountDidChanged;
- (void)handleCellDidSelect:(id)arg0;
- (id)keyModel;
- (void)setKeyModel:(id)arg0;
- (void)setModelType:(unsigned long long)arg0;
- (unsigned long long)modelType;
- (void).cxx_destruct;
- (void)setUnreadCount:(long long)arg0;
- (id)conversationID;
- (void)setName:(id)arg0;
- (unsigned long long)unreadCount;
- (id)lastMessage;
- (id)name;
- (void)setLastMessage:(id)arg0;
- (id)conversation;
- (id)member;
- (void)setMember:(id)arg0;

@end
