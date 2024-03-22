//
//     Generated by private class-dump
//

@class UIColor, NSString, BDXPopupStyleModel, BDUIModalPresentationStyleParam, BDPopupTriggerParam, NSNumber, BDPopupTypeParam;

@interface BDXPopupModel : NSObject <BDSchemaModelProtocol> {
    BOOL _disableSwipe;
    BOOL _dragByGesture;
    BOOL _dragFollowGesture;
    BOOL _enableTriggerShowhide;
    BOOL _hideNavBar;
    BOOL _keyboardAdjust;
    BOOL _showOnSuccess;
    BOOL _maskCloseUntilLoaded;
    BOOL _dragUppingWithStatusbar;
    BOOL _fixedHeight;
    BOOL _addSafeAreaHeight;
    BOOL _needLandScapeNotchWidth;
    BOOL _pullDownIndicatorNotShow;
    BOOL _upFullScreen;
    BOOL _upTransStatusBar;
    BOOL _useScreenWidth;
    BOOL _isiPadAutoRotateMode;
    BOOL _enableSevenScreen;
    BOOL _forbidScrollUpDownAnimate;
    NSNumber *_closeByMask;
    NSNumber *_closeByGesture;
    NSNumber *_showMask;
    double _height;
    double _width;
    double _radius;
    NSString *_title;
    UIColor *_maskBgColor;
    double _aspectRatio;
    NSNumber *_dragBack;
    NSNumber *_dragExceptStatusBar;
    BDPopupTypeParam *_gravity;
    double _dragDownCloseThreshold;
    double _dragDownThreshold;
    double _dragHeight;
    double _dragUpThreshold;
    double _dragUppingSpace;
    double _dragUppingSpacePercent;
    double _resizeDuration;
    BDXPopupStyleModel *_style;
    NSString *_originContainerID;
    UIColor *_statusBarColor;
    double _dragHeightPercent;
    double _heightPercent;
    double _widthPercent;
    long long _type;
    BDPopupTriggerParam *_triggerOrigin;
    BDUIModalPresentationStyleParam *_modalPresentationStyle;
    BDPopupTypeParam *_popupEnterType;
    double _marginBottom;
    double _marginRight;
    double _horizontalWidth;
    double _horizontalHeight;
    double _horizontalWidthPercent;
    double _horizontalHeightPercent;
    double _horizontalRadius;
    double _rateHeight;
    double _portraitAbsoluteHeight;
    UIColor *_pullDownIndicatorColor;
    double _upOffsetHeight;
    double _pullDownHeight;
    UIColor *_upStatusBarBgColor;
    id /* block */ _customDefaultSize;
    id /* block */ _viewBottomMargin;
    double _horizontalSafeAreaHeight;
    struct CGSize { double width; double height; } _customIpadScreenSize;
}

@property (retain, nonatomic) NSNumber *closeByMask;
@property (retain, nonatomic) NSNumber *closeByGesture;
@property (nonatomic) BOOL disableSwipe;
@property (retain, nonatomic) NSNumber *showMask;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *maskBgColor;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) NSNumber *dragBack;
@property (retain, nonatomic) NSNumber *dragExceptStatusBar;
@property (nonatomic) BOOL dragByGesture;
@property (nonatomic) BOOL dragFollowGesture;
@property (nonatomic) BOOL enableTriggerShowhide;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) BOOL keyboardAdjust;
@property (nonatomic) BOOL showOnSuccess;
@property (nonatomic) BOOL maskCloseUntilLoaded;
@property (retain, nonatomic) BDPopupTypeParam *gravity;
@property (nonatomic) double dragDownCloseThreshold;
@property (nonatomic) double dragDownThreshold;
@property (nonatomic) double dragHeight;
@property (nonatomic) double dragUpThreshold;
@property (nonatomic) double dragUppingSpace;
@property (nonatomic) double dragUppingSpacePercent;
@property (nonatomic) BOOL dragUppingWithStatusbar;
@property (nonatomic) double resizeDuration;
@property (retain, nonatomic) BDXPopupStyleModel *style;
@property (copy, nonatomic) NSString *originContainerID;
@property (retain, nonatomic) UIColor *statusBarColor;
@property (nonatomic) double dragHeightPercent;
@property (nonatomic) double heightPercent;
@property (nonatomic) double widthPercent;
@property (nonatomic) long long type;
@property (retain, nonatomic) BDPopupTriggerParam *triggerOrigin;
@property (retain, nonatomic) BDUIModalPresentationStyleParam *modalPresentationStyle;
@property (retain, nonatomic) BDPopupTypeParam *popupEnterType;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginRight;
@property (nonatomic) BOOL fixedHeight;
@property (nonatomic) BOOL addSafeAreaHeight;
@property (nonatomic) double horizontalWidth;
@property (nonatomic) double horizontalHeight;
@property (nonatomic) double horizontalWidthPercent;
@property (nonatomic) double horizontalHeightPercent;
@property (nonatomic) double horizontalRadius;
@property (nonatomic) double rateHeight;
@property (nonatomic) double portraitAbsoluteHeight;
@property (nonatomic) BOOL needLandScapeNotchWidth;
@property (nonatomic) BOOL pullDownIndicatorNotShow;
@property (copy, nonatomic) UIColor *pullDownIndicatorColor;
@property (nonatomic) BOOL upFullScreen;
@property (nonatomic) double upOffsetHeight;
@property (nonatomic) BOOL upTransStatusBar;
@property (nonatomic) double pullDownHeight;
@property (retain, nonatomic) UIColor *upStatusBarBgColor;
@property (copy, nonatomic) id /* block */ customDefaultSize;
@property (nonatomic) struct CGSize { double width; double height; } customIpadScreenSize;
@property (nonatomic) BOOL useScreenWidth;
@property (copy, nonatomic) id /* block */ viewBottomMargin;
@property (nonatomic) BOOL isiPadAutoRotateMode;
@property (nonatomic) double horizontalSafeAreaHeight;
@property (nonatomic) BOOL enableSevenScreen;
@property (nonatomic) BOOL forbidScrollUpDownAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)arg0;

- (id)showMask;
- (void)setShowMask:(id)arg0;
- (id)statusBarColor;
- (void)setStatusBarColor:(id)arg0;
- (BOOL)isiPadAutoRotateMode;
- (BOOL)upFullScreen;
- (void)updateWithSchemaData:(id)arg0;
- (void)setCustomDefaultSize:(id /* block */)arg0;
- (void)setCustomIpadScreenSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setAddSafeAreaHeight:(BOOL)arg0;
- (void)setUseScreenWidth:(BOOL)arg0;
- (void)setViewBottomMargin:(id /* block */)arg0;
- (void)setIsiPadAutoRotateMode:(BOOL)arg0;
- (void)setHorizontalSafeAreaHeight:(double)arg0;
- (void)setUpOffsetHeight:(double)arg0;
- (void)setPullDownIndicatorColor:(id)arg0;
- (void)setPullDownHeight:(double)arg0;
- (double)pullDownHeight;
- (void)setCloseByGesture:(id)arg0;
- (void)setUpFullScreen:(BOOL)arg0;
- (void)setDragByGesture:(BOOL)arg0;
- (void)setDragBack:(id)arg0;
- (void)setMaskBgColor:(id)arg0;
- (id)closeByMask;
- (void)setCloseByMask:(id)arg0;
- (id)closeByGesture;
- (void)setUpStatusBarBgColor:(id)arg0;
- (void)setEnableSevenScreen:(BOOL)arg0;
- (BOOL)disableSwipe;
- (void)setDisableSwipe:(BOOL)arg0;
- (void)setHideNavBar:(BOOL)arg0;
- (BOOL)hideNavBar;
- (void)setHorizontalWidth:(double)arg0;
- (double)horizontalWidth;
- (id)originContainerID;
- (id)triggerOrigin;
- (double)resizeDuration;
- (BOOL)enableTriggerShowhide;
- (BOOL)pullDownIndicatorNotShow;
- (id)pullDownIndicatorColor;
- (BOOL)dragByGesture;
- (id)dragBack;
- (double)dragDownThreshold;
- (double)dragDownCloseThreshold;
- (double)dragUpThreshold;
- (BOOL)dragFollowGesture;
- (double)upOffsetHeight;
- (BOOL)showOnSuccess;
- (BOOL)keyboardAdjust;
- (id)maskBgColor;
- (BOOL)upTransStatusBar;
- (BOOL)maskCloseUntilLoaded;
- (id)dragExceptStatusBar;
- (double)widthPercent;
- (double)dragHeightPercent;
- (double)dragHeight;
- (double)dragUppingSpacePercent;
- (double)dragUppingSpace;
- (BOOL)dragUppingWithStatusbar;
- (double)horizontalRadius;
- (BOOL)forbidScrollUpDownAnimate;
- (id /* block */)customDefaultSize;
- (BOOL)useScreenWidth;
- (double)horizontalHeight;
- (double)horizontalWidthPercent;
- (struct CGSize { double x0; double x1; })customIpadScreenSize;
- (BOOL)addSafeAreaHeight;
- (double)rateHeight;
- (double)portraitAbsoluteHeight;
- (double)horizontalHeightPercent;
- (BOOL)needLandScapeNotchWidth;
- (double)horizontalSafeAreaHeight;
- (id /* block */)viewBottomMargin;
- (BOOL)enableSevenScreen;
- (id)upStatusBarBgColor;
- (void)setEnableTriggerShowhide:(BOOL)arg0;
- (void)setDragFollowGesture:(BOOL)arg0;
- (void)setResizeDuration:(double)arg0;
- (void)setPopupEnterType:(id)arg0;
- (void)setTriggerOrigin:(id)arg0;
- (id)popupEnterType;
- (void)setDragExceptStatusBar:(id)arg0;
- (void)setHorizontalWidthPercent:(double)arg0;
- (void)setHorizontalHeightPercent:(double)arg0;
- (void)setHorizontalRadius:(double)arg0;
- (void)setKeyboardAdjust:(BOOL)arg0;
- (void)setShowOnSuccess:(BOOL)arg0;
- (void)setMaskCloseUntilLoaded:(BOOL)arg0;
- (void)setDragDownCloseThreshold:(double)arg0;
- (void)setDragDownThreshold:(double)arg0;
- (void)setDragHeight:(double)arg0;
- (void)setDragUpThreshold:(double)arg0;
- (void)setDragUppingSpace:(double)arg0;
- (void)setDragUppingSpacePercent:(double)arg0;
- (void)setDragUppingWithStatusbar:(BOOL)arg0;
- (void)setOriginContainerID:(id)arg0;
- (void)setDragHeightPercent:(double)arg0;
- (void)setWidthPercent:(double)arg0;
- (void)setHorizontalHeight:(double)arg0;
- (void)setRateHeight:(double)arg0;
- (void)setPortraitAbsoluteHeight:(double)arg0;
- (void)setNeedLandScapeNotchWidth:(BOOL)arg0;
- (void)setPullDownIndicatorNotShow:(BOOL)arg0;
- (void)setUpTransStatusBar:(BOOL)arg0;
- (void)setForbidScrollUpDownAnimate:(BOOL)arg0;
- (void)setAspectRatio:(double)arg0;
- (id)style;
- (void)setModalPresentationStyle:(id)arg0;
- (id)modalPresentationStyle;
- (void).cxx_destruct;
- (double)height;
- (void)setFixedHeight:(BOOL)arg0;
- (double)radius;
- (long long)type;
- (double)aspectRatio;
- (id)title;
- (void)setType:(long long)arg0;
- (BOOL)fixedHeight;
- (void)setWidth:(double)arg0;
- (void)setRadius:(double)arg0;
- (void)setHeight:(double)arg0;
- (double)width;
- (void)setStyle:(id)arg0;
- (id)gravity;
- (void)setTitle:(id)arg0;
- (void)setGravity:(id)arg0;
- (double)marginRight;
- (void)setMarginRight:(double)arg0;
- (double)marginBottom;
- (void)setMarginBottom:(double)arg0;
- (double)heightPercent;
- (void)setHeightPercent:(double)arg0;

@end