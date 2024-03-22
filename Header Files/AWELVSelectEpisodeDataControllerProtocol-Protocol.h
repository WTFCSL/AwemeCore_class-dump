//
//     Generated by private class-dump
//

@class NSNumber, NSArray, AWELongVideoAlbumModel;

@protocol AWELVSelectEpisodeDataControllerProtocol <NSObject>

@property (readonly, nonatomic) long long currentEpisodePageType;
@property (readonly, nonatomic) NSNumber *awemeMinCursor;
@property (readonly, nonatomic) NSNumber *awemeMaxCursor;
@property (readonly, nonatomic) BOOL awemeHasMore;
@property (readonly, nonatomic) NSNumber *episodeMinCursor;
@property (readonly, nonatomic) NSNumber *episodeMaxCursor;
@property (readonly, nonatomic) BOOL episodeHasMore;
@property (readonly, nonatomic) AWELongVideoAlbumModel *currentAlbumModel;
@property (readonly, copy, nonatomic) NSArray *awemeList;

- (id)awemeList;
- (id)currentAlbumModel;
- (id)episodeMinCursor;
- (BOOL)episodeHasMore;
- (id)awemeMinCursor;
- (BOOL)awemeHasMore;
- (long long)currentEpisodePageType;
- (id)fetchMetaInfoWithAlbumID:(id)arg0 episodeID:(id)arg1 awemeID:(id)arg2 currentCursor:(long long)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchAwemeListWithAlbumID:(id)arg0 seriesID:(id)arg1 currentCursor:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)updateNumberAwemeListWithAlbumID:(id)arg0 selectedRank:(long long)arg1 completionBlock:(id /* block */)arg2;
- (id)updateEpisodeListWithAlbumID:(id)arg0 requestType:(long long)arg1 completionBlock:(id /* block */)arg2;
- (id)updateCoverAwemeListWithAlbumID:(id)arg0 seriesID:(id)arg1 requestType:(long long)arg2 completionBlock:(id /* block */)arg3;
- (id)episodeMaxCursor;
- (id)awemeMaxCursor;

@end
