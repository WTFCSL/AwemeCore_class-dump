//
//     Generated by private class-dump
//

@interface AWEMiniLunaPlaylistResourcesCountModel : AWEBaseApiModel {
    long long _ugcVideoCount;
    long long _trackCount;
    long long _mvCount;
}

@property (nonatomic) long long ugcVideoCount;
@property (nonatomic) long long trackCount;
@property (nonatomic) long long mvCount;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)ugcVideoCount;
- (void)setUgcVideoCount:(long long)arg0;
- (long long)mvCount;
- (void)setMvCount:(long long)arg0;
- (long long)trackCount;
- (void)setTrackCount:(long long)arg0;

@end
