//
//     Generated by private class-dump
//

@interface FlowKit.MessageReportController : FlowCommon.FlowBaseViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ didDismissBlock;
    void /* unknown type, empty encoding */ reportInfoList;
    void /* unknown type, empty encoding */ reportType;
    void /* unknown type, empty encoding */ contentInset;
    void /* unknown type, empty encoding */ contentViewHeightConstraint;
    void /* unknown type, empty encoding */ bottomPadding;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ fixedHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentBkg;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_reportContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_line;
}

- (void)handleKeyboardNotification:(id)arg0;
- (void)didClickSubmit;
- (void)didClickBackWithNeedSubmit:(BOOL)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)traitCollectionDidChange:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewDidLoad;

@end
