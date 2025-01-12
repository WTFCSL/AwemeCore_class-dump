//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@protocol BDECIMCloudSubConversationInterface <NSObject>

@property (readonly) long long subConversationShortID;
@property (readonly) int status;
@property (readonly, copy) NSDictionary *extra;
@property (readonly, copy) NSArray *participants;

- (id)initWithIdentifier:(id)arg0 config:(id)arg1;
- (long long)getCurrentServerIDFromSubConversation;
- (long long)subConversationShortID;
- (id)participants;
- (int)status;
- (id)extra;

@end
