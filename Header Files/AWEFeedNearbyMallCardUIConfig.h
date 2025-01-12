//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, UIImage;

@interface AWEFeedNearbyMallCardUIConfig : NSObject {
    BOOL _useEnhancedBG;
    BOOL _hasMallHeaderImg;
    BOOL _recommendEnhanced;
    NSString *_moreButtonText;
    UIColor *_moreButtonBGColor;
    UIColor *_moreButtonLabelColor;
    UIImage *_moreButtonArrowIcon;
    UIImage *_locationIcon;
    UIImage *_contentBGImg;
    NSString *_contentBGCDNPath;
    NSString *_contentBGCDNName;
    UIImage *_mallIconImg;
    UIImage *_mallTextImg;
    NSArray *_gradientBGColors;
}

@property (nonatomic) BOOL useEnhancedBG;
@property (nonatomic) BOOL hasMallHeaderImg;
@property (nonatomic) BOOL recommendEnhanced;
@property (copy, nonatomic) NSString *moreButtonText;
@property (retain, nonatomic) UIColor *moreButtonBGColor;
@property (retain, nonatomic) UIColor *moreButtonLabelColor;
@property (retain, nonatomic) UIImage *moreButtonArrowIcon;
@property (retain, nonatomic) UIImage *locationIcon;
@property (retain, nonatomic) UIImage *contentBGImg;
@property (copy, nonatomic) NSString *contentBGCDNPath;
@property (copy, nonatomic) NSString *contentBGCDNName;
@property (retain, nonatomic) UIImage *mallIconImg;
@property (retain, nonatomic) UIImage *mallTextImg;
@property (copy, nonatomic) NSArray *gradientBGColors;

- (BOOL)hasMallHeaderImg;
- (id)gradientBGColors;
- (BOOL)useEnhancedBG;
- (id)locationIcon;
- (id)mallTextImg;
- (id)mallIconImg;
- (id)moreButtonBGColor;
- (id)moreButtonLabelColor;
- (id)moreButtonArrowIcon;
- (BOOL)recommendEnhanced;
- (id)contentBGImg;
- (id)contentBGCDNPath;
- (id)contentBGCDNName;
- (void)setUseEnhancedBG:(BOOL)arg0;
- (void)setHasMallHeaderImg:(BOOL)arg0;
- (void)setRecommendEnhanced:(BOOL)arg0;
- (void)setMoreButtonBGColor:(id)arg0;
- (void)setMoreButtonLabelColor:(id)arg0;
- (void)setMoreButtonArrowIcon:(id)arg0;
- (void)setLocationIcon:(id)arg0;
- (void)setContentBGImg:(id)arg0;
- (void)setContentBGCDNPath:(id)arg0;
- (void)setContentBGCDNName:(id)arg0;
- (void)setMallIconImg:(id)arg0;
- (void)setMallTextImg:(id)arg0;
- (void)setGradientBGColors:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)setMoreButtonText:(id)arg0;
- (id)moreButtonText;

@end
