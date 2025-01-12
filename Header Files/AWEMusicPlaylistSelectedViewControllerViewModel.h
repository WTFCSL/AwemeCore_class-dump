//
//     Generated by private class-dump
//

@class NSArray, NSMutableSet;
@protocol AWEMusicPlaylistTableViewCellViewModelProtocol;

@interface AWEMusicPlaylistSelectedViewControllerViewModel : NSObject {
    BOOL _isMiniLuna;
    NSArray<AWEMusicPlaylistTableViewCellViewModelProtocol> *_cellModels;
    unsigned long long _playlistCreateType;
    NSMutableSet *_playlistIdSet;
    long long _cursor;
}

@property (retain, nonatomic) NSArray<AWEMusicPlaylistTableViewCellViewModelProtocol> *cellModels;
@property (nonatomic) unsigned long long playlistCreateType;
@property (retain, nonatomic) NSMutableSet *playlistIdSet;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL isMiniLuna;

- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:(BOOL)arg0;
- (id)cellModels;
- (void)setCellModels:(id)arg0;
- (void)updatePlaylist:(id)arg0;
- (void)appendPlaylistModels:(id)arg0;
- (id)playlistIdSet;
- (void)setPlaylistIdSet:(id)arg0;
- (void)addObjectToPlaylistIdSet:(id)arg0;
- (void)loadMorePlaylistWithBlock:(id /* block */)arg0;
- (void)requstPlaylistAddSongToPlaylist:(id)arg0 musicModels:(id)arg1 completion:(id /* block */)arg2;
- (void)appendMiniLunaPlaylistModels:(id)arg0;
- (id)curUserSecUid;
- (void)addPlaylist:(id)arg0;
- (void)delPlaylist:(id)arg0;
- (unsigned long long)playlistCreateType;
- (void)setPlaylistCreateType:(unsigned long long)arg0;
- (long long)cursor;
- (id)init;
- (void).cxx_destruct;
- (void)setCursor:(long long)arg0;

@end
