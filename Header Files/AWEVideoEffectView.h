//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEVideoPublishViewModel, IESEffectModel, UICollectionView, UILabel, ACCButton;
@protocol ACCLoadingViewProtocol, AWEVideoEffectViewDelegate;

@interface AWEVideoEffectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _hideEffectCategoryMessage;
    BOOL _longPressing;
    unsigned long long _type;
    id<AWEVideoEffectViewDelegate> _delegate;
    NSString *_effectCategory;
    IESEffectModel *_selectedToolEffect;
    AWEVideoPublishViewModel *_publishModel;
    UICollectionView *_collectionView;
    UILabel *_textLabel;
    ACCButton *_revokeBtn;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    NSArray *_timeEffects;
    NSArray *_effects;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) ACCButton *revokeBtn;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSArray *timeEffects;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSString *effectCategory;
@property (retain, nonatomic) IESEffectModel *selectedToolEffect;
@property (nonatomic, getter=isLongPressing) BOOL longPressing;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<AWEVideoEffectViewDelegate> delegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL hideEffectCategoryMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)effectCategory;
- (void)setEffectCategory:(id)arg0;
- (void)generateLightImpact;
- (void)configCell:(id)arg0 withEffect:(id)arg1;
- (id)effectCategoryTitle;
- (void)hideRevokeBtn:(BOOL)arg0;
- (void)selectTimeEffect:(long long)arg0;
- (BOOL)hasValidMultiVoiceEffectSegment;
- (void)updateCellWithTimeEffect:(long long)arg0;
- (void)p_stopLoadingAnim;
- (id)initWithType:(unsigned long long)arg0 effects:(id)arg1 effectCategory:(id)arg2 publishModel:(id)arg3;
- (void)selectToolEffectWithEffectId:(id)arg0 animated:(BOOL)arg1;
- (id)selectedToolEffect;
- (void)p_startLoadingAnim;
- (void)didClickedRevokeBtn:(id)arg0;
- (void)updateCellWithEffect:(id)arg0;
- (void)resetToolEffectTip;
- (void)deselectToolEffectWithEffectId:(id)arg0;
- (void)setUpScalableRangeViewTip:(double)arg0;
- (void)setTimeEffects:(id)arg0;
- (id)revokeBtn;
- (id)timeEffects;
- (BOOL)hideEffectCategoryMessage;
- (BOOL)effectCoverNeedReduce;
- (id)staticImageWithImage:(id)arg0;
- (void)longPressedAnimationStart:(id)arg0;
- (void)setLongPressing:(BOOL)arg0;
- (void)configTimeCell:(id)arg0 withSelectedStatus:(BOOL)arg1;
- (long long)findToolEffectWithEffectId:(id)arg0;
- (void)setSelectedToolEffect:(id)arg0;
- (void)configVideoEffectRevokeButton:(id)arg0;
- (void)updateWithType:(unsigned long long)arg0 effects:(id)arg1 effectCategory:(id)arg2;
- (void)setHideEffectCategoryMessage:(BOOL)arg0;
- (void)setRevokeBtn:(id)arg0;
- (void)reload;
- (id)textLabel;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)setDescriptionText:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (unsigned long long)type;
- (BOOL)isLongPressing;
- (void)setCollectionView:(id)arg0;
- (id)effects;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setEffects:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)endLongPress:(id)arg0;

@end