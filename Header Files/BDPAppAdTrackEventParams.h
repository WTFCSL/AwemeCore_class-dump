//
//     Generated by private class-dump
//

@class NSString, BDPUniqueID;

@interface BDPAppAdTrackEventParams : NSObject {
    NSString *_adType;
    NSString *_adUnitId;
    BDPUniqueID *_uniqueId;
    NSString *_adCategory;
}

@property (copy, nonatomic) NSString *adType;
@property (copy, nonatomic) NSString *adUnitId;
@property (copy, nonatomic) BDPUniqueID *uniqueId;
@property (copy, nonatomic) NSString *adCategory;

- (id)adCategory;
- (void)setAdCategory:(id)arg0;
- (void)setAdUnitId:(id)arg0;
- (id)adUnitId;
- (id)uniqueId;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)adType;
- (void)setAdType:(id)arg0;

@end
