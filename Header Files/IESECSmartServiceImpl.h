//
//     Generated by private class-dump
//

@class NSString, IESCombineFeatureConfig;
@protocol FurionSmartCommonServiceProtocol;

@interface IESECSmartServiceImpl : NSObject <IESECSmartService> {
    id<FurionSmartCommonServiceProtocol> _smartCommonService;
    IESCombineFeatureConfig *_updateCombineTypeConfig;
}

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSmartCommonService:(id)arg0;
- (id)smartCommonService;
- (void)runWithConfigBuilder:(id /* block */)arg0 completion:(id /* block */)arg1;
- (void)setUpdateCombineTypeConfig:(id)arg0;
- (id)updateCombineTypeConfig;
- (void)featureCenterEvent:(id)arg0;
- (id)initWithName:(id)arg0 config:(id)arg1;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)serviceName;
- (void)prepare;
- (id)lastResult;

@end
