//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXOConversationUnReadInfo : NSObject {
    BOOL _isMute;
    NSString *_identifier;
    unsigned long long _unreadCount;
    unsigned long long _anotherUnreadCount;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isMute;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long anotherUnreadCount;

- (void)setIsMute:(BOOL)arg0;
- (unsigned long long)anotherUnreadCount;
- (void)setAnotherUnreadCount:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setUnreadCount:(unsigned long long)arg0;
- (id)identifier;
- (unsigned long long)unreadCount;
- (void)setIdentifier:(id)arg0;
- (BOOL)isMute;

@end