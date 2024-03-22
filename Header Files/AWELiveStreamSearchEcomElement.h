//
//     Generated by private class-dump
//

@class UITapGestureRecognizer, AWELiveStreamLocalSearchModel, UIImageView, IESLiveImageView, UILabel, UIView, AWELiveStreamEcomSearchTagView;

@interface AWELiveStreamSearchEcomElement : AWELiveLeftElement {
    BOOL _isDisplaying;
    BOOL _hasEnterRoom;
    UIView *_containerView;
    UIImageView *_searchIconImageView;
    UILabel *_searchTitleLabel;
    UIView *_searchDotView;
    UILabel *_searchContentLabel;
    IESLiveImageView *_rightArrowImageView;
    AWELiveStreamEcomSearchTagView *_rightTag;
    UITapGestureRecognizer *_tapGestureRecognizer;
    AWELiveStreamLocalSearchModel *_searchModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *searchIconImageView;
@property (retain, nonatomic) UILabel *searchTitleLabel;
@property (retain, nonatomic) UIView *searchDotView;
@property (retain, nonatomic) UILabel *searchContentLabel;
@property (retain, nonatomic) IESLiveImageView *rightArrowImageView;
@property (retain, nonatomic) AWELiveStreamEcomSearchTagView *rightTag;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL hasEnterRoom;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AWELiveStreamLocalSearchModel *searchModel;

- (void)viewDidDisposed;
- (void)setIsDisplaying:(BOOL)arg0;
- (void)setRightArrowImageView:(id)arg0;
- (id)rightArrowImageView;
- (void)viewController_viewWillAppear;
- (void)prepareForDisPlay;
- (id)slotIdentity;
- (unsigned long long)excludeStatus;
- (void)showLiveElementWithWillAnimations:(id /* block */)arg0 animations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)hasEnterRoom;
- (void)setHasEnterRoom:(BOOL)arg0;
- (void)audienceViewController_WillEnterLiveRoom:(id)arg0 anchorID:(id)arg1;
- (void)checkPitayaLocalSearchWord;
- (void)setSearchTitleLabel:(id)arg0;
- (void)setSearchDotView:(id)arg0;
- (void)setSearchContentLabel:(id)arg0;
- (void)setRightTag:(id)arg0;
- (id)searchTitleLabel;
- (id)searchDotView;
- (id)searchContentLabel;
- (id)rightTag;
- (void)tapElementAction:(id)arg0;
- (void)setBeforeAnimationLayout:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setTapGestureRecognizer:(id)arg0;
- (void)setData:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)tapGestureRecognizer;
- (void)reset;
- (void)viewDidLoad;
- (int)priority;
- (BOOL)isDisplaying;
- (id)searchIconImageView;
- (void)setSearchIconImageView:(id)arg0;
- (void)setupUI;
- (id)searchModel;
- (void)setSearchModel:(id)arg0;

@end