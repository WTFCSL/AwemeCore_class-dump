//
//     Generated by private class-dump
//

@class DUXBottomNotification, NSDictionary, NSString;

@interface AWEHPPinTopSnackBar : NSObject <AWEHPPinTopComponentProtocol> {
    DUXBottomNotification *_snackBar;
    NSDictionary *_config;
}

@property (retain, nonatomic) DUXBottomNotification *snackBar;
@property (retain, nonatomic) NSDictionary *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPinTopComponentOnViewController:(id)arg0 withButtonAction:(id /* block */)arg1 didShow:(id /* block */)arg2 didDismiss:(id /* block */)arg3;
- (id)snackBar;
- (void)setSnackBar:(id)arg0;
- (void)dismiss;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;

@end
