//
//     Generated by private class-dump
//

@class NSString, UIViewController;

@interface IESECYataGeneralService : NSObject <YataRouterService, YataToastService> {
    UIViewController *_hostVC;
}

@property (weak, nonatomic) UIViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hostVC;
- (void)setHostVC:(id)arg0;
- (void)toastMessage:(id)arg0;
- (void)openURLSchema:(id)arg0 withBTMIdentifier:(id)arg1 withBCMParams:(id)arg2 host:(id)arg3;
- (void)setupBTMChainWithBTM:(id)arg0 host:(id)arg1 targetPages:(id)arg2 bcmDesc:(id)arg3;
- (void)setupBCMUnitParams:(id)arg0 bcmDescription:(id)arg1 responder:(id)arg2;
- (void).cxx_destruct;

@end
