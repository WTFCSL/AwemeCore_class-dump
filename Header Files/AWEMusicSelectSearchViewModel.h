//
//     Generated by private class-dump
//

@class NSString, AWEPlaylistInfoModel, NSArray, NSNumber, NSMutableArray;

@interface AWEMusicSelectSearchViewModel : NSObject {
    BOOL _hasMore;
    BOOL _isMiniLuna;
    AWEPlaylistInfoModel *_playlistModel;
    NSArray *_cellModels;
    NSString *_searchText;
    NSString *_searchID;
    NSString *_requestID;
    NSMutableArray *_allTrackIDs;
    NSNumber *_cursor;
}

@property (copy, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) AWEPlaylistInfoModel *playlistModel;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *cellModels;
@property (nonatomic) BOOL isMiniLuna;
@property (retain, nonatomic) NSMutableArray *allTrackIDs;

- (void)loadMoreWithCompletion:(id /* block */)arg0;
- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:(BOOL)arg0;
- (id)cellModels;
- (void)setCellModels:(id)arg0;
- (id)allTrackIDs;
- (void)setAllTrackIDs:(id)arg0;
- (id)initWithPlaylistModel:(id)arg0;
- (void)refreshWithSearchText:(id)arg0 completion:(id /* block */)arg1;
- (void)setPlaylistModel:(id)arg0;
- (void)loadMoreWithSearchText:(id)arg0 refresh:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)playlistModel;
- (id)cursor;
- (void)setRequestID:(id)arg0;
- (id)searchText;
- (id)requestID;
- (void)setSearchText:(id)arg0;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (id)searchID;
- (void)setSearchID:(id)arg0;

@end
