//
//     Generated by private class-dump
//

@class UINavigationController, DUXPartialSheet, NSString;

@interface AWELiveShowPanelProtocolImpl : NSObject <DUXPartialSheetDelegate, IESHYControllerDelegate, IESLiveShowPanelProtocol> {
    UINavigationController *_panelNavigationController;
    UINavigationController *_payLiveNavigationController;
    DUXPartialSheet *_payLivePartialSheet;
}

@property (weak, nonatomic) UINavigationController *panelNavigationController;
@property (retain, nonatomic) UINavigationController *payLiveNavigationController;
@property (retain, nonatomic) DUXPartialSheet *payLivePartialSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)partialSheetDidDismiss:(id)arg0;
- (void)setPayLiveNavigationController:(id)arg0;
- (void)setPayLivePartialSheet:(id)arg0;
- (id)payLivePartialSheet;
- (id)payLiveNavigationController;
- (id)panelNavigationController;
- (void)iesHYControllerDidDismiss:(id)arg0;
- (void)openPayLiveTicketPanelWithWebviewUrl:(id)arg0 videoId:(id)arg1;
- (void)setPanelNavigationController:(id)arg0;
- (void).cxx_destruct;

@end
