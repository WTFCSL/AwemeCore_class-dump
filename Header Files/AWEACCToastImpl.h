//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCToastImpl : NSObject <ACCToastProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToast:(id)arg0;
- (void)dismissToast;
- (void)showNetWeak;
- (void)showAtTooMore;
- (void)showDraftPublishAndForceUseLocal:(BOOL)arg0;
- (void)show:(id)arg0 onView:(id)arg1;
- (void)showError:(id)arg0 onView:(id)arg1;
- (void)showSuccess:(id)arg0 onView:(id)arg1;
- (void)showDebugToast:(id)arg0;
- (void)showMultiLine:(id)arg0 onView:(id)arg1;
- (void)show:(id)arg0;
- (void)showError:(id)arg0;
- (void)showSuccess:(id)arg0;

@end