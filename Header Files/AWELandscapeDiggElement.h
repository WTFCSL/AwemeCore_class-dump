//
//     Generated by private class-dump
//

@class NSString, AWELandScapeLikeButton, AWELandscapeDiggElementViewModel;

@interface AWELandscapeDiggElement : AWELandscapeInteractionBaseElement <AWELandscapeDiggElementDelegate> {
    AWELandScapeLikeButton *_likeButton;
    AWELandscapeDiggElementViewModel *_viewModel;
    struct CGPoint { double x; double y; } _doubleTapLocation;
}

@property (retain, nonatomic) AWELandScapeLikeButton *likeButton;
@property (retain, nonatomic) AWELandscapeDiggElementViewModel *viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } doubleTapLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldResponseGestureRecognizer:(id)arg0;
- (BOOL)handleResponseGestureRecognizer:(id)arg0;
- (void)updateDiggCount;
- (void)announceAccessibilityMsg:(id)arg0;
- (void)exitLandscapeWithCompletion:(id /* block */)arg0;
- (struct CGPoint { double x0; double x1; })doubleTapLocation;
- (void)setDoubleTapLocation:(struct CGPoint { double x0; double x1; })arg0;
- (void)handleLikeButtonTap;
- (BOOL)shouldSupportDoublePause;
- (void)playDoubleTapLikeAnimation;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;

@end