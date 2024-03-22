//
//     Generated by private class-dump
//

@class AVAsset, NSDictionary, NSString, AVAudioMix, AVVideoComposition;

@interface IESVideoDetectInputModel : NSObject <IESVideoDetectInputModelProtocol> {
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NSDictionary *_extraLog;
}

@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) AVAudioMix *audioMix;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraLog;
- (void)setExtraLog:(id)arg0;
- (void).cxx_destruct;
- (void)setAudioMix:(id)arg0;
- (id)asset;
- (void)setAsset:(id)arg0;
- (id)audioMix;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg0;

@end
