//
//     Generated by private class-dump
//

@class NSString, UIImageView, LOTAnimationView, UILabel, AWEHotSpotInnerContext;

@interface AWEHotPointPanelTableViewCell : UITableViewCell <AWEHotPointPanelTableViewCellProtocol> {
    BOOL _isOptimized;
    UILabel *_indexLabel;
    UILabel *_contentLabel;
    UILabel *_relateCountLabel;
    UIImageView *_bgImageView;
    UIImageView *_risingHotSpotImageView;
    AWEHotSpotInnerContext *_context;
    UIImageView *_tagImageView;
    UIImageView *_hotCountIconView;
    UILabel *_useCountLabel;
    LOTAnimationView *_hotLiveLottieView;
    UILabel *_relationLabel;
}

@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIImageView *hotCountIconView;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) UILabel *relateCountLabel;
@property (retain, nonatomic) UIImageView *risingHotSpotImageView;
@property (retain, nonatomic) LOTAnimationView *hotLiveLottieView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) AWEHotSpotInnerContext *context;
@property (readonly, nonatomic) BOOL isOptimized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)cellHeight;

- (void)hideMaskView;
- (id)relationLabel;
- (void)setRelationLabel:(id)arg0;
- (void)setTagImageView:(id)arg0;
- (id)tagImageView;
- (void)configureUI;
- (id)hotLiveLottieView;
- (void)setHotLiveLottieView:(id)arg0;
- (id)risingHotSpotImageView;
- (id)relateCountLabel;
- (id)hotCountIconView;
- (id)useCountLabel;
- (void)configureWithModel:(id)arg0 indexPath:(id)arg1 inChannel:(BOOL)arg2;
- (void)configureWithModel:(id)arg0 indexPath:(id)arg1 inChannel:(BOOL)arg2 needNewDesc:(BOOL)arg3;
- (BOOL)shouldShowCustomizedLabel;
- (void)configRelatedLabel:(id)arg0;
- (void)configureWithModel:(id)arg0 indexPath:(id)arg1;
- (void)showMaskViewWithIndexPath:(id)arg0;
- (void)bindContext:(id)arg0;
- (void)setIndexLabel:(id)arg0;
- (void)setRelateCountLabel:(id)arg0;
- (void)setRisingHotSpotImageView:(id)arg0;
- (BOOL)isOptimized;
- (void)setHotCountIconView:(id)arg0;
- (void)setUseCountLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)indexLabel;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)prepareForReuse;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end