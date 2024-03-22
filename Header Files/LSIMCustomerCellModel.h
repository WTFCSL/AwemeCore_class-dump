//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface LSIMCustomerCellModel : NSObject {
    NSString *_conversationType;
    NSString *_conversationID;
    NSString *_title;
    NSString *_lastContent;
    NSNumber *_unreadNumber;
    NSString *_avatarUrl;
    NSString *_iconUrl;
    NSString *_tag;
    NSString *_lastMessageTimeStr;
    double _updateTime;
    NSString *_clickType;
    NSString *_url;
    NSString *_conversationSessionID;
    NSNumber *_conversationStatus;
}

@property (copy, nonatomic) NSString *conversationType;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *lastContent;
@property (retain, nonatomic) NSNumber *unreadNumber;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *lastMessageTimeStr;
@property (nonatomic) double updateTime;
@property (copy, nonatomic) NSString *clickType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *conversationSessionID;
@property (retain, nonatomic) NSNumber *conversationStatus;

+ (id)modelCustomPropertyMapper;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (void)setAvatarUrl:(id)arg0;
- (id)clickType;
- (void)setClickType:(id)arg0;
- (id)avatarUrl;
- (id)conversationType;
- (void)setConversationType:(id)arg0;
- (id)unreadNumber;
- (void)setUnreadNumber:(id)arg0;
- (id)conversationSessionID;
- (void)setConversationSessionID:(id)arg0;
- (id)conversationStatus;
- (void)setConversationStatus:(id)arg0;
- (id)lastMessageTimeStr;
- (void)setLastMessageTimeStr:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (double)updateTime;
- (id)conversationID;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)title;
- (id)url;
- (void)setTitle:(id)arg0;
- (void)setConversationID:(id)arg0;
- (void)setUpdateTime:(double)arg0;
- (id)lastContent;
- (void)setLastContent:(id)arg0;

@end
