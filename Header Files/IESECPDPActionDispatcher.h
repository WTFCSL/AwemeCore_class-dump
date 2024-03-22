//
//     Generated by private class-dump
//

@class NSString, IESECommerceServiceProvider, IESECPDPState, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESECPDPActionDispatcher : NSObject <IESECPDPActionDispatcherService> {
    IESECPDPState *_state;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    IESECommerceServiceProvider *_provider;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) IESECPDPState *state;
@property (weak, nonatomic) IESECommerceServiceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispatchAction:(id)arg0;
- (void)object:(id)arg0 observe:(id)arg1 handler:(id /* block */)arg2;
- (void)setProvider:(id)arg0;
- (id)provider;
- (id)semaphore;
- (void).cxx_destruct;
- (id)state;
- (void)setState:(id)arg0;
- (void)setSemaphore:(id)arg0;
- (id)initWithServiceProvider:(id)arg0;

@end
