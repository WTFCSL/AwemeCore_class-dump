//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface TIMXPBNDeleteConversationCoreExtInfoRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end
