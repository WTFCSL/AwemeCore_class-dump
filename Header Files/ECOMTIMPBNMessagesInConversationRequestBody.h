//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface ECOMTIMPBNMessagesInConversationRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) long long anchorIndex;
@property (nonatomic) BOOL hasAnchorIndex;
@property (nonatomic) int limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) long long maxIndex;
@property (nonatomic) BOOL hasMaxIndex;
@property (retain, nonatomic) NSMutableArray *indexSkipRangesArray;
@property (readonly, nonatomic) unsigned long long indexSkipRangesArray_Count;
@property (nonatomic) long long subConversationShortId;
@property (nonatomic) BOOL hasSubConversationShortId;

+ (id)descriptor;

@end