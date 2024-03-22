//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSDictionary, AWEAwemeDetailCellViewController, AWEFeedDetailTableViewLastCellMaskView, AWEUserModel, UIViewController;
@protocol AWEFeelGoodCellViewControllerProtocol;

@interface AWEAwemeDetailTableViewCell : UITableViewCell <AWEAwemeDetailTableViewCellProtocol, AWEAwemeContainerTableViewCellProtocol, AWEAwemeContainerTableViewCellPreloadProtocol, AWEAwemeDetailCellMaskProtocol, AWEFeelGoodCellProtocol> {
    BOOL _hadPrepareToDisplay;
    BOOL _shouldHideMusicInfo;
    BOOL _shouldShowGoodsElement;
    BOOL _shouldShowGoodsCardAnchorElement;
    BOOL _innerInteractionDelay;
    BOOL _forbidResetVideo;
    BOOL _isActive;
    BOOL _hasEntryFullPage;
    UIViewController<AWEFeelGoodCellViewControllerProtocol> *_feelGoodViewController;
    AWEAwemeModel *_registerElementModel;
    long long _indexPath;
    AWEAwemeDetailCellViewController *_viewController;
    Class _viewControllerClassType;
    double _defaultSeekToTime;
    NSString *_reactId;
    NSString *_previousPage;
    UIViewController *_parentVC;
    NSString *_detailEnterFrom;
    NSString *_detailReferString;
    NSDictionary *_context;
    AWEUserModel *_homepageUser;
    AWEFeedDetailTableViewLastCellMaskView *_lastCellMaskView;
}

@property (retain, nonatomic) AWEFeedDetailTableViewLastCellMaskView *lastCellMaskView;
@property (nonatomic) long long indexPath;
@property (retain, nonatomic) AWEAwemeDetailCellViewController *viewController;
@property (retain, nonatomic) Class viewControllerClassType;
@property (nonatomic) double defaultSeekToTime;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *previousPage;
@property (weak, nonatomic) UIViewController *parentVC;
@property (nonatomic) BOOL shouldHideMusicInfo;
@property (nonatomic) BOOL shouldShowGoodsElement;
@property (nonatomic) BOOL shouldShowGoodsCardAnchorElement;
@property (nonatomic) BOOL innerInteractionDelay;
@property (copy, nonatomic) NSString *detailEnterFrom;
@property (copy, nonatomic) NSString *detailReferString;
@property (nonatomic) BOOL forbidResetVideo;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) AWEUserModel *homepageUser;
@property (nonatomic) BOOL hasEntryFullPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (weak, nonatomic) UIViewController<AWEFeelGoodCellViewControllerProtocol> *feelGoodViewController;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)reuseIdentifierWithMediaType:(long long)arg0;
+ (Class)aAWEPadDetailTableViewAdapterClass;
+ (id)reuseIdentifierWithMediaType:(long long)arg0 isFakeAweme:(BOOL)arg1;

- (id)reactId;
- (void)setReactId:(id)arg0;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })arg0 toBreakPoint:(struct { long long x0; long long x1; })arg1;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)arg0;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)arg0;
- (id)aAWEPadModuleAdapter;
- (void)configWithModel:(id)arg0;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:(BOOL)arg0;
- (id)registerElementModel;
- (void)setRegisterElementModel:(id)arg0;
- (void)addInteract;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)configLastCellMaskViewWithTitle:(id)arg0 backHintText:(id)arg1 backAction:(id /* block */)arg2;
- (void)showLastCellMaskView:(BOOL)arg0;
- (id)aAWEPadDetailTableViewAdapter;
- (void)configVoiceOverElements;
- (BOOL)shouldHideMusicInfo;
- (id)detailEnterFrom;
- (id)detailReferString;
- (void)setDetailEnterFrom:(id)arg0;
- (void)setDetailReferString:(id)arg0;
- (void)setShouldHideMusicInfo:(BOOL)arg0;
- (BOOL)innerInteractionDelay;
- (id)homepageUser;
- (void)setHomepageUser:(id)arg0;
- (void)setFeelGoodViewController:(id)arg0;
- (id)feelGoodViewController;
- (BOOL)enableVideoVCResetLayout;
- (void)adjustVideoFrameIfNeeded;
- (void)setHasEntryFullPage:(BOOL)arg0;
- (Class)viewControllerClassType;
- (Class)interactionControllerClassType;
- (BOOL)shouldShowGoodsElement;
- (BOOL)shouldShowGoodsCardAnchorElement;
- (void)setInnerInteractionDelay:(BOOL)arg0;
- (BOOL)forbidResetVideo;
- (void)setForbidResetVideo:(BOOL)arg0;
- (void)p_adjustVideoFrameIfNeeded:(id)arg0;
- (id)lastCellMaskView;
- (BOOL)enableFullScreenPlay;
- (void)configCommentInputView;
- (void)replaceCurrentViewContoller:(id)arg0;
- (void)setViewControllerClassType:(Class)arg0;
- (void)setShouldShowGoodsElement:(BOOL)arg0;
- (void)setShouldShowGoodsCardAnchorElement:(BOOL)arg0;
- (BOOL)hasEntryFullPage;
- (void)setLastCellMaskView:(id)arg0;
- (void)prepareForDisplay;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setContext:(id)arg0;
- (void)setIndexPath:(long long)arg0;
- (void)stop;
- (long long)indexPath;
- (id)context;
- (BOOL)isActive;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (BOOL)accessibilityScroll:(long long)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (void)didEndDisplaying;
- (void)_setupChildVC;
- (void)willDisplay;
- (id)parentVC;
- (void)setParentVC:(id)arg0;

@end