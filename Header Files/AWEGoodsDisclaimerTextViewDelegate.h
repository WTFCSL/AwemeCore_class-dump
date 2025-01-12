//
//     Generated by private class-dump
//

@class AWEUIAlertView, NSString;

@interface AWEGoodsDisclaimerTextViewDelegate : NSObject <UITextViewDelegate> {
    AWEUIAlertView *_alertView;
    NSString *_webVCReactID;
}

@property (weak, nonatomic) AWEUIAlertView *alertView;
@property (copy, nonatomic) NSString *webVCReactID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindToAWEUIAlertView:(id)arg0;
- (void)webviewWillDisappear:(id)arg0;
- (id)webVCReactID;
- (void)openURLString:(id)arg0;
- (void)setWebVCReactID:(id)arg0;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (id)init;
- (void).cxx_destruct;
- (void)setAlertView:(id)arg0;
- (void)dealloc;
- (id)alertView;

@end
