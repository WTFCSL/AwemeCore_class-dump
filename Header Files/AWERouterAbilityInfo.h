//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSError, ACCRecordViewControllerInputData;

@interface AWERouterAbilityInfo : NSObject <AWERouterAbilityInfo> {
    long long _ability_status;
    long long _support_type;
    id _objectId;
    id _object;
    NSDictionary *_routerParams;
    ACCRecordViewControllerInputData *_inputData;
    NSError *_error;
    unsigned long long _abilityMaskOption;
}

@property (nonatomic) long long ability_status;
@property (nonatomic) long long support_type;
@property (copy, nonatomic) id objectId;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long abilityMaskOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (void)setAbility_status:(long long)arg0;
- (id)parametersPromiseCheck;
- (void)abilityAssemblyWithCompletion:(id /* block */)arg0;
- (id)abilityTrackData;
- (void)cancelOperationTask;
- (long long)ability_status;
- (long long)support_type;
- (void)setSupport_type:(long long)arg0;
- (unsigned long long)abilityMaskOption;
- (void)setAbilityMaskOption:(unsigned long long)arg0;
- (void)jumpShootInputDataProcessing;
- (void).cxx_destruct;
- (void)setObjectId:(id)arg0;
- (id)object;
- (void)setError:(id)arg0;
- (id)objectId;
- (id)error;
- (void)setObject:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end