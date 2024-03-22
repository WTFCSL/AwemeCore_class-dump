//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFeedNearbyCardFrequencyManager : NSObject {
    BOOL _isShopCardExposedInFeed;
    BOOL _isMallCardExposedInFeed;
    BOOL _hadExposedInAppCycle;
    NSString *_mallCardPoiId;
    NSString *_shopCardPoiId;
}

@property (nonatomic) BOOL hadExposedInAppCycle;
@property (copy, nonatomic) NSString *mallCardPoiId;
@property (copy, nonatomic) NSString *shopCardPoiId;
@property (nonatomic) BOOL isShopCardExposedInFeed;
@property (nonatomic) BOOL isMallCardExposedInFeed;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)mallCardPoiId;
- (void)setHadExposedInAppCycle:(BOOL)arg0;
- (BOOL)hadExposedInAppCycle;
- (void)setMallCardPoiId:(id)arg0;
- (id)shopCardPoiId;
- (void)setShopCardPoiId:(id)arg0;
- (void)mallCardRecordFrequency;
- (id)mallCardFrequencyMsgWithModel:(id)arg0;
- (void)shopCardRecordFrequency;
- (id)shopCardFrequencyMsgWithModel:(id)arg0;
- (BOOL)isShopCardExposedInFeed;
- (void)setIsShopCardExposedInFeed:(BOOL)arg0;
- (BOOL)isMallCardExposedInFeed;
- (void)setIsMallCardExposedInFeed:(BOOL)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end