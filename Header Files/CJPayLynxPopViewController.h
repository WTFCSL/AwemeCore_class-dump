//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CJPayBaseLynxView, NSTimer;

@interface CJPayLynxPopViewController : CJPayFullPageBaseViewController <CJPayLynxViewDelegate> {
    BOOL _haveShowError;
    id /* block */ _eventBlock;
    CJPayBaseLynxView *_lynxView;
    NSDictionary *_lynxParams;
    NSString *_schema;
    NSTimer *_closeTimer;
}

@property (retain, nonatomic) CJPayBaseLynxView *lynxView;
@property (copy, nonatomic) NSDictionary *lynxParams;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL haveShowError;
@property (retain, nonatomic) NSTimer *closeTimer;
@property (copy, nonatomic) id /* block */ eventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cjShouldShowBottomView;
- (BOOL)cjNeedAnimation;
- (id)lynxView;
- (id)closeTimer;
- (void)setCloseTimer:(id)arg0;
- (void)setLynxView:(id)arg0;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidRecieveError:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (void)viewDidFinishLoadWithError:(id)arg0;
- (void)lynxView:(id)arg0 receiveEvent:(id)arg1 withData:(id)arg2;
- (id)lynxParams;
- (void)setLynxParams:(id)arg0;
- (id)initWithSchema:(id)arg0 contentInfo:(id)arg1;
- (void)p_createCloseTimer;
- (void)p_showAnimationAction;
- (void)p_handleOpenError;
- (void)p_cancelCloseTimer;
- (BOOL)haveShowError;
- (void)setHaveShowError:(BOOL)arg0;
- (BOOL)p_conformTimeInterval:(long long)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (void)setEventBlock:(id /* block */)arg0;
- (id /* block */)eventBlock;
- (void)viewDidLoad;
- (id)schema;
- (void)setupUI;

@end