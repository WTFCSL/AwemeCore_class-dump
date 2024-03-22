//
//     Generated by private class-dump
//

@class UIView, NSString, AWEAwemeModel, UILabel, AWESimilarRecommendDataManager, UIButton;

@interface AWEAdSimilarRecommendView : UIView <AWEAdSimilarRecommendView> {
    BOOL _isShowing;
    BOOL _platformShowFinished;
    BOOL _hasTrackAllShowFinished;
    BOOL _isClose;
    NSString *_attachTitle;
    long long _curSelectedIndex;
    long long _curViewZoomCount;
    id /* block */ _didTapCallback;
    id /* block */ _dismissCallback;
    AWEAwemeModel *_model;
    NSString *_referString;
    long long _similarRecommendType;
    AWESimilarRecommendDataManager *_dataManager;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIView *_imageViewsContainer;
    double _width;
    double _scale;
    long long _finishedLoadImageCount;
    double _allImageShowTimeInterval;
    id /* block */ _imageLoadCompletion;
}

@property (retain, nonatomic) AWESimilarRecommendDataManager *dataManager;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *imageViewsContainer;
@property (nonatomic) double width;
@property (nonatomic) double scale;
@property (nonatomic) long long finishedLoadImageCount;
@property (nonatomic) BOOL platformShowFinished;
@property (nonatomic) BOOL hasTrackAllShowFinished;
@property (nonatomic) double allImageShowTimeInterval;
@property (nonatomic) BOOL isClose;
@property (copy, nonatomic) id /* block */ imageLoadCompletion;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long curSelectedIndex;
@property (nonatomic) long long curViewZoomCount;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long similarRecommendType;
@property (copy, nonatomic) NSString *attachTitle;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ didTapCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setReferString:(id)arg0;
- (long long)similarRecommendType;
- (void)setSimilarRecommendType:(long long)arg0;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg0;
- (BOOL)isClose;
- (void)setIsClose:(BOOL)arg0;
- (void)setupSubViewForAttachMaterial;
- (void)didSelectViewAtIndex:(long long)arg0;
- (long long)finishedLoadImageCount;
- (void)setFinishedLoadImageCount:(long long)arg0;
- (void)trackSuccessWithModel:(id)arg0;
- (void)trackAllShowFinishedWithModel:(id)arg0 startRequestTime:(double)arg1;
- (id /* block */)imageLoadCompletion;
- (void)setCurViewZoomCount:(long long)arg0;
- (void)setCurSelectedIndex:(long long)arg0;
- (void)setPlatformShowFinished:(BOOL)arg0;
- (void)trackEventForUnloadImage;
- (long long)curSelectedIndex;
- (BOOL)platformShowFinished;
- (BOOL)hasTrackAllShowFinished;
- (void)setAllImageShowTimeInterval:(double)arg0;
- (void)setHasTrackAllShowFinished:(BOOL)arg0;
- (double)allImageShowTimeInterval;
- (void)trackForClosingView;
- (void)trackEventForSelectViewAtIndex:(long long)arg0 withModel:(id)arg1;
- (id /* block */)didTapCallback;
- (void)closeView:(id)arg0;
- (id)initWithDataManager:(id)arg0 width:(double)arg1;
- (void)showWithAnimationInView:(id)arg0;
- (id)curSelectedViewWithOffset:(long long)arg0;
- (long long)curViewZoomCount;
- (id)attachTitle;
- (void)setAttachTitle:(id)arg0;
- (void)setDidTapCallback:(id /* block */)arg0;
- (void)setImageViewsContainer:(id)arg0;
- (void)setImageLoadCompletion:(id /* block */)arg0;
- (id)dataManager;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (BOOL)isShowing;
- (double)scale;
- (void)setDataManager:(id)arg0;
- (void)setWidth:(double)arg0;
- (double)width;
- (void)setTitleLabel:(id)arg0;
- (void)setScale:(double)arg0;
- (void)setupSubviews;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)imageViewsContainer;

@end
