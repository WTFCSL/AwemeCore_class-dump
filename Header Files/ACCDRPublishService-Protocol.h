//
//     Generated by private class-dump
//

@protocol ACCDRPublishService <NSObject>

- (void)requestDynamicActivityInfoIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (void)retryPublish;
- (unsigned long long)currentPublishState;
- (void)publishEndPageWillClose:(id)arg0;
- (void)addSubscriber:(id)arg0;

@end