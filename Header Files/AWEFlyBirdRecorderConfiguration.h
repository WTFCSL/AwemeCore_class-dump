//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCBusinessTemplate, ACCRouterCoordinatorProtocol;

@interface AWEFlyBirdRecorderConfiguration : NSObject <ACCBusinessConfiguration> {
    id _inputData;
    id<ACCBusinessTemplate> _businessTemplate;
    id<ACCRouterCoordinatorProtocol> _routerCoordinator;
}

@property (retain, nonatomic) id<ACCBusinessTemplate> businessTemplate;
@property (retain, nonatomic) id<ACCRouterCoordinatorProtocol> routerCoordinator;
@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInputData:(id)arg0;
- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)arg0;
- (id)routerCoordinator;
- (void)setBusinessTemplate:(id)arg0;
- (void)setRouterCoordinator:(id)arg0;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
