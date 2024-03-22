//
//     Generated by private class-dump
//

@class AWERightSideBarInteractContext, NSString, AWERightSideBarVideoInteractViewModel, AWERightSideBarVideoAuthorView, AWEGradientView, DUXTextTag, UITapGestureRecognizer;

@interface AWERightSideBarInteractViewController : UIViewController <UIGestureRecognizerDelegate> {
    AWEGradientView *_gradientView;
    id /* block */ _singleTappedBlock;
    AWERightSideBarVideoAuthorView *_authorView;
    DUXTextTag *_imageAlbumTag;
    UITapGestureRecognizer *_tapGesture;
    double _lastClickTimeStamp;
    AWERightSideBarVideoInteractViewModel *_interactViewModel;
    AWERightSideBarInteractContext *_interactContext;
}

@property (retain, nonatomic) AWERightSideBarVideoAuthorView *authorView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) DUXTextTag *imageAlbumTag;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) double lastClickTimeStamp;
@property (retain, nonatomic) AWERightSideBarVideoInteractViewModel *interactViewModel;
@property (retain, nonatomic) AWERightSideBarInteractContext *interactContext;
@property (copy, nonatomic) id /* block */ singleTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initAnimationVCWithAwemeModel:(id)arg0;

- (void)setupGesture;
- (id)authorView;
- (void)setAuthorView:(id)arg0;
- (void)hideGradientView;
- (void)showGradientView;
- (void)bindEvent;
- (void)setUpSubViews;
- (void)setSingleTappedBlock:(id /* block */)arg0;
- (double)lastClickTimeStamp;
- (void)setLastClickTimeStamp:(double)arg0;
- (void)onInteractViewTapped:(id)arg0;
- (void)setupInteractView;
- (id)imageAlbumTag;
- (void)updateAlbumTag:(id)arg0;
- (id)interactViewModel;
- (void)setInteractViewModel:(id)arg0;
- (id)interactContext;
- (void)setInteractContext:(id)arg0;
- (void)updateInteractView:(id)arg0;
- (void)onVideoSingleTapped:(id)arg0;
- (void)onVideoDoubleTapped:(id)arg0;
- (id /* block */)singleTappedBlock;
- (void)onFollowBottonClicked;
- (void)setImageAlbumTag:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (id)tapGesture;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)gradientView;
- (void)viewDidLoad;
- (void)setTapGesture:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
