//
//     Generated by private class-dump
//

@class NSString;

@interface IESGCPToastFactoryService_Douyin : NSObject <IESGCPToastFactoryService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showHUD:(id)arg0;
- (void)hideHUD;
- (void)showHUD:(id)arg0 inView:(id)arg1;
- (void)showDUXToast:(id)arg0 withCenterPoint:(struct CGPoint { double x0; double x1; })arg1;
- (void)showDUXNotificationWithTitle:(id)arg0 withActionView:(id)arg1 containerView:(id)arg2;
- (void)showToast:(id)arg0 inView:(id)arg1;

@end
