//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ECOMTIMPBNMessagesPerUserInitResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (retain, nonatomic) NSMutableArray *conversationsArray;
@property (readonly, nonatomic) unsigned long long conversationsArray_Count;
@property (nonatomic) long long perUserCursor;
@property (nonatomic) BOOL hasPerUserCursor;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) int initType;
@property (nonatomic) BOOL hasInitType;

+ (id)descriptor;

@end