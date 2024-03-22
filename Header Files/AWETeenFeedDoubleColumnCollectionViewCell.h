//
//     Generated by private class-dump
//

@class UIStackView, UIView, AWEAwemeModel, NSString, AWETeenFeedDoubleColumnViewController, UIImageView, LOTAnimationView, UILabel;

@interface AWETeenFeedDoubleColumnCollectionViewCell : UICollectionViewCell <AWETeenSubscribeMessage, AWETeenCollectMessage> {
    BOOL _isDigging;
    AWETeenFeedDoubleColumnViewController *_doubleColumnVC;
    long long _showOrder;
    UIImageView *_coverImageView;
    UIImageView *_failedImageView;
    UIStackView *_contentStackView;
    UILabel *_titleLabel;
    UILabel *_authorNameLabel;
    UIImageView *_authorThumbView;
    UIImageView *_likeIcon;
    UILabel *_likeNumberLabel;
    UIView *_authorAndLikeContainerView;
    UIView *_likeInteractionView;
    UIView *_authorInteractionView;
    UIImageView *_albumIcon;
    UIImageView *_collectionIcon;
    UIView *_recommendTagContainerView;
    UIImageView *_subscribeIconView;
    UILabel *_subscribeLabel;
    LOTAnimationView *_likeAnimationView;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *authorThumbView;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) UIView *authorAndLikeContainerView;
@property (retain, nonatomic) UIView *likeInteractionView;
@property (retain, nonatomic) UIView *authorInteractionView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UIImageView *collectionIcon;
@property (retain, nonatomic) UIView *recommendTagContainerView;
@property (retain, nonatomic) UIImageView *subscribeIconView;
@property (retain, nonatomic) UILabel *subscribeLabel;
@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (nonatomic) BOOL isDigging;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWETeenFeedDoubleColumnViewController *doubleColumnVC;
@property (nonatomic) long long showOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)likeNumberLabel;
- (void)setLikeNumberLabel:(id)arg0;
- (void)p_setupViews;
- (id)failedImageView;
- (void)setFailedImageView:(id)arg0;
- (id)coverImageViewBackgroundColor;
- (void)setLikeAnimationView:(id)arg0;
- (id)likeAnimationView;
- (void)p_setupConstraints;
- (id)likeIcon;
- (void)setLikeIcon:(id)arg0;
- (void)p_addNotification;
- (id)albumIcon;
- (id)recommendTagContainerView;
- (id)collectionViewCellBackgroundColor;
- (id)authorThumbView;
- (id)authorThumbViewBackgroundColor;
- (id)likeNameLabelColor;
- (void)setAuthorThumbView:(id)arg0;
- (void)setAlbumIcon:(id)arg0;
- (void)setRecommendTagContainerView:(id)arg0;
- (id)doubleColumnVC;
- (void)setDoubleColumnVC:(id)arg0;
- (BOOL)isDigging;
- (void)setIsDigging:(BOOL)arg0;
- (void)setShowOrder:(long long)arg0;
- (long long)showOrder;
- (void)didUpdateSubscribeStatus:(long long)arg0 secUserID:(id)arg1;
- (void)p_onAwemeDiggNotification:(id)arg0;
- (void)didFinishCollectWithItemID:(id)arg0 actionType:(unsigned long long)arg1 collectCount:(id)arg2;
- (void)p_setupTitleLabelText:(id)arg0;
- (void)p_addBindObserver;
- (void)p_loadCoverImageView;
- (void)p_loadAuthorThumbView;
- (id)collectionIcon;
- (id)authorInteractionView;
- (id)likeInteractionView;
- (id)subscribeIconView;
- (id)subscribeLabel;
- (id)authorAndLikeContainerView;
- (void)p_setLikeLabelString;
- (void)p_updateLikeIcon:(BOOL)arg0;
- (void)enterAuthorPage;
- (void)p_likeActionWithAnimation:(BOOL)arg0;
- (void)p_trackSquareLike:(BOOL)arg0;
- (void)p_likeAnimationWithStatus:(BOOL)arg0 requestFailed:(BOOL)arg1 animated:(BOOL)arg2;
- (id)authorNameLabelColor;
- (void)tapLikeIcon:(id)arg0;
- (void)tapAuthorThumbView:(id)arg0;
- (void)setAuthorAndLikeContainerView:(id)arg0;
- (void)setLikeInteractionView:(id)arg0;
- (void)setAuthorInteractionView:(id)arg0;
- (void)setCollectionIcon:(id)arg0;
- (void)setSubscribeIconView:(id)arg0;
- (void)setSubscribeLabel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)titleLabelColor;
- (id)contentStackView;
- (void)setContentStackView:(id)arg0;

@end