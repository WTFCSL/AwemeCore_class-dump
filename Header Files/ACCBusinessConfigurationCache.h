//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCBusinessTemplate, IESServiceRegister, IESServiceProvider, ACCRouterCoordinatorProtocol;

@interface ACCBusinessConfigurationCache : NSObject <ACCBusinessConfiguration, NSCopying> {
    id _inputData;
    id<ACCBusinessTemplate> _businessTemplate;
    id<IESServiceRegister, IESServiceProvider> _businessServiceContainer;
    id<ACCRouterCoordinatorProtocol> _routerCoordinator;
    id<IESServiceRegister, IESServiceProvider> _parentContainer;
}

@property (retain, nonatomic) id inputData;
@property (retain, nonatomic) id<ACCBusinessTemplate> businessTemplate;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> businessServiceContainer;
@property (retain, nonatomic) id<ACCRouterCoordinatorProtocol> routerCoordinator;
@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> parentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBusinessServiceContainer:(id)arg0;
- (id)businessServiceContainer;
- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)arg0;
- (id)routerCoordinator;
- (void)setBusinessTemplate:(id)arg0;
- (void)setRouterCoordinator:(id)arg0;
- (id)initWithConfig:(id)arg0 parentContainer:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)parentContainer;
- (void)setParentContainer:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
