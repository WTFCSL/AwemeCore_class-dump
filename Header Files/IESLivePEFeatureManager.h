//
//     Generated by private class-dump
//

@class IESLivePEFeatureStorage, IESLivePEFeatureApi, NSString, NSHashTable, NSObject, IESLivePEFeatureSet;
@protocol OS_dispatch_queue;

@interface IESLivePEFeatureManager : NSObject <IESLivePEFeatureSetDelegate, IESLiveUserActions, IESLivePEFeatureCollector> {
    BOOL _isFetching;
    NSObject<OS_dispatch_queue> *_processQueue;
    NSHashTable *_observers;
    IESLivePEFeatureSet *_featureSet;
    IESLivePEFeatureStorage *_featureStorage;
    IESLivePEFeatureApi *_featureApi;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) IESLivePEFeatureSet *featureSet;
@property (retain, nonatomic) IESLivePEFeatureStorage *featureStorage;
@property (retain, nonatomic) IESLivePEFeatureApi *featureApi;
@property (nonatomic) BOOL isFetching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setProcessQueue:(id)arg0;
- (void)userDidLogin:(id)arg0;
- (void)userDidLogout;
- (void)userDidUpdate:(id)arg0;
- (void)fetchFeatureWithScene:(long long)arg0;
- (void)collectFeature:(id)arg0 withBoolValue:(BOOL)arg1;
- (void)collectFeature:(id)arg0 withIntValue:(long long)arg1;
- (void)collectFeature:(id)arg0 withDoubleValue:(double)arg1;
- (void)collectFeature:(id)arg0 withStringValue:(id)arg1;
- (void)collectFeature:(id)arg0;
- (void)inProcessQueue:(id /* block */)arg0;
- (id)readFeatureSet;
- (void)detectedFeatureChanged:(id)arg0;
- (void)fetchFeatureWithScene:(long long)arg0 completion:(id /* block */)arg1;
- (void)fetchFeatureWithParams:(id)arg0 completion:(id /* block */)arg1;
- (id)featureApi;
- (void)fetchFeatureWithKeys:(id)arg0 completion:(id /* block */)arg1;
- (void)setFeatureApi:(id)arg0;
- (void)writeFeature:(id)arg0;
- (id)featureSet;
- (id)init;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (void)setFeatureStorage:(id)arg0;
- (id)featureStorage;
- (void)addObserver:(id)arg0;
- (void)removeObserver:(id)arg0;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg0;
- (void)setFeatureSet:(id)arg0;
- (id)processQueue;

@end
