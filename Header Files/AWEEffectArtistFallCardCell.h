//
//     Generated by private class-dump
//

@class UIView, UILongPressGestureRecognizer, NSString, UIImageView, AWEDetailCellTagLabel, UIViewController, AWEEffectModel, UILabel;
@protocol AWEAwemeLongPressModalViewControllerProtocol, AWEEffectArtistCellLongPressFunctionDelegate;

@interface AWEEffectArtistFallCardCell : UICollectionViewCell <AFDLongPressDelegateProtocol> {
    BOOL _isMine;
    NSString *_referString;
    id<AWEEffectArtistCellLongPressFunctionDelegate> _functionDelegate;
    UIView *_coverContainerView;
    UIImageView *_staticCoverImageView;
    UIImageView *_coverImageView;
    AWEDetailCellTagLabel *_topLabel;
    UILabel *_hiddenLabel;
    UILabel *_titleLabel;
    UILabel *_userCountLabel;
    AWEEffectModel *_effectModel;
    UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *_longPressVC;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *staticCoverImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLabel;
@property (retain, nonatomic) UILabel *hiddenLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (nonatomic) BOOL isMine;
@property (retain, nonatomic) AWEEffectModel *effectModel;
@property (retain, nonatomic) UIViewController<AWEAwemeLongPressModalViewControllerProtocol> *longPressVC;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEEffectArtistCellLongPressFunctionDelegate> functionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })itemSize;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)longPressVC;
- (void)setLongPressVC:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)effectModel;
- (void)setEffectModel:(id)arg0;
- (id)userCountLabel;
- (void)setUserCountLabel:(id)arg0;
- (void)addLongPressGesture;
- (id)coverContainerView;
- (void)setCoverContainerView:(id)arg0;
- (void)showNewPressPanelForScene:(id)arg0;
- (id)generateLongPressFunctionModels;
- (void)trackSetPropPageLogExtra:(id)arg0 actionType:(id)arg1;
- (id)hiddenLabel;
- (id)functionDelegate;
- (void)pinToTopCurrentEffectModel;
- (void)hiddenCurrentEffectModel;
- (void)removeEffectCover;
- (void)setFunctionDelegate:(id)arg0;
- (void)setHiddenLabel:(id)arg0;
- (void)updateCoverImageView;
- (id)staticCoverImageView;
- (void)updateTagLabel;
- (void)showLongPressFunctionPanel;
- (void)updateWithModel:(id)arg0 isMine:(BOOL)arg1;
- (void)setStaticCoverImageView:(id)arg0;
- (id)longPressGesture;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)handleLongPressGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (void)setupUI;
- (id)topLabel;
- (void)setTopLabel:(id)arg0;
- (BOOL)isMine;
- (void)setIsMine:(BOOL)arg0;

@end
