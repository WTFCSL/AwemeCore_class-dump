//
//     Generated by private class-dump
//

@interface AWEMusicStreamingImpl.LunaAlbumStats : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ collectedCount;
    void /* unknown type, empty encoding */ sharedCount;
    void /* unknown type, empty encoding */ totalPurchasedCount;
    void /* unknown type, empty encoding */ onlyVIPPlayableCount;
}

@property (nonatomic) void /* unknown type, empty encoding */ collectedCount;
@property (nonatomic) void /* unknown type, empty encoding */ sharedCount;
@property (nonatomic) void /* unknown type, empty encoding */ totalPurchasedCount;
@property (nonatomic) void /* unknown type, empty encoding */ onlyVIPPlayableCount;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)collectedCount;
- (void)setCollectedCount:(long long)arg0;
- (long long)sharedCount;
- (void)setSharedCount:(long long)arg0;
- (long long)totalPurchasedCount;
- (void)setTotalPurchasedCount:(long long)arg0;
- (long long)onlyVIPPlayableCount;
- (void)setOnlyVIPPlayableCount:(long long)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (id)initWithCoder:(id)arg0;

@end
