//
//     Generated by private class-dump
//

@class IESMediaData, NSString;

@interface IESTrackInfo : NSObject {
    BOOL _allAudioInOneTrack;
    BOOL _isNeedMatting;
    int _videoTrackID;
    int _realVideoTrackID;
    int _audioTrackID;
    IESMediaData *_mediaData;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _range;
}

@property (nonatomic) int videoTrackID;
@property (nonatomic) int realVideoTrackID;
@property (nonatomic) int audioTrackID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (retain, nonatomic) IESMediaData *mediaData;
@property (nonatomic) BOOL allAudioInOneTrack;
@property (readonly, nonatomic) NSString *inputFilterKey;
@property (nonatomic) BOOL isNeedMatting;

- (id)inputFilterKey;
- (int)videoTrackID;
- (void)setVideoTrackID:(int)arg0;
- (void)setAudioTrackID:(int)arg0;
- (void)setAllAudioInOneTrack:(BOOL)arg0;
- (void)setIsNeedMatting:(BOOL)arg0;
- (void)setRealVideoTrackID:(int)arg0;
- (int)audioTrackID;
- (BOOL)allAudioInOneTrack;
- (BOOL)isNeedMatting;
- (int)realVideoTrackID;
- (id)init;
- (void).cxx_destruct;
- (void)setRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (void)dealloc;
- (id)mediaData;
- (void)setMediaData:(id)arg0;

@end
