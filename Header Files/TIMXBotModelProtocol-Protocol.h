//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol TIMXBotModelProtocol <NSObject>

@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *belongingConversationIdentifier;
@property (copy, nonatomic) NSDictionary *ext;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (void)setExt:(id)arg0;
- (id)belongingConversationIdentifier;
- (void)setBelongingConversationIdentifier:(id)arg0;
- (long long)userID;
- (void)setUserID:(long long)arg0;
- (id)ext;

@end
