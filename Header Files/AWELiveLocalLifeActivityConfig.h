//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWELiveLocalLifeActivityLabelURL;

@interface AWELiveLocalLifeActivityConfig : MTLModel <MTLJSONSerializing> {
    AWELiveLocalLifeActivityLabelURL *_activityLabelUrl;
    NSNumber *_configId;
}

@property (retain, nonatomic) AWELiveLocalLifeActivityLabelURL *activityLabelUrl;
@property (copy, nonatomic) NSNumber *configId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)configId;
- (id)activityLabelUrl;
- (void)setActivityLabelUrl:(id)arg0;
- (void)setConfigId:(id)arg0;
- (void).cxx_destruct;

@end
