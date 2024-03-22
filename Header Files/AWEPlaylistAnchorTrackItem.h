//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableSet, NSString;

@interface AWEPlaylistAnchorTrackItem : NSObject {
    NSMutableSet *_createdPlaylists;
    NSDictionary *_musicianTrackerParams;
    NSString *_playlistActivityName;
}

@property (retain, nonatomic) NSMutableSet *createdPlaylists;
@property (copy, nonatomic) NSDictionary *musicianTrackerParams;
@property (copy, nonatomic) NSString *playlistActivityName;

- (id)createdPlaylists;
- (void)setMusicianTrackerParams:(id)arg0;
- (void)setPlaylistActivityName:(id)arg0;
- (id)trackParamsWithPlaylistID:(id)arg0;
- (id)musicianTrackerParams;
- (id)playlistActivityName;
- (void)setCreatedPlaylists:(id)arg0;
- (void).cxx_destruct;

@end
