//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveEffectModule;

@interface IESECLiveEffectModuleIESECBridger : NSObject <IESECLiveEffectModule> {
    id<IESLiveEffectModule> _protoObj;
}

@property (retain, nonatomic) id<IESLiveEffectModule> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)arg0;
+ (id)bridgedProtocol;

- (BOOL)isNoCommodityFilterOpen;
- (BOOL)isNoCommodityFilterDefaultOpen;
- (void)updateNoCommodityFilterOpenStatus:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setProtoObj:(id)arg0;
- (id)protoObj;
- (void).cxx_destruct;

@end