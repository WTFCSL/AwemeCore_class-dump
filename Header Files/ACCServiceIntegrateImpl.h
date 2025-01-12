//
//     Generated by private class-dump
//

@class HTSServiceContainer, IESContainer, NSString;
@protocol IESServiceRegister;

@interface ACCServiceIntegrateImpl : NSObject <IESServiceProvider, IESServiceRegister, ACCServiceRegistRecipe, ACCServiceProvideRecipe> {
    ACCServiceIntegrateImpl *_parentAssemblerImpl;
    IESContainer *_iesServiceContainer;
    HTSServiceContainer *_htsServiceContainer;
    unsigned long long _abChooseStage;
}

@property (retain, nonatomic) ACCServiceIntegrateImpl *parentAssemblerImpl;
@property (retain, nonatomic) IESContainer *iesServiceContainer;
@property (retain, nonatomic) HTSServiceContainer *htsServiceContainer;
@property (nonatomic) unsigned long long abChooseStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESServiceRegister> parent;

- (id)resolveObject:(id)arg0;
- (id)provideBlockNeedServiceResponse:(id /* block */)arg0 forProtocol:(id)arg1;
- (void)registIdentifiers:(id)arg0 scope:(long long)arg1 provider:(id /* block */)arg2;
- (void)registerService:(id /* block */)arg0 to:(id)arg1;
- (id)providerService:(id)arg0;
- (id)initContainerWithParent:(id)arg0;
- (void)registerService:(id /* block */)arg0 toClassOrProtocol:(id)arg1 withScope:(long long)arg2;
- (unsigned long long)abChooseStage;
- (void)setAbChooseStage:(unsigned long long)arg0;
- (id)iesServiceContainer;
- (id)htsServiceContainer;
- (long long)p_coverHTSScopeType2IESType:(long long)arg0;
- (id)iesResolveObject:(id)arg0;
- (void)registerServiceArray:(id /* block */)arg0 toClassOrProtocolArray:(id)arg1 withScope:(long long)arg2;
- (id)parentAssemblerImpl;
- (void)setParentAssemblerImpl:(id)arg0;
- (void)setIesServiceContainer:(id)arg0;
- (void)setHtsServiceContainer:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
