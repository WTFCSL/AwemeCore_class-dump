//
//     Generated by private class-dump
//

@class NSString;

@interface AWECampaignGeneralActivityButtonChangeInfo : MTLModel <MTLJSONSerializing> {
    long long _timeIndex;
    NSString *_targetColor;
}

@property (nonatomic) long long timeIndex;
@property (copy, nonatomic) NSString *targetColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)targetColor;
- (void)setTargetColor:(id)arg0;
- (void).cxx_destruct;
- (long long)timeIndex;
- (void)setTimeIndex:(long long)arg0;

@end
