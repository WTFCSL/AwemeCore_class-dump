//
//     Generated by private class-dump
//

@interface AWENetworkPackageLoss : NSObject <NSCopying> {
    double _packageLossRate;
    double _packageLossRateUpStream;
    double _packageLossRateDownStream;
    double _packageLossRateUpStreamVariance;
    double _packageLossRateDownStreamVariance;
}

@property (nonatomic) double packageLossRate;
@property (nonatomic) double packageLossRateUpStream;
@property (nonatomic) double packageLossRateDownStream;
@property (nonatomic) double packageLossRateUpStreamVariance;
@property (nonatomic) double packageLossRateDownStreamVariance;

- (double)packageLossRate;
- (void)setPackageLossRate:(double)arg0;
- (double)packageLossRateUpStream;
- (double)packageLossRateUpStreamVariance;
- (double)packageLossRateDownStream;
- (double)packageLossRateDownStreamVariance;
- (id)initWithUpLossRate:(double)arg0 upLossRateVari:(double)arg1 downLossRate:(double)arg2 downLossRateVari:(double)arg3;
- (void)setPackageLossRateUpStream:(double)arg0;
- (void)setPackageLossRateDownStream:(double)arg0;
- (void)setPackageLossRateUpStreamVariance:(double)arg0;
- (void)setPackageLossRateDownStreamVariance:(double)arg0;
- (id)displayString;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end
