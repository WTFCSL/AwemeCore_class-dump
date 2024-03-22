//
//     Generated by private class-dump
//

@class AWEPublishBaseTask, NSString, DUXContentSheet;

@interface AFDProfileSchoolExtensionAlert : NSObject <DUXSheetDelegate, AWEAlertProtocol> {
    AWEPublishBaseTask *_task;
    id /* block */ _onClose;
    DUXContentSheet *_alertSheet;
}

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) DUXContentSheet *alertSheet;
@property (retain, nonatomic) AWEPublishBaseTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAlertSheetWithVC:(id)arg0 Height:(double)arg1;

- (id)alertIDForEvent:(id)arg0;
- (long long)alertPriorityForEvent:(id)arg0;
- (void)showWithCloseCallback:(id /* block */)arg0;
- (BOOL)canShow;
- (void)sheetDidDismiss:(id)arg0;
- (void)forcePopup;
- (void)setAlertSheet:(id)arg0;
- (id)alertSheet;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (id)task;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg0;

@end
