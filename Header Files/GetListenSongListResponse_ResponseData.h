//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface GetListenSongListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *songsArray;
@property (readonly, nonatomic) unsigned long long songsArray_Count;
@property (copy, nonatomic) NSString *nextWantListenCursor;
@property (nonatomic) long long nextRecommendListCursor;
@property (copy, nonatomic) NSString *queryId;

+ (id)descriptor;

@end
