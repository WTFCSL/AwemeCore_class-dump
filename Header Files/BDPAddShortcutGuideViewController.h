//
//     Generated by private class-dump
//

@class BDPUniqueID, BDPAddShortcutGuideView;

@interface BDPAddShortcutGuideViewController : BDPBaseAlertViewController {
    id /* block */ _addToDesktopAction;
    BDPUniqueID *_uniqueID;
    BDPAddShortcutGuideView *_guideView;
}

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAddShortcutGuideView *guideView;
@property (copy, nonatomic) id /* block */ addToDesktopAction;

- (id /* block */)addToDesktopAction;
- (void)setAddToDesktopAction:(id /* block */)arg0;
- (void)prepareLayout;
- (void).cxx_destruct;
- (id)uniqueID;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setUniqueID:(id)arg0;
- (void)viewDidLoad;
- (id)alertView;
- (id)initWithUniqueID:(id)arg0;
- (void)setGuideView:(id)arg0;
- (id)guideView;

@end