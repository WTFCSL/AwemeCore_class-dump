//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ChatReplyListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) long long topMsgId;
@property (nonatomic) long long bottomMsgId;
@property (nonatomic) BOOL upHasMore;
@property (nonatomic) BOOL downHasMore;

+ (id)descriptor;

@end