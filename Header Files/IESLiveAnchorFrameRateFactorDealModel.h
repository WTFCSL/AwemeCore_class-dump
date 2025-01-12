//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveAnchorFrameRateFactorDealModel : NSObject <IESLiveAnchorStrategyFactorDealProtocol> {
    NSNumber *_defaultFps;
}

@property (retain, nonatomic) NSNumber *defaultFps;
@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) id defaultValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithChangedFactorValue:(id)arg0;
- (void)resetToDefaultValue;
- (id)initWithDefaultFps:(long long)arg0;
- (id)defaultFps;
- (void)setDefaultFps:(id)arg0;
- (id)factorName;
- (id)defaultValue;
- (void).cxx_destruct;

@end
