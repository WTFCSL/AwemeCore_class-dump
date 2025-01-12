//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IESLivePublicScreenSEIDelayCalculator : NSObject <IESLiveSEIListener> {
    double _curEffectiveSEIDelayAvg;
    long long _receivedEffectiveSEICount;
    double _seiDelayMaxValue;
    double _seiDelayMinValue;
    NSMutableArray *_seiDelayTimeArray;
    long long _ntpDiffTimeMS;
}

@property (nonatomic) double seiDelayMaxValue;
@property (nonatomic) double seiDelayMinValue;
@property (retain, nonatomic) NSMutableArray *seiDelayTimeArray;
@property (nonatomic) double curEffectiveSEIDelayAvg;
@property (nonatomic) long long receivedEffectiveSEICount;
@property (nonatomic) long long ntpDiffTimeMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (void)setupSettings;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)setNtpDiffTimeMS:(long long)arg0;
- (long long)ntpDiffTimeMS;
- (long long)receivedEffectiveSEICount;
- (double)curEffectiveSEIDelayAvg;
- (void)setSeiDelayTimeArray:(id)arg0;
- (void)setSeiDelayMaxValue:(double)arg0;
- (void)setSeiDelayMinValue:(double)arg0;
- (double)seiDelayMinValue;
- (double)seiDelayMaxValue;
- (id)seiDelayTimeArray;
- (void)setCurEffectiveSEIDelayAvg:(double)arg0;
- (void)setReceivedEffectiveSEICount:(long long)arg0;
- (void)calculateSEIAvgDelayWithCurDelayTime:(double)arg0;
- (void).cxx_destruct;

@end
