//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMusicPlaylistCoverEditViewController : TOCropViewController <TOCropViewControllerDelegate> {
    id /* block */ _completionBlock;
}

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cropViewController:(id)arg0 didCropToImage:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 angle:(long long)arg3 button:(id)arg4;
- (void)cropViewController:(id)arg0 didFinishCancelled:(BOOL)arg1;
- (long long)croppingStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCropViewWithVerticalLayout:(BOOL)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)viewDidLoad;
- (void)setupUI;

@end