//
//     Generated by private class-dump
//

@class UILongPressGestureRecognizer, UIViewController, NSString, NSDictionary, AWEPostVideoMaskView, AWEUserWorkCellViewModel;
@protocol AWEAwemeLongPressModalViewControllerProtocol, AWEUserWorkCollectionViewCellTabDelegate;

@interface AWEUserWorkCollectionViewComponentCell : UICollectionViewCell <CAAnimationDelegate, AWEUserWorkCollectionViewComponentCellProtocol> {
    BOOL _dontRespondLongPressGesture;
    AWEUserWorkCellViewModel *_viewModel;
    UILongPressGestureRecognizer *_longPressGesture;
    UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *_longPressVC;
    long long _awemeType;
    NSString *_trackerContentType;
    NSString *_trackerEnterMethod;
    NSDictionary *_trackerCommonParams;
    AWEPostVideoMaskView *_currentVideoMaskView;
    unsigned long long _cellPosition;
    id<AWEUserWorkCollectionViewCellTabDelegate> _tabDelegate;
}

@property (weak, nonatomic) AWEUserWorkCellViewModel *viewModel;
@property (nonatomic) BOOL dontRespondLongPressGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (nonatomic) long long awemeType;
@property (copy, nonatomic) NSString *trackerContentType;
@property (copy, nonatomic) NSString *trackerEnterMethod;
@property (retain, nonatomic) NSDictionary *trackerCommonParams;
@property (retain, nonatomic) AWEPostVideoMaskView *currentVideoMaskView;
@property (nonatomic) unsigned long long cellPosition;
@property (weak, nonatomic) id<AWEUserWorkCollectionViewCellTabDelegate> tabDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)identifier;

- (id)referString;
- (id)aAWEPadModuleAdapter;
- (long long)awemeType;
- (void)configWithViewModel:(id)arg0;
- (void)setAwemeType:(long long)arg0;
- (id)longPressVC;
- (void)setLongPressVC:(id)arg0;
- (void)setTrackerCommonParams:(id)arg0;
- (id)chooseButton;
- (id /* block */)shareConfigurationHandler;
- (void)showNewPressPanelForScene:(id)arg0;
- (void)endControlServerContext:(BOOL)arg0;
- (void)addPageIdentifierForTranspondIMShareModels:(id)arg0;
- (void)cellWithDontRespondLongPressGesture:(BOOL)arg0;
- (void)clearAnimatedImageBuffer;
- (BOOL)shouldUseDynamicCover:(id)arg0;
- (void)performHighlightAnimation:(unsigned long long)arg0;
- (void)configTabDelegate:(id)arg0;
- (void)markCurrentVideo:(BOOL)arg0 text:(id)arg1 alpha:(double)arg2;
- (void)addTranspondIMShareModelsIfNeeded:(id)arg0 completion:(id /* block */)arg1;
- (id)trackerCommonParams;
- (id)tabDelegate;
- (void)setTabDelegate:(id)arg0;
- (id)__createHighlightAnimation:(BOOL)arg0 position:(unsigned long long)arg1;
- (id)currentVideoMaskView;
- (void)setDontRespondLongPressGesture:(BOOL)arg0;
- (id)generateStoryModel;
- (BOOL)dontRespondLongPressGesture;
- (void)trackLongPressPanelShow;
- (id)generateLongPressFunctionModelsWithAWEModel:(id)arg0;
- (id)generateSetEffectAwemeCoverModelIfNeeded;
- (void)setCurrentVideoMaskView:(id)arg0;
- (BOOL)currentVideoMaskViewShow;
- (void)configLongPressGesture;
- (void)longPressTrigger;
- (void)trackLongPressPanelDismiss:(id)arg0 hasScrolled:(BOOL)arg1 enterDate:(id)arg2;
- (void)trackZanshangShow;
- (id)trackerContentType;
- (id)trackerEnterMethod;
- (void)setTrackerEnterMethod:(id)arg0;
- (void)setTrackerContentType:(id)arg0;
- (id)longPressGesture;
- (void).cxx_destruct;
- (id)imageView;
- (void)setCellPosition:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)handleLongPressGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (unsigned long long)cellPosition;

@end
