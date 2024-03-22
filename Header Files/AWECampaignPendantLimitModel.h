//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary, NSString;

@interface AWECampaignPendantLimitModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_installTimeLimit;
    NSNumber *_activeTimeLimit;
}

@property (retain, nonatomic) NSNumber *installTimeLimit;
@property (retain, nonatomic) NSNumber *activeTimeLimit;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)installTimeLimit;
- (id)activeTimeLimit;
- (void)setInstallTimeLimit:(id)arg0;
- (void)setActiveTimeLimit:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
