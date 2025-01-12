//
//     Generated by private class-dump
//

@class UIColor, NSString, NSDictionary, UIViewController;

@interface AWEXTabItemModel : MTLModel <MTLJSONSerializing> {
    BOOL _fullScreenShowBackground;
    BOOL _isFullScreen;
    BOOL _isXTabFirstHide;
    BOOL _isEnter;
    BOOL _isSkyLightShowing;
    NSString *_channelName;
    NSString *_title;
    NSString *_enterFrom;
    UIColor *_backgroundColor;
    long long _channelType;
    UIColor *_segmentButtonBgColor;
    UIColor *_segmentButtonSelectedBgColor;
    UIColor *_segmentTitleColor;
    UIColor *_segmentSelectedTitleColor;
    UIColor *_imageTintColor;
    NSDictionary *_extraInfo;
    long long _xTabType;
    unsigned long long _topThemeStyle;
    unsigned long long _bottomThemeStyle;
    double _backgroundAlpha;
    double _scrollOffsetY;
    NSString *_imageName;
    UIViewController *_contentVC;
    NSString *_className;
    NSString *_slideDownBarColor;
}

@property (copy, nonatomic) NSString *slideDownBarColor;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL fullScreenShowBackground;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long channelType;
@property (retain, nonatomic) UIColor *segmentButtonBgColor;
@property (retain, nonatomic) UIColor *segmentButtonSelectedBgColor;
@property (retain, nonatomic) UIColor *segmentTitleColor;
@property (retain, nonatomic) UIColor *segmentSelectedTitleColor;
@property (retain, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) long long xTabType;
@property (nonatomic) unsigned long long topThemeStyle;
@property (nonatomic) unsigned long long bottomThemeStyle;
@property (nonatomic) BOOL isXTabFirstHide;
@property (nonatomic) BOOL isEnter;
@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double scrollOffsetY;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) BOOL isSkyLightShowing;
@property (retain, nonatomic) UIViewController *contentVC;
@property (retain, nonatomic) NSString *className;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtraInfo:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setIsEnter:(BOOL)arg0;
- (id)contentVC;
- (void)setContentVC:(id)arg0;
- (long long)xTabType;
- (id)slideDownBarColor;
- (BOOL)fullScreenShowBackground;
- (void)setFullScreenShowBackground:(BOOL)arg0;
- (void)setSlideDownBarColor:(id)arg0;
- (id)segmentTitleColor;
- (id)segmentSelectedTitleColor;
- (id)segmentButtonBgColor;
- (id)segmentButtonSelectedBgColor;
- (unsigned long long)topThemeStyle;
- (void)setIsSkyLightShowing:(BOOL)arg0;
- (unsigned long long)bottomThemeStyle;
- (void)setSegmentButtonBgColor:(id)arg0;
- (void)setSegmentButtonSelectedBgColor:(id)arg0;
- (void)setSegmentTitleColor:(id)arg0;
- (void)setSegmentSelectedTitleColor:(id)arg0;
- (void)setXTabType:(long long)arg0;
- (void)setTopThemeStyle:(unsigned long long)arg0;
- (void)setBottomThemeStyle:(unsigned long long)arg0;
- (BOOL)isXTabFirstHide;
- (void)setIsXTabFirstHide:(BOOL)arg0;
- (double)scrollOffsetY;
- (void)setScrollOffsetY:(double)arg0;
- (BOOL)isSkyLightShowing;
- (id)imageTintColor;
- (long long)channelType;
- (void)setClassName:(id)arg0;
- (id)className;
- (BOOL)isFullScreen;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)imageName;
- (void)setBackgroundAlpha:(double)arg0;
- (void)setImageName:(id)arg0;
- (id)channelName;
- (double)backgroundAlpha;
- (void)setImageTintColor:(id)arg0;
- (id)title;
- (BOOL)isValidWithError:(id *)arg0;
- (id)backgroundColor;
- (id)colorWithHexString:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)setChannelName:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (id)extraInfo;
- (BOOL)isEnter;
- (void)setChannelType:(long long)arg0;

@end
