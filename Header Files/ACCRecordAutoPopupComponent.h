//
//     Generated by private class-dump
//

@class ACCCameraSubscription, NSMutableArray, NSString;
@protocol ACCRecordSwitchModeService, ACCRecordAuthService;

@interface ACCRecordAutoPopupComponent : ACCFeatureComponent <ACCRecordAutoPopupService, ACCRecordSwitchModeServiceSubscriber> {
    BOOL _hasCheckedShow;
    id<ACCRecordAuthService> _authService;
    id<ACCRecordSwitchModeService> _switchModeService;
    ACCCameraSubscription *_subscription;
    NSMutableArray *_popupList;
}

@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSMutableArray *popupList;
@property (nonatomic) BOOL hasCheckedShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (id)serviceBinding;
- (void)bindServices:(id)arg0;
- (id)switchModeService;
- (void)switchModeServiceDidChangeMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (id)authService;
- (void)setAuthService:(id)arg0;
- (id)popupList;
- (void)setPopupList:(id)arg0;
- (BOOL)hasCheckedShow;
- (void)setHasCheckedShow:(BOOL)arg0;
- (void)autoShowRecordPopupIfNeed;
- (void)configRecordAutoPopupList;
- (void)checkNextPopupViewShow;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end
