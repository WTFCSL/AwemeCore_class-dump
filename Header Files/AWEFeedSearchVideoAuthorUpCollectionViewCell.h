//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEFeedSearchVideoAuthorUpCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol> {
    BOOL _preferedShowPostTime;
    UIImageView *_coverImageView;
    UIImageView *_tagView;
    UIImageView *_mixVideoIconView;
    UILabel *_descriptionLabel;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UILabel *_starCountLabel;
    UIImageView *_starCountImageView;
    UIImageView *_mediaTypeView;
    double _currentAlpha;
    UIView *_descriptionContainerView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *mixVideoIconView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *starCountLabel;
@property (retain, nonatomic) UIImageView *starCountImageView;
@property (retain, nonatomic) UIImageView *mediaTypeView;
@property (nonatomic) double currentAlpha;
@property (nonatomic) BOOL preferedShowPostTime;
@property (retain, nonatomic) UIView *descriptionContainerView;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableMixVideo:(id)arg0;

- (void)updateWithAweme:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)userNameLabel;
- (id)userImageView;
- (void)setUserImageView:(id)arg0;
- (void)setUserNameLabel:(id)arg0;
- (id)appendMixVideoTagIfNeededWithAweme:(id)arg0 attributedString:(id)arg1;
- (void)setPreferedShowPostTime:(BOOL)arg0;
- (id)addBottomGradientView;
- (void)setCurrentAlpha:(double)arg0;
- (id)mixVideoIconView;
- (void)setMixVideoIconView:(id)arg0;
- (id)mediaTypeView;
- (id)starCountLabel;
- (id)starCountImageView;
- (id)nickNameAttrStrWithNickName:(id)arg0 customID:(id)arg1;
- (id)awe_starCountImageView;
- (id)firstAvailableLabelForAweme:(id)arg0;
- (void)setStarCountLabel:(id)arg0;
- (void)setStarCountImageView:(id)arg0;
- (void)setMediaTypeView:(id)arg0;
- (BOOL)preferedShowPostTime;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)scrollViewDidScroll:(id)arg0;
- (double)currentAlpha;
- (void)prepareForReuse;
- (id)descriptionContainerView;
- (void)setDescriptionContainerView:(id)arg0;
- (id)tagView;
- (void)setTagView:(id)arg0;

@end
