//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMainPayControlService : HTSService <AWEMainPayControlService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beforePay;
- (void)afterPay;
- (BOOL)isOpenDyPayURL:(id)arg0;
- (BOOL)handleDyPayURL:(id)arg0;

@end
