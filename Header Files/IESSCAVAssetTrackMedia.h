//
//     Generated by private class-dump
//

@class AVAsset;

@interface IESSCAVAssetTrackMedia : IESSCMedia {
    AVAsset *_asset;
}

@property (retain, nonatomic) AVAsset *asset;

- (id)tracksForType:(id)arg0;
- (id)trackInfoForType:(id)arg0 atIndex:(long long)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)asset;
- (id)initWithAsset:(id)arg0;
- (void)setAsset:(id)arg0;

@end
