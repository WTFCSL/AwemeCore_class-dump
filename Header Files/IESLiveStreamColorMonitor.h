//
//     Generated by private class-dump
//

@class NSString, IESLiveAudienceStreamColorSEIResult, NSMutableArray;

@interface IESLiveStreamColorMonitor : NSObject <IESLiveSEIListener> {
    IESLiveAudienceStreamColorSEIResult *_lastResult;
    NSMutableArray *_resultArray;
    double _brightnessThreshold;
    double _saturationThreshold;
    double _contrastThreshold;
}

@property (retain, nonatomic) IESLiveAudienceStreamColorSEIResult *lastResult;
@property (retain, nonatomic) NSMutableArray *resultArray;
@property (nonatomic) double brightnessThreshold;
@property (nonatomic) double saturationThreshold;
@property (nonatomic) double contrastThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enbaleLiveStreamColorMonitor;

- (void)didSetAttachingDIContext;
- (id)currentResultArray;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)setUPColorMonitorThreshold;
- (void)setBrightnessThreshold:(double)arg0;
- (void)setSaturationThreshold:(double)arg0;
- (void)setContrastThreshold:(double)arg0;
- (double)brightnessThreshold;
- (double)contrastThreshold;
- (void).cxx_destruct;
- (id)resultArray;
- (double)saturationThreshold;
- (void)setResultArray:(id)arg0;
- (id)lastResult;
- (void)setLastResult:(id)arg0;

@end
