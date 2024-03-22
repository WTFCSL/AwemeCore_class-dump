//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;
@protocol TIMXReferMessageInfoProtocol;

@protocol TIMXStrangerMessageProtocol <NSObject, NSCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long serverMessageID;
@property (readonly, copy, nonatomic) NSString *belongingConversationIdentifier;
@property (readonly, nonatomic) long long sender;
@property (readonly, copy, nonatomic) NSString *senderSecID;
@property (readonly, copy, nonatomic) NSDictionary *content;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDictionary *syncedExt;
@property (readonly, nonatomic) id<TIMXReferMessageInfoProtocol> referMessageInfo;
@property (readonly, nonatomic) long long orderIndex;

- (id)syncedExt;
- (long long)serverMessageID;
- (id)belongingConversationIdentifier;
- (id)senderSecID;
- (id)referMessageInfo;
- (long long)messageType;
- (long long)orderIndex;
- (long long)sender;
- (id)content;
- (id)identifier;
- (id)createdAt;

@end
