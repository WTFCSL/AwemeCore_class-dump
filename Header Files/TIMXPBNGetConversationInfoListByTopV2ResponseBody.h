//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TIMXPBNGetConversationInfoListByTopV2ResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationInfoListArray;
@property (readonly, nonatomic) unsigned long long conversationInfoListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;

+ (id)descriptor;

@end
