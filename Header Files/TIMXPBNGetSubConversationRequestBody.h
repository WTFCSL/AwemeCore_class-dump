//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface TIMXPBNGetSubConversationRequestBody : GPBMessage

@property (nonatomic) long long conShortId;
@property (nonatomic) BOOL hasConShortId;
@property (copy, nonatomic) NSString *conId;
@property (nonatomic) BOOL hasConId;
@property (nonatomic) long long subConShortId;
@property (nonatomic) BOOL hasSubConShortId;
@property (nonatomic) BOOL includeParticipants;
@property (nonatomic) BOOL hasIncludeParticipants;
@property (retain, nonatomic) NSMutableArray *bizRolesArray;
@property (readonly, nonatomic) unsigned long long bizRolesArray_Count;

+ (id)descriptor;

@end