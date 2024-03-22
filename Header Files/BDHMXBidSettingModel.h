//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface BDHMXBidSettingModel : NSObject {
    long long _hitSample;
    NSString *_bid;
    NSArray *_regexList;
    NSDictionary *_bidEventSample;
}

@property (nonatomic) long long hitSample;
@property (copy, nonatomic) NSString *bid;
@property (retain, nonatomic) NSArray *regexList;
@property (retain, nonatomic) NSDictionary *bidEventSample;

- (void)setBid:(id)arg0;
- (void)parseDictionary:(id)arg0;
- (id)bid;
- (id)regexList;
- (long long)hitSample;
- (id)bidEventSample;
- (BOOL)needReportWithServiceType:(long long)arg0;
- (BOOL)needReportWithServiceName:(id)arg0;
- (BOOL)isTeaSwitchOpen;
- (void)setHitSample:(long long)arg0;
- (void)setRegexList:(id)arg0;
- (void)setBidEventSample:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;

@end