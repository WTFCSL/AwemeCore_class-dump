//
//     Generated by private class-dump
//

@class NSString, AVURLAsset, AVAsset;

@interface LVDraftVideoPayloadPackage : NSObject {
    NSString *_resourceIdentifier;
    AVURLAsset *_video;
    AVURLAsset *_reversedVideo;
    AVURLAsset *_intensifiesVideo;
    AVURLAsset *_reverseIntensifiesVideo;
    AVURLAsset *_intensifiesAudio;
    AVURLAsset *_gameplayVideo;
    AVAsset *_photoAsset;
    NSString *_coverPath;
    NSString *_mediaImagePath;
}

@property (copy, nonatomic) NSString *resourceIdentifier;
@property (retain, nonatomic) AVURLAsset *video;
@property (retain, nonatomic) AVURLAsset *reversedVideo;
@property (retain, nonatomic) AVURLAsset *intensifiesVideo;
@property (retain, nonatomic) AVURLAsset *reverseIntensifiesVideo;
@property (retain, nonatomic) AVURLAsset *intensifiesAudio;
@property (retain, nonatomic) AVURLAsset *gameplayVideo;
@property (retain, nonatomic) AVAsset *photoAsset;
@property (copy, nonatomic) NSString *coverPath;
@property (copy, nonatomic) NSString *mediaImagePath;

- (id)coverPath;
- (void)setCoverPath:(id)arg0;
- (id)intensifiesAudio;
- (void)setIntensifiesAudio:(id)arg0;
- (id)intensifiesVideo;
- (void)setIntensifiesVideo:(id)arg0;
- (id)reverseIntensifiesVideo;
- (void)setReverseIntensifiesVideo:(id)arg0;
- (id)gameplayVideo;
- (void)setGameplayVideo:(id)arg0;
- (id)photoAsset;
- (void)setPhotoAsset:(id)arg0;
- (id)mediaImagePath;
- (void)setMediaImagePath:(id)arg0;
- (void)setReversedVideo:(id)arg0;
- (id)reversedVideo;
- (void).cxx_destruct;
- (void)setVideo:(id)arg0;
- (id)video;
- (id)resourceIdentifier;
- (void)setResourceIdentifier:(id)arg0;

@end
