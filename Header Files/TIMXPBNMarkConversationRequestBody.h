//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TIMXPBNMarkConversationRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int markAction;
@property (nonatomic) BOOL hasMarkAction;
@property (retain, nonatomic) NSMutableArray *markTypesArray;
@property (readonly, nonatomic) unsigned long long markTypesArray_Count;

+ (id)descriptor;

@end
