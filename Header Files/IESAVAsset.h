//
//     Generated by private class-dump
//

@class AVAsset, NSDictionary, NSString, NSError, NSArray, AVAssetTrack;

@interface IESAVAsset : NSObject {
    unsigned long long _status;
    NSError *_error;
    AVAsset *_asset;
    NSString *_uuid;
    NSArray *_automaticallyLoadedAssetKeys;
}

@property (readonly, copy, nonatomic) NSDictionary *formattedDict;
@property (retain, nonatomic) AVAsset *asset;
@property unsigned long long status;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSArray *automaticallyLoadedAssetKeys;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) AVAssetTrack *videoTrack;
@property (readonly, copy, nonatomic) NSArray *audioTracks;

- (void)setupAssetWithLoadKeys:(id)arg0;
- (void)monitorWithStatusMonitor:(long long)arg0 extraParams:(id)arg1;
- (float)estimateAudioBitrate;
- (void)setAutomaticallyLoadedAssetKeys:(id)arg0;
- (id)formattedDict;
- (id)sortedFormattedKeys;
- (id)audioTracks;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (unsigned long long)status;
- (id)initWithURL:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setStatus:(unsigned long long)arg0;
- (void)setError:(id)arg0;
- (id)uuid;
- (id)asset;
- (id)initWithAsset:(id)arg0;
- (void)setAsset:(id)arg0;
- (id)error;
- (float)frameRate;
- (id)initWithAsset:(id)arg0 automaticallyLoadedAssetKeys:(id)arg1;
- (id)automaticallyLoadedAssetKeys;
- (id)videoTrack;

@end
