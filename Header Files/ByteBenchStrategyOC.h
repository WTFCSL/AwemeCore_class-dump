//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary;

@interface ByteBenchStrategyOC : NSObject <ByteBenchStrategyPotocol> {
    struct shared_ptr<bytebench::IByteBenchStrategy> { struct IByteBenchStrategy *__ptr_; struct __shared_weak_count *__cntrl_; } bytebenchStrategy;
    BOOL _isInit;
    int _mUpdateInterval;
    int _mBenchAppId;
    int _originAppid;
    NSString *_mAccessKey;
    NSString *_mSecretKey;
    NSDictionary *_mClientInfoDic;
    NSMutableDictionary *_mRegisterStrategy;
    id /* block */ _mCallback;
}

@property BOOL isInit;
@property (nonatomic) id /* block */ mCallback;
@property (nonatomic) int mUpdateInterval;
@property (nonatomic) int mBenchAppId;
@property (copy, nonatomic) NSString *mAccessKey;
@property (copy, nonatomic) NSString *mSecretKey;
@property (retain, nonatomic) NSDictionary *mClientInfoDic;
@property (nonatomic) int originAppid;
@property (retain, nonatomic) NSMutableDictionary *mRegisterStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsInit:(BOOL)arg0;
- (BOOL)isInit;
- (void)releaseStrategy;
- (id)initWithOriginappid:(int)arg0;
- (void)setOriginAppid:(int)arg0;
- (id)mAccessKey;
- (id)mSecretKey;
- (id)mClientInfoDic;
- (BOOL)createCByteBenchStrategy;
- (BOOL)obtainBoolStrategy:(id)arg0 params:(id)arg1;
- (BOOL)obtainBoolStrategy:(id)arg0 defaultValue:(BOOL)arg1 params:(id)arg2 fromCache:(BOOL)arg3;
- (BOOL)obtainBoolStrategy:(id)arg0 defaultValue:(BOOL)arg1 params:(id)arg2 spaceID:(id)arg3 fromCache:(BOOL)arg4;
- (id)convertDicToJson:(id)arg0;
- (float)obtainFloatStrategy:(id)arg0 params:(id)arg1;
- (float)obtainFloatStrategy:(id)arg0 defaultValue:(float)arg1 params:(id)arg2 fromCache:(BOOL)arg3;
- (float)obtainFloatStrategy:(id)arg0 defaultValue:(float)arg1 params:(id)arg2 spaceID:(id)arg3 fromCache:(BOOL)arg4;
- (int)obtainIntStrategy:(id)arg0 params:(id)arg1;
- (int)obtainIntStrategy:(id)arg0 defaultValue:(int)arg1 params:(id)arg2 fromCache:(BOOL)arg3;
- (int)obtainIntStrategy:(id)arg0 defaultValue:(int)arg1 params:(id)arg2 spaceID:(id)arg3 fromCache:(BOOL)arg4;
- (long long)obtainLongStrategy:(id)arg0 params:(id)arg1;
- (long long)obtainLongStrategy:(id)arg0 defaultValue:(long long)arg1 params:(id)arg2 fromCache:(BOOL)arg3;
- (long long)obtainLongStrategy:(id)arg0 defaultValue:(long long)arg1 params:(id)arg2 spaceID:(id)arg3 fromCache:(BOOL)arg4;
- (id)obtainStrStrategy:(id)arg0 params:(id)arg1;
- (id)obtainStrStrategy:(id)arg0 defaultValue:(id)arg1 params:(id)arg2 fromCache:(BOOL)arg3;
- (id)obtainStrStrategy:(id)arg0 defaultValue:(id)arg1 params:(id)arg2 spaceID:(id)arg3 fromCache:(BOOL)arg4;
- (int)initStrategy:(id)arg0;
- (float)getDeviceFeatureFloat:(id)arg0;
- (int)obtainIntStrategy:(id)arg0;
- (int)obtainIntStrategy:(id)arg0 defaultValue:(int)arg1;
- (float)obtainFloatStrategy:(id)arg0;
- (float)obtainFloatStrategy:(id)arg0 defaultValue:(float)arg1;
- (long long)obtainLongStrategy:(id)arg0;
- (long long)obtainLongStrategy:(id)arg0 defaultValue:(long long)arg1;
- (BOOL)obtainBoolStrategy:(id)arg0;
- (BOOL)obtainBoolStrategy:(id)arg0 defaultValue:(BOOL)arg1;
- (id)obtainStrStrategy:(id)arg0;
- (id)obtainStrStrategy:(id)arg0 defaultValue:(id)arg1;
- (BOOL)containKey:(id)arg0;
- (float)getDynamicFeatureFloat:(long long)arg0;
- (void)getDeviceFeatureAllForServer:(id)arg0;
- (BOOL)registerIntStrategy:(id)arg0;
- (BOOL)registerFloatStrategy:(id)arg0;
- (BOOL)registerLongStrategy:(id)arg0;
- (BOOL)registerBoolStrategy:(id)arg0;
- (BOOL)registerStrStrategy:(id)arg0;
- (void)registerBXStrategyInfoCallback:(id /* block */)arg0;
- (id)getOneSpaceKeyList:(id)arg0;
- (id)getOneSpaceStrategyList:(id)arg0 params:(id)arg1;
- (id)getAllChildrenSpaceID;
- (BOOL)unregisterStrategy:(id)arg0;
- (BOOL)clearStrategyCache:(id)arg0;
- (void)setMUpdateInterval:(int)arg0;
- (int)mBenchAppId;
- (void)setMBenchAppId:(int)arg0;
- (void)setMAccessKey:(id)arg0;
- (void)setMSecretKey:(id)arg0;
- (void)setMClientInfoDic:(id)arg0;
- (int)originAppid;
- (id)mRegisterStrategy;
- (void)setMRegisterStrategy:(id)arg0;
- (void)setMCallback:(id /* block */)arg0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id /* block */)mCallback;
- (int)mUpdateInterval;

@end
