//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray;

@interface TIMXPBNCreateSubConversationRequestBody : GPBMessage

@property (nonatomic) long long conShortId;
@property (nonatomic) BOOL hasConShortId;
@property (copy, nonatomic) NSString *conId;
@property (nonatomic) BOOL hasConId;
@property (copy, nonatomic) NSString *bizStatus;
@property (nonatomic) BOOL hasBizStatus;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (retain, nonatomic) NSMutableArray *participantsObjArray;
@property (readonly, nonatomic) unsigned long long participantsObjArray_Count;

+ (id)descriptor;

@end
