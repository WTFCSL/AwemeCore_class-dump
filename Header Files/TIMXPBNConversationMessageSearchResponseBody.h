//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface TIMXPBNConversationMessageSearchResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messageResultArray;
@property (readonly, nonatomic) unsigned long long messageResultArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (copy, nonatomic) NSString *scrollId;
@property (nonatomic) BOOL hasScrollId;

+ (id)descriptor;

@end
