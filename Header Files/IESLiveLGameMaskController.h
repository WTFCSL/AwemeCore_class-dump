//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLGameMaskController : UIViewController <UIGestureRecognizerDelegate> {
    id /* block */ _clickBlankAreaBlk;
}

@property (copy, nonatomic) id /* block */ clickBlankAreaBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showControllerWithCompletion:(id /* block */)arg0;
- (void)closeControllerWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)closeControllerWithCompletion:(id /* block */)arg0;
- (void)setClickBlankAreaBlk:(id /* block */)arg0;
- (void)clickBlankArea;
- (id /* block */)clickBlankAreaBlk;
- (id)init;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)viewDidLoad;

@end
