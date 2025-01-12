//
//     Generated by private class-dump
//

@class NSString;

@interface LVDraftConfig : NSObject {
    struct shared_ptr<CutSame::Config> { struct Config *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) BOOL videoMuted;
@property (nonatomic) long long adjustMaxIndex;
@property (nonatomic) long long extractAudioLastIndex;
@property (copy, nonatomic) NSString *lyricsRecognitionID;
@property (nonatomic) BOOL lyricsSync;
@property (nonatomic) long long originalSoundLastIndex;
@property (nonatomic) long long recordAudioLastIndex;
@property (nonatomic) long long stickerMaxIndex;
@property (copy, nonatomic) NSString *subtitleRecognitionID;
@property (nonatomic) BOOL subtitleSync;
@property (nonatomic) BOOL videoMute;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Config> { struct Config *x0; struct __shared_weak_count *x1; })arg0;
- (void)setVideoMute:(BOOL)arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::Config> { struct Config *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::Config> { struct Config *x0; struct __shared_weak_count *x1; })arg0;
- (long long)adjustMaxIndex;
- (void)setAdjustMaxIndex:(long long)arg0;
- (long long)extractAudioLastIndex;
- (void)setExtractAudioLastIndex:(long long)arg0;
- (id)lyricsRecognitionID;
- (void)setLyricsRecognitionID:(id)arg0;
- (BOOL)lyricsSync;
- (void)setLyricsSync:(BOOL)arg0;
- (long long)originalSoundLastIndex;
- (void)setOriginalSoundLastIndex:(long long)arg0;
- (long long)recordAudioLastIndex;
- (void)setRecordAudioLastIndex:(long long)arg0;
- (long long)stickerMaxIndex;
- (void)setStickerMaxIndex:(long long)arg0;
- (id)subtitleRecognitionID;
- (void)setSubtitleRecognitionID:(id)arg0;
- (BOOL)subtitleSync;
- (void)setSubtitleSync:(BOOL)arg0;
- (BOOL)videoMute;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;
- (void)setVideoMuted:(BOOL)arg0;
- (BOOL)videoMuted;

@end
