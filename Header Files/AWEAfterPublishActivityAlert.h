//
//     Generated by private class-dump
//

@class NSString, AWEPublishBaseTask;

@interface AWEAfterPublishActivityAlert : NSObject <BDXContainerLifecycleProtocol, AWEAlertProtocol> {
    AWEPublishBaseTask *_task;
    id /* block */ _onClose;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerDidClose:(id)arg0;
- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (BOOL)canShowWithContext:(id)arg0;
- (void)showWithContext:(id)arg0 onClose:(id /* block */)arg1;
- (double)showTimeoutWithContext:(id)arg0;
- (BOOL)consumerSupportOpenH5UrlWithTask:(id)arg0;
- (void)consumerOpenH5UrlWithTask:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (id)task;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
