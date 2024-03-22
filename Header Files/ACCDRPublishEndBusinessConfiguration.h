//
//     Generated by private class-dump
//

@class NSString;

@interface ACCDRPublishEndBusinessConfiguration : NSObject <ACCDRBusinessConfiguration> {
    id _inputData;
}

@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessTemplate;
- (id)businessServiceContainerWithSessionContainer:(id)arg0;
- (id)routerCoordinator;
- (id)messageHandlerClasses;
- (id)xBridgeClasses;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
