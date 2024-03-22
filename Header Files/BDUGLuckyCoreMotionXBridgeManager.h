//
//     Generated by private class-dump
//

@class NSString, CMPedometer;

@interface BDUGLuckyCoreMotionXBridgeManager : NSObject {
    BOOL _isAlertControllerShowing;
    NSString *_hostClassName;
    CMPedometer *_pedometer;
}

@property (retain, nonatomic) CMPedometer *pedometer;
@property (nonatomic) BOOL isAlertControllerShowing;
@property (copy, nonatomic) NSString *hostClassName;

+ (id)shareInstance;

- (void)applyStepPermissionWithCompletion:(id /* block */)arg0;
- (void)setPedometer:(id)arg0;
- (id)pedometer;
- (id)hostClassName;
- (id)__convertStatusToString;
- (void)registerStepListenerWithCallback:(id /* block */)arg0;
- (void)unregisterStepListenerWithCallback:(id /* block */)arg0;
- (void)fetchStepCountWithDuration:(long long)arg0 completion:(id /* block */)arg1;
- (id)checkStepPermissionStatus;
- (void)setHostClassName:(id)arg0;
- (BOOL)isAlertControllerShowing;
- (void)setIsAlertControllerShowing:(BOOL)arg0;
- (BOOL)supportStepCount;
- (id)init;
- (void).cxx_destruct;

@end
