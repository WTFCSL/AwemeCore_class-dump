//
//     Generated by private class-dump
//

@class NSArray, RTVAlertViewModel, UIImageView, NSString, AWEUIAlertView;

@interface RTVAlertViewController : NSObject <UITextViewDelegate> {
    id /* block */ _clickURLAction;
    RTVAlertViewModel *_viewModel;
    NSArray *_actions;
    AWEUIAlertView *_internalAlertView;
    UIImageView *_downloadImageView;
}

@property (retain, nonatomic) RTVAlertViewModel *viewModel;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) AWEUIAlertView *internalAlertView;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (copy, nonatomic) id /* block */ clickURLAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)arg0 context:(id)arg1;
- (void)addAction:(id)arg0 style:(long long)arg1 handler:(id /* block */)arg2;
- (void)setClickURLAction:(id /* block */)arg0;
- (id)__imageWithURLString:(id)arg0;
- (id)__attributedMessageWith:(id)arg0 highlights:(id)arg1 additionalAttributes:(id)arg2;
- (void)setInternalAlertView:(id)arg0;
- (id)internalAlertView;
- (void)setDownloadImageView:(id)arg0;
- (id /* block */)clickURLAction;
- (void)addAction:(id)arg0 style:(long long)arg1 font:(id)arg2 handler:(id /* block */)arg3;
- (id)downloadImageView;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (id)dismiss;
- (void).cxx_destruct;
- (id)actions;
- (id)show;
- (void)setViewModel:(id)arg0;
- (void)setActions:(id)arg0;
- (id)viewModel;
- (void)dealloc;

@end
