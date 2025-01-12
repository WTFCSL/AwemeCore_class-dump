//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyLocationPermissionManager : NSObject <AWENearbyLocationPermissionManagerProtocol> {
    BOOL _requesting;
    BOOL _isBecomeActiveFromLocationPermission;
    id /* block */ _authorizeBlk;
}

@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (nonatomic) BOOL requesting;
@property (copy, nonatomic) id /* block */ authorizeBlk;
@property (readonly, nonatomic) BOOL shouldShowAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)requesting;
- (void)setRequesting:(BOOL)arg0;
- (void)__addObserver;
- (BOOL)shouldShowAlert;
- (void)_onApplicationDidBecomeActiveNotification:(id)arg0;
- (void)requestPermission:(id /* block */)arg0;
- (void)requestPermissionWithoutInterval:(id /* block */)arg0;
- (void)setAuthorizeBlk:(id /* block */)arg0;
- (id /* block */)authorizeBlk;
- (BOOL)hasAlertInWindow;
- (id /* block */)__shownBlock;
- (id)__alertDescription;
- (void)__showPermissionAlertWithTitle:(id)arg0 desc:(id)arg1 cover:(id)arg2 actionText:(id)arg3 cancelText:(id)arg4 shown:(id /* block */)arg5;
- (void)requestPermissionWithoutIntervalWithCustomTitle:(id)arg0 customDesc:(id)arg1 authorizeBlk:(id /* block */)arg2;
- (void)requestPermissionInMap:(id /* block */)arg0 customTitle:(id)arg1 customDesc:(id)arg2 cover:(id)arg3 viewToShowAlert:(id)arg4;
- (void)__showPermissionAlertWithTitle:(id)arg0 desc:(id)arg1 cover:(id)arg2 actionText:(id)arg3 cancelText:(id)arg4 shown:(id /* block */)arg5 UIConfigBlock:(id /* block */)arg6;
- (void)__requestLocation:(BOOL)arg0;
- (void)__showLocationServicesDisableAlertView:(id /* block */)arg0;
- (void)requestPermissionInMapByUser:(id /* block */)arg0 customTitle:(id)arg1 customDesc:(id)arg2 cover:(id)arg3;
- (void)__openSettings;
- (void)setIsBecomeActiveFromLocationPermission:(BOOL)arg0;
- (void)__showPermissionAlertWithTitle:(id)arg0 desc:(id)arg1 cancel:(id /* block */)arg2;
- (void)__trackEventLocationPermission:(BOOL)arg0;
- (BOOL)isBecomeActiveFromLocationPermission;
- (void)__becomeActiveFromLocationPermissionRequestLocation;
- (void)requestPermissionByUser:(id /* block */)arg0;
- (void)requestPermissionInMap:(id /* block */)arg0 viewToShowAlert:(id)arg1;
- (void)requestPermissionInMapByUser:(id /* block */)arg0;
- (void)__showLocationServicesEnableAlertView:(id /* block */)arg0;
- (void)__showPermissionFloatView:(id)arg0 desc:(id)arg1 image:(id)arg2 action:(id /* block */)arg3 shown:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
