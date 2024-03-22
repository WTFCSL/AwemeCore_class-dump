//
//     Generated by private class-dump
//

@class HGUniqueID, HGExitPopupSubscribeView;

@interface HGExitPopupSubscribeViewController : HGBaseAlertViewController {
    HGUniqueID *_uniqueID;
    HGExitPopupSubscribeView *_exitPopupView;
    id /* block */ _exitAction;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (retain, nonatomic) HGExitPopupSubscribeView *exitPopupView;
@property (copy, nonatomic) id /* block */ exitAction;

+ (void)recordShow;
+ (long long)subscribeType:(id)arg0;
+ (id)_uidmd5;
+ (BOOL)todayCanShow;
+ (void)recordLoadSuccess:(id)arg0;
+ (BOOL)canShow:(id)arg0;
+ (id)_today;

- (void)showFromParentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)exitPopupView;
- (void)event:(id)arg0 param:(id)arg1;
- (id)initWithUniqueID:(id)arg0 exitAction:(id /* block */)arg1;
- (void)setExitPopupView:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (id /* block */)exitAction;
- (void)setExitAction:(id /* block */)arg0;
- (void)viewDidLoad;
- (id)alertView;

@end