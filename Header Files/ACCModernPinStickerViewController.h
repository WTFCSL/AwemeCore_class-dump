//
//     Generated by private class-dump
//

@class ACCPinLoadingContainerView, NSString, ACCModernPinStickerPlayer, ACCPinStickerBottom, UIView, ACCModernPinStickerViewControllerInputData;

@interface ACCModernPinStickerViewController : UIViewController <AWEMediaSmallAnimationProtocol, ACCPinStickerBottomSliderDelegate> {
    BOOL _hasKVOController;
    UIView *_containerView;
    double _containerScale;
    UIView *_playerContainer;
    ACCModernPinStickerPlayer *_playerComponent;
    ACCPinStickerBottom *_bottomView;
    ACCPinLoadingContainerView *_loadingContainerView;
    ACCModernPinStickerViewControllerInputData *_inputData;
    struct CGPoint { double x; double y; } _containerCenter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPlayerRect;
}

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double containerScale;
@property (nonatomic) struct CGPoint { double x; double y; } containerCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerRect;
@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) ACCModernPinStickerPlayer *playerComponent;
@property (retain, nonatomic) ACCPinStickerBottom *bottomView;
@property (retain, nonatomic) ACCPinLoadingContainerView *loadingContainerView;
@property (retain, nonatomic) ACCModernPinStickerViewControllerInputData *inputData;
@property (nonatomic) BOOL hasKVOController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)bottomViewHeight;
- (id)initWithInputData:(id)arg0;
- (id)playerComponent;
- (void)setPlayerComponent:(id)arg0;
- (id)playerContainer;
- (void)setPlayerContainer:(id)arg0;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg0;
- (id)mediaSmallMediaContainer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (BOOL)hasKVOController;
- (void)observeDownloader;
- (void)setHasKVOController:(BOOL)arg0;
- (void)configScale;
- (struct CGPoint { double x0; double x1; })containerCenter;
- (void)setContainerScale:(double)arg0;
- (void)setContainerCenter:(struct CGPoint { double x0; double x1; })arg0;
- (double)containerScale;
- (void)setOriginalPlayerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerRect;
- (void)updateBottomView;
- (double)mediaSmallBottomViewHeight;
- (void)highlightSticker:(id)arg0;
- (void)cancelClicked;
- (void)startPin;
- (void)setupWithInputData;
- (void)updateLoadingProgress:(double)arg0;
- (void)hideLoadingContainerView;
- (void)processAfterCancel;
- (void)trackPropPinConfirm;
- (void)sliderDidSlideToValue:(double)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)bottomView;
- (void)setupUI;
- (void)setBottomView:(id)arg0;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
