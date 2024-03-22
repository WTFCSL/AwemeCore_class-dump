//
//     Generated by private class-dump
//

@class IESMMBingoManager, NSString, NLEMediaWrapper;

@interface NLEBingoManager : NSObject {
    int _nleChainSelection;
    IESMMBingoManager *_veBingoManager;
    NLEMediaWrapper *_mediaWrapper;
    NSString *_musicPath;
}

@property (retain, nonatomic) IESMMBingoManager *veBingoManager;
@property (retain, nonatomic) NLEMediaWrapper *mediaWrapper;
@property (retain, nonatomic) NSString *musicPath;
@property (nonatomic) int nleChainSelection;

- (id)mediaWrapper;
- (void)insertPic:(id)arg0 picDuration:(float)arg1 pos:(int)arg2 completion:(id /* block */)arg3;
- (void)insertVideo:(id)arg0 pos:(int)arg1 completion:(id /* block */)arg2;
- (void)deleteVideoWithPos:(long long)arg0 completion:(id /* block */)arg1;
- (void)moveVideoInPos:(long long)arg0 toPos:(long long)arg1 completion:(id /* block */)arg2;
- (void)generateVideo:(id)arg0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg1 interval:(double)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)cancleGenerateVideo:(id)arg0;
- (void)getRandomReslove:(id /* block */)arg0;
- (void)getReslove:(id /* block */)arg0;
- (id)makeItemWithVideodata:(id)arg0;
- (int)saveInterimScoresToFile:(id)arg0;
- (int)checkScoreFile:(id)arg0;
- (void)setNleChainSelection:(int)arg0;
- (int)nleChainSelection;
- (id)veBingoManager;
- (void)setMusicPath:(id)arg0;
- (void)changeMusic:(double)arg0 duration:(double)arg1 completion:(id /* block */)arg2;
- (void)setStoredBeats:(id)arg0 completion:(id /* block */)arg1;
- (id)musicPath;
- (void)getRandomResloveWithDisableZoom:(BOOL)arg0 customImageFillMode:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)getPublicRandomReslove:(id /* block */)arg0;
- (void)getPublicReslove:(id /* block */)arg0;
- (void)setVeBingoManager:(id)arg0;
- (id)initWithNLEMediaWrapper:(id)arg0;
- (void)setMediaWrapper:(id)arg0;
- (id)initWithNLEMedia:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setMusic:(id)arg0;

@end
