//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface GetSongListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *musicListArray;
@property (readonly, nonatomic) unsigned long long musicListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *queryId;

+ (id)descriptor;

@end
