//
//     Generated by private class-dump
//

@class BDPPermissionAlertView_HG;

@protocol BDPPermissionAlertControllerProtocol_HG <NSObject>

@property (copy, nonatomic) id /* block */ checkBeforeClickConfirmCompletion;
@property (copy, nonatomic) id /* block */ cancelButtonClickCompletion;
@property (copy, nonatomic) id /* block */ confirmButtonClickCompletion;
@property (readonly, nonatomic) BDPPermissionAlertView_HG *permissionView;

- (void)showFromParentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)permissionView;
- (void)setCancelButtonClickCompletion:(id /* block */)arg0;
- (void)setConfirmButtonClickCompletion:(id /* block */)arg0;
- (void)setCheckBeforeClickConfirmCompletion:(id /* block */)arg0;
- (id /* block */)cancelButtonClickCompletion;
- (id /* block */)confirmButtonClickCompletion;
- (id /* block */)checkBeforeClickConfirmCompletion;

@end