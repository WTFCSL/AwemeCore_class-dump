//
//     Generated by private class-dump
//

@protocol BDXAudioViewControllerDelegate;

@interface BDXAudioViewController : UIViewController {
    id<BDXAudioViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id<BDXAudioViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;

@end
