//
//     Generated by private class-dump
//

@interface AWEMiniLunaPlaylistStats : AWEBaseApiModel {
    long long _countCollected;
    long long _countShared;
    long long _countComment;
    long long _countOnlyVIPPlayable;
}

@property (nonatomic) long long countCollected;
@property (nonatomic) long long countShared;
@property (nonatomic) long long countComment;
@property (nonatomic) long long countOnlyVIPPlayable;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)countCollected;
- (void)setCountCollected:(long long)arg0;
- (long long)countShared;
- (void)setCountShared:(long long)arg0;
- (long long)countComment;
- (void)setCountComment:(long long)arg0;
- (long long)countOnlyVIPPlayable;
- (void)setCountOnlyVIPPlayable:(long long)arg0;

@end