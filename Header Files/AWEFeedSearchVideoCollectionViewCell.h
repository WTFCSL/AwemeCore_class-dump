//
//     Generated by private class-dump
//

@class NSIndexPath, AWEFeedVideoTagView, UILabel, NSDictionary, UIView, NSString, UILongPressGestureRecognizer, AWESearchCachalotResultContext, AWESearchCachalotFeedControllerContext, AWEAwemeModel, YYLabel, NSBlockOperation, UIImageView;

@interface AWEFeedSearchVideoCollectionViewCell : UICollectionViewCell <AWESearchCachalotCardViewProtocol, AWEFeedSearchVideoCollectionViewCellProtocol, AWEFeedSearchVideoCellContainerViewDelegate, AWEFeedNearbyCollectionCellProtocol, AWEAweDoubleColumnDynamicCoverProtocol> {
    BOOL _isDynamicCover;
    BOOL _preferedShowPostTime;
    UIImageView *_coverImageView;
    NSBlockOperation *_dynamicCoverOperation;
    NSDictionary *_logExtraDict;
    AWESearchCachalotFeedControllerContext *_cellContext;
    AWESearchCachalotResultContext *_cachalotContext;
    id /* block */ _highligtBlock;
    UIView *_containerView;
    UIImageView *_tagView;
    UIImageView *_mixVideoIconView;
    UILabel *_descriptionLabel;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UILabel *_starCountLabel;
    UIImageView *_starCountImageView;
    UIImageView *_mediaTypeView;
    UILabel *_adTagLabel;
    UILabel *_recommendLabel;
    double _currentAlpha;
    AWEAwemeModel *_awemeModel;
    NSIndexPath *_index;
    YYLabel *_timeStampLabel;
    AWEFeedVideoTagView *_videoTagView;
    UIImageView *_hotSpotTagImageView;
    long long _interactiveStyle;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *mixVideoIconView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *starCountLabel;
@property (retain, nonatomic) UIImageView *starCountImageView;
@property (retain, nonatomic) UIImageView *mediaTypeView;
@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (nonatomic) double currentAlpha;
@property (nonatomic) BOOL preferedShowPostTime;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSIndexPath *index;
@property (retain, nonatomic) YYLabel *timeStampLabel;
@property (retain, nonatomic) AWEFeedVideoTagView *videoTagView;
@property (retain, nonatomic) UIImageView *hotSpotTagImageView;
@property (nonatomic) long long interactiveStyle;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) BOOL isDynamicCover;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) NSBlockOperation *dynamicCoverOperation;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWESearchCachalotFeedControllerContext *cellContext;
@property (weak, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (copy, nonatomic) id /* block */ highligtBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *enterFrom;

+ (BOOL)enableMixVideo:(id)arg0;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)arg0 width:(double)arg1;
+ (BOOL)fixRefreshingClick;
+ (BOOL)fixTransition;
+ (BOOL)isNeedUseCustomContainer;

- (id)awemeModel;
- (id)referString;
- (id)liveTransitionContext;
- (void)setAwemeModel:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)cellWillDisplay;
- (void)updateWithAweme:(id)arg0;
- (void)disableLongPressGesture;
- (void)cellDidEndDisplaying;
- (id)adTagLabel;
- (void)setAdTagLabel:(id)arg0;
- (void)setRecommendLabel:(id)arg0;
- (id)recommendLabel;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)userNameLabel;
- (id)userImageView;
- (void)setUserImageView:(id)arg0;
- (void)setUserNameLabel:(id)arg0;
- (void)componentClicked;
- (id)videoTagView;
- (void)setVideoTagView:(id)arg0;
- (void)addLongPressGesture;
- (long long)interactiveStyle;
- (void)setInteractiveStyle:(long long)arg0;
- (id)appendMixVideoTagIfNeededWithAweme:(id)arg0 attributedString:(id)arg1;
- (id)hotSpotTagImageView;
- (void)showNewPressPanelForScene:(id)arg0;
- (void)setHotSpotTagImageView:(id)arg0;
- (id)cellDynamicCoverOperation;
- (void)startDynamicCoverOperation;
- (void)clearDynamicCoverOperation;
- (BOOL)isDynamicCover;
- (void)playDynamicCover;
- (void)playStaticCover;
- (void)dismissVideoInfo;
- (void)showVideoInfo;
- (void)setPreferedShowPostTime:(BOOL)arg0;
- (void)setCurrentAlpha:(double)arg0;
- (id)mixVideoIconView;
- (void)setMixVideoIconView:(id)arg0;
- (id)mediaTypeView;
- (id)starCountLabel;
- (id)starCountImageView;
- (id)awe_starCountImageView;
- (id)firstAvailableLabelForAweme:(id)arg0;
- (void)setStarCountLabel:(id)arg0;
- (void)setStarCountImageView:(id)arg0;
- (void)setMediaTypeView:(id)arg0;
- (BOOL)preferedShowPostTime;
- (void)searchVideoCellContainerView:(id)arg0 touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setCachalotContext:(id)arg0;
- (id)cachalotContext;
- (id /* block */)highligtBlock;
- (void)cachalotSetHighlighted:(BOOL)arg0;
- (id)videoCachalotContext;
- (double)descriptionLabeloffset;
- (id)timeStampLabel;
- (struct CGSize { double x0; double x1; })starCountImageViewSize;
- (void)setIsDynamicCover:(BOOL)arg0;
- (id)dynamicCoverOperation;
- (void)setDynamicCoverOperation:(id)arg0;
- (void)updateCoverImageWithAweme:(id)arg0;
- (id)nickNameAttrStrWithAWEUserModel:(id)arg0;
- (void)updateForAd;
- (void)setHighligtBlock:(id /* block */)arg0;
- (void)setTimeStampLabel:(id)arg0;
- (id)longPressGesture;
- (void)setIndex:(id)arg0;
- (id)transitionContext;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (void)setDescriptionLabel:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (id)indexPath;
- (void)scrollViewDidScroll:(id)arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (id)index;
- (id)containerView;
- (double)currentAlpha;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg0;
- (void)dealloc;
- (id)componentView;
- (void)handleLongPressGesture:(id)arg0;
- (void)setLongPressGesture:(id)arg0;
- (void)updateWithViewModel:(id)arg0;
- (double)bottomOffset;
- (id)cellContext;
- (void)setCellContext:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
