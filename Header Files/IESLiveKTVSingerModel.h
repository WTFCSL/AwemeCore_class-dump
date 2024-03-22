//
//     Generated by private class-dump
//

@class NSArray, IESLiveKtvSongStruct, IESLiveMultiKTVAudioStageViewUser;

@interface IESLiveKTVSingerModel : NSObject {
    BOOL _isSinger;
    NSArray *_avatarURLList;
    IESLiveMultiKTVAudioStageViewUser *_user;
    IESLiveKtvSongStruct *_musicModel;
    long long _hotCount;
}

@property (retain, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) IESLiveMultiKTVAudioStageViewUser *user;
@property (retain, nonatomic) IESLiveKtvSongStruct *musicModel;
@property (nonatomic) long long hotCount;
@property (nonatomic) BOOL isSinger;

- (id)musicModel;
- (void)setAvatarURLList:(id)arg0;
- (void)setMusicModel:(id)arg0;
- (id)avatarURLList;
- (long long)hotCount;
- (void)setHotCount:(long long)arg0;
- (BOOL)isSinger;
- (void)setIsSinger:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;

@end