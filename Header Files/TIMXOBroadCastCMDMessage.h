//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXOBroadCastCMDMessage : NSObject {
    unsigned long long _cmdType;
    long long _serverMessageID;
    NSString *_belongingConversationIdentifier;
}

@property (nonatomic) unsigned long long cmdType;
@property (nonatomic) long long serverMessageID;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;

- (void)setServerMessageID:(long long)arg0;
- (long long)serverMessageID;
- (id)belongingConversationIdentifier;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (unsigned long long)cmdType;
- (void)setCmdType:(unsigned long long)arg0;
- (void).cxx_destruct;

@end
