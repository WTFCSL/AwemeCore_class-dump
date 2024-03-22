//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, RACDisposable, NSString, UIImageView, NSDictionary, AWEPOIUGCRateFiveStarView, UIVisualEffectView, UILabel, AWEPOIGradeSelectableView;
@protocol AWEPOIUGCRateCardViewDelegate;

@interface AWEPOIUGCRateCardView : UIView <AWEPOIGradeSelectableViewDelegate> {
    BOOL _hasChangedGradeType;
    BOOL _hasSelectedTag;
    id<AWEPOIUGCRateCardViewDelegate> _delegate;
    AWEAwemeModel *_model;
    NSDictionary *_logExtra;
    UIVisualEffectView *_blurEffectView;
    UIView *_firstBackgroundView;
    UIView *_closeView;
    UIImageView *_closeImageView;
    UIView *_gradeContainerView;
    UIImageView *_poiIconImageView;
    UILabel *_poiLabel;
    UILabel *_titleLabel;
    UIView *_tipsView;
    UIView *_tipsBackgroundView;
    UILabel *_tipsLabel;
    AWEPOIGradeSelectableView *_gradeSelectableView;
    AWEPOIUGCRateFiveStarView *_fiveStarView;
    RACDisposable *_notificationDisposable;
    NSString *_creationId;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *firstBackgroundView;
@property (retain, nonatomic) UIView *closeView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *gradeContainerView;
@property (retain, nonatomic) UIImageView *poiIconImageView;
@property (retain, nonatomic) UILabel *poiLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *tipsBackgroundView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) AWEPOIGradeSelectableView *gradeSelectableView;
@property (retain, nonatomic) AWEPOIUGCRateFiveStarView *fiveStarView;
@property (retain, nonatomic) RACDisposable *notificationDisposable;
@property (nonatomic) BOOL hasChangedGradeType;
@property (nonatomic) BOOL hasSelectedTag;
@property (copy, nonatomic) NSString *creationId;
@property (weak, nonatomic) id<AWEPOIUGCRateCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)viewDidDisposed;
- (id)tipsLabel;
- (id)creationId;
- (void)setCreationId:(id)arg0;
- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (void)p_setupUI;
- (void)updateWithAwemeModel:(id)arg0 extraParams:(id)arg1;
- (void)setFirstBackgroundView:(id)arg0;
- (id)firstBackgroundView;
- (id)fiveStarView;
- (void)setFiveStarView:(id)arg0;
- (id)poiLabel;
- (void)setPoiLabel:(id)arg0;
- (void)gradeSelectableView:(id)arg0 rateGradeDidSelected:(id)arg1;
- (void)closeRateCardView;
- (id)gradeSelectableView;
- (BOOL)hasSelectedTag;
- (void)setHasSelectedTag:(BOOL)arg0;
- (void)setGradeSelectableView:(id)arg0;
- (id)fetchCommonTrackParams;
- (void)p_setupGradeContainerView;
- (id)tipsBackgroundView;
- (id)gradeContainerView;
- (id)poiIconImageView;
- (BOOL)isFromFamiliarWithParams:(id)arg0;
- (void)rateGradeDidSelected:(id)arg0;
- (void)updateA11y;
- (id)notificationDisposable;
- (void)setNotificationDisposable:(id)arg0;
- (void)setGradeContainerView:(id)arg0;
- (void)setPoiIconImageView:(id)arg0;
- (void)setTipsBackgroundView:(id)arg0;
- (BOOL)hasChangedGradeType;
- (void)setHasChangedGradeType:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg0;
- (void)willDisplay;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end
