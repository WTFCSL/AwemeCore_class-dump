//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface GetOrderSongAudienceRecommendListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *anchorRecommendSongsArray;
@property (readonly, nonatomic) unsigned long long anchorRecommendSongsArray_Count;
@property (retain, nonatomic) NSMutableArray *anchorSungSongsArray;
@property (readonly, nonatomic) unsigned long long anchorSungSongsArray_Count;
@property (retain, nonatomic) NSMutableArray *hotRecommendSongsArray;
@property (readonly, nonatomic) unsigned long long hotRecommendSongsArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL canFreeOrderSong;
@property (nonatomic) long long nextTab;
@property (nonatomic) long long nextOffset;

+ (id)descriptor;

@end
