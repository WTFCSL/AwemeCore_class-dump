//
//     Generated by private class-dump
//

@class UIView, AWEPublishSuccessView, AWEAwemeModel, AWEVideoPublishViewModel, NSArray, UIImageView, UIButton, AWEPublishSuccessViewModern, AWEPublishSuccessBottomView, NSString, UILabel;
@protocol AWESharePublishExtension;

@interface AWEPublishShareToastController : UIViewController <UIGestureRecognizerDelegate> {
    BOOL _showBottomSuccessView;
    BOOL _showIMListOnly;
    AWEAwemeModel *_model;
    NSArray *_shareModelList;
    unsigned long long _toastType;
    unsigned long long _type;
    long long _sharePlatform;
    id<AWESharePublishExtension> _shareExtension;
    AWEVideoPublishViewModel *_publishViewModel;
    AWEPublishSuccessView *_publishSuccessView;
    AWEPublishSuccessViewModern *_publishSuccessViewModern;
    AWEPublishSuccessBottomView *_publishSuccessBottomView;
    UIImageView *_coverImageView;
    UIButton *_bindPhoneButton;
    UIView *_separateLine;
    UIImageView *_stickerIconImageView;
    UILabel *_stickerInfoLabel;
    UIImageView *_arrowImageView;
    id /* block */ _showBlock;
    id /* block */ _closeBlock;
    id /* block */ _animatedCloseBlock;
    id /* block */ _cancelAnimatedCloseBlock;
    id /* block */ _dismissalCompletionBlock;
    id /* block */ _tapBlock;
}

@property (nonatomic) unsigned long long toastType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long sharePlatform;
@property (retain, nonatomic) id<AWESharePublishExtension> shareExtension;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, nonatomic) BOOL showIMListOnly;
@property (retain, nonatomic) AWEPublishSuccessView *publishSuccessView;
@property (retain, nonatomic) AWEPublishSuccessViewModern *publishSuccessViewModern;
@property (retain, nonatomic) AWEPublishSuccessBottomView *publishSuccessBottomView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *bindPhoneButton;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIImageView *stickerIconImageView;
@property (retain, nonatomic) UILabel *stickerInfoLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ animatedCloseBlock;
@property (copy, nonatomic) id /* block */ cancelAnimatedCloseBlock;
@property (copy, nonatomic) id /* block */ dismissalCompletionBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSArray *shareModelList;
@property (nonatomic) BOOL showBottomSuccessView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)shouldFetchShareModels;
+ (id)topViewController;

- (id)referString;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (long long)sharePlatform;
- (void)setSharePlatform:(long long)arg0;
- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id)aAWEPadModuleAdapter;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)publishViewModel;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (unsigned long long)toastType;
- (void)setToastType:(unsigned long long)arg0;
- (void)setupModernUI;
- (BOOL)hasCommerceStickerInfo;
- (void)setPublishViewModel:(id)arg0;
- (void)setupSuccessViewType;
- (BOOL)shouldShowModernSuccessView;
- (void)setupLegacyUI;
- (BOOL)shouldShowBottomSuccessView;
- (void)setShowBottomSuccessView:(BOOL)arg0;
- (BOOL)showBottomSuccessView;
- (void)updateViewFrame:(id)arg0;
- (void)p_setupI10N;
- (void)setupLayer;
- (void)p_setupCommerceSticker;
- (id)publishSuccessBottomView;
- (BOOL)shouldShowImShareLabel;
- (void)setPublishSuccessView:(id)arg0;
- (id)publishSuccessView;
- (void)bindPhoneButtonDidPressed;
- (void)_onCoverImageClicked:(id)arg0;
- (BOOL)p_shouldEnableIMShareList;
- (BOOL)showIMListOnly;
- (id)shareModelList;
- (void)setPublishSuccessBottomView:(id)arg0;
- (void)updateViewFrameForBottomView:(id)arg0;
- (void)p_trackQuickSaveIfNeededWithAction:(id)arg0;
- (id)stickerIconImageView;
- (id)stickerInfoLabel;
- (double)toastHeight;
- (id)publishSuccessViewModern;
- (id /* block */)dismissalCompletionBlock;
- (void)setDismissalCompletionBlock:(id /* block */)arg0;
- (void)setShareExtension:(id)arg0;
- (id /* block */)animatedCloseBlock;
- (id /* block */)cancelAnimatedCloseBlock;
- (void)goToAdDetail:(id)arg0;
- (void)_onCoverImageClicked_IMP:(id)arg0;
- (void)goToAdDetail_IMP:(id)arg0;
- (void)setPublishSuccessViewModern:(id)arg0;
- (id)initWithModel:(id)arg0 type:(unsigned long long)arg1 platform:(long long)arg2 shareModels:(id)arg3 publishViewModel:(id)arg4 showIMListOnly:(BOOL)arg5;
- (id)shareExtension;
- (id)bindPhoneButton;
- (void)setShareModelList:(id)arg0;
- (void)setBindPhoneButton:(id)arg0;
- (void)setStickerIconImageView:(id)arg0;
- (void)setStickerInfoLabel:(id)arg0;
- (void)setAnimatedCloseBlock:(id /* block */)arg0;
- (void)setCancelAnimatedCloseBlock:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (unsigned long long)type;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setType:(unsigned long long)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)viewDidLoad;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
