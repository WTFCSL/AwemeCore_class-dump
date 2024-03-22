//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface FurionFactorGroupRegisterInfo : NSObject <PTYFeatureGroup> {
    unsigned long long _cacheType;
    NSString *_dataSourceName;
    NSString *_groupName;
    id /* block */ _trackEventsGetter;
    id /* block */ _eventHandler;
    NSMutableArray *_mutFactorRegisters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *mutFactorRegisters;
@property (nonatomic) unsigned long long cacheType;
@property (retain, nonatomic) NSString *dataSourceName;
@property (retain, nonatomic) NSString *groupName;
@property (copy, nonatomic) id /* block */ trackEventsGetter;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (id)trackEvents;
- (void)setDataSourceName:(id)arg0;
- (id)featureDescriptions;
- (void)setMutFactorRegisters:(id)arg0;
- (id)mutFactorRegisters;
- (id)factorRegisters;
- (void)registerFactor:(id /* block */)arg0;
- (void)registerFactors:(id)arg0;
- (void)registerFactorsWithNames:(id)arg0 registerTemplate:(id /* block */)arg1;
- (id /* block */)trackEventsGetter;
- (void)setTrackEventsGetter:(id /* block */)arg0;
- (unsigned long long)ptyDataTypeFromFurionDataType:(unsigned long long)arg0 factorType:(unsigned long long)arg1;
- (id /* block */)eventHandler;
- (void).cxx_destruct;
- (void)setEventHandler:(id /* block */)arg0;
- (id)groupName;
- (void)setGroupName:(id)arg0;
- (id)dataSourceName;
- (unsigned long long)cacheType;
- (void)setCacheType:(unsigned long long)arg0;
- (id)initWithGroupName:(id)arg0;

@end
