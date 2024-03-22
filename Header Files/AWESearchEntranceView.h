//
//     Generated by private class-dump
//

@class AWESearchAnchorModel, NSString, UIImageView, NSDictionary, UILabel, UIView, UIButton;

@interface AWESearchEntranceView : UIView <UIGestureRecognizerDelegate, AWESearchEntranceViewProtocol> {
    NSString *_enterFrom;
    NSString *_enterFromSecond;
    NSString *_awemeID;
    NSDictionary *_ECommerceLogExtra;
    AWESearchAnchorModel *_recommendWord;
    NSDictionary *_logPassback;
    NSDictionary *_logExtraDict;
    id /* block */ _rightButtonClickBlock;
    id /* block */ _rightCameraButtonClickBlock;
    UIImageView *_searchIcon;
    UIImageView *_backgroundImage;
    UILabel *_placeHolderTextLabel;
    UIButton *_rightButton;
    UIButton *_rightCameraButton;
    UIView *_voiceOverPlaceHolder;
    UIView *_rightLine;
    double _rightBtnTextWidth;
}

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UILabel *placeHolderTextLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *rightCameraButton;
@property (retain, nonatomic) UIView *voiceOverPlaceHolder;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) AWESearchAnchorModel *recommendWord;
@property (nonatomic) double rightBtnTextWidth;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSDictionary *ECommerceLogExtra;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) id /* block */ rightButtonClickBlock;
@property (copy, nonatomic) id /* block */ rightCameraButtonClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)rightButtonClicked;
- (id)rightLine;
- (void)setRightLine:(id)arg0;
- (id)searchIcon;
- (void)setSearchIcon:(id)arg0;
- (id)searchBarConfig;
- (void)setRightButtonClickBlock:(id /* block */)arg0;
- (id /* block */)rightButtonClickBlock;
- (id)enterFromSecond;
- (void)setEnterFromSecond:(id)arg0;
- (void)updateWithRecommendWord:(id)arg0;
- (void)trackTrendingWordsShowIfNeed;
- (id)ECommerceLogExtra;
- (void)setECommerceLogExtra:(id)arg0;
- (id)recommendWord;
- (id /* block */)rightCameraButtonClickBlock;
- (void)setRightCameraButtonClickBlock:(id /* block */)arg0;
- (void)trackPhotoSearchClick;
- (void)trackSearchBarClickEventWithArea:(id)arg0;
- (id)ecommerceSearchBarTrackParams;
- (void)setRecommendWord:(id)arg0;
- (id)placeHolderTextLabel;
- (void)setPlaceHolderTextLabel:(id)arg0;
- (id)voiceOverPlaceHolder;
- (BOOL)searchBtnShow;
- (BOOL)searchFontShadow;
- (double)searchBtnFontSize;
- (void)setRightBtnTextWidth:(double)arg0;
- (BOOL)showCameraButton;
- (id)rightCameraButton;
- (BOOL)searchIconShow;
- (id)searchDefaultSearchWord;
- (double)rightBtnTextWidth;
- (id)trendingWordsTrackParamsInfo;
- (id)photoSearchTrackParamsInfo;
- (double)suggestWordFontSize;
- (id)suggestWordFontColor;
- (double)searchBarAlpha;
- (int)searchBarBorderStyle;
- (id)searchBtnFontColor;
- (void)rightCameraButtonClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 enterFrom:(id)arg1;
- (void)setRightCameraButton:(id)arg0;
- (void)setVoiceOverPlaceHolder:(id)arg0;
- (id)backgroundImage;
- (id)rightButton;
- (int)searchBarStyle;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundImage:(id)arg0;
- (void)updateWithText:(id)arg0;

@end
