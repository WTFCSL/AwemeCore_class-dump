//
//     Generated by private class-dump
//

@class GPBInt64Array, NSMutableArray;

@interface ECOMTIMPBNGetMessagesCheckInfoInConversationResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *msgsCheckinfoListArray;
@property (readonly, nonatomic) unsigned long long msgsCheckinfoListArray_Count;
@property (nonatomic) int realMsgTotalCount;
@property (nonatomic) BOOL hasRealMsgTotalCount;
@property (nonatomic) long long cursorReverseNext;
@property (nonatomic) BOOL hasCursorReverseNext;
@property (retain, nonatomic) GPBInt64Array *indexV2ListArray;
@property (readonly, nonatomic) unsigned long long indexV2ListArray_Count;

+ (id)descriptor;

@end