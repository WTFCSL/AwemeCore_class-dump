//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface GetKaraokeBgMVListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *mvListArray;
@property (readonly, nonatomic) unsigned long long mvListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;

+ (id)descriptor;

@end
