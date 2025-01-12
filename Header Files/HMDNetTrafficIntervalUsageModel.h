//
//     Generated by private class-dump
//

@class NSArray;

@interface HMDNetTrafficIntervalUsageModel : NSObject {
    NSArray *_largeRequest;
    NSArray *_highFrequencyRequest;
    NSArray *_largeImage;
    NSArray *_businessUsage;
}

@property (retain, nonatomic) NSArray *largeRequest;
@property (retain, nonatomic) NSArray *highFrequencyRequest;
@property (retain, nonatomic) NSArray *largeImage;
@property (retain, nonatomic) NSArray *businessUsage;

- (id)businessUsage;
- (id)groupByNetType;
- (id)largeRequest;
- (void)setLargeRequest:(id)arg0;
- (id)highFrequencyRequest;
- (void)setHighFrequencyRequest:(id)arg0;
- (void)setBusinessUsage:(id)arg0;
- (void).cxx_destruct;
- (id)largeImage;
- (void)setLargeImage:(id)arg0;

@end
