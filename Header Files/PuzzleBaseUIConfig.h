//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface PuzzleBaseUIConfig : NSObject {
    BOOL _innerFallback;
    BOOL _disableOffline;
    BOOL _hideLoading;
    BOOL _enableShare;
    BOOL _showBack;
    BOOL _disableInputScroll;
    BOOL _enableFontScale;
    BOOL _openAnimate;
    BOOL _showClose;
    BOOL _autoShowNavBar;
    BOOL _showFloatLive;
    BOOL _enableLatchXBridge;
    NSString *_type;
    NSString *_url;
    NSString *_fallbackUrl;
    unsigned long long _keneralType;
    NSString *_webBgColor;
    NSDictionary *_routerParams;
    NSString *_animationType;
    NSString *_sourceScene;
    long long _iconTheme;
    long long _prepareInitDataStartTime;
    long long _prepareInitDataEndTime;
    NSString *_containerBgColor;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fallbackUrl;
@property (nonatomic) BOOL innerFallback;
@property (nonatomic) unsigned long long keneralType;
@property (nonatomic) BOOL disableOffline;
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) BOOL enableShare;
@property (nonatomic) BOOL showBack;
@property (nonatomic) BOOL disableInputScroll;
@property (copy, nonatomic) NSString *webBgColor;
@property (nonatomic) BOOL enableFontScale;
@property (nonatomic) BOOL openAnimate;
@property (retain, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *animationType;
@property (nonatomic) BOOL showClose;
@property (copy, nonatomic) NSString *sourceScene;
@property (nonatomic) BOOL autoShowNavBar;
@property (nonatomic) BOOL showFloatLive;
@property (nonatomic) long long iconTheme;
@property (nonatomic) long long prepareInitDataStartTime;
@property (nonatomic) long long prepareInitDataEndTime;
@property (copy, nonatomic) NSString *containerBgColor;
@property (nonatomic) BOOL enableLatchXBridge;

- (id)routerParams;
- (void)setEnableShare:(BOOL)arg0;
- (BOOL)enableShare;
- (void)setRouterParams:(id)arg0;
- (BOOL)showClose;
- (void)setShowClose:(BOOL)arg0;
- (BOOL)hideLoading;
- (void)setHideLoading:(BOOL)arg0;
- (unsigned long long)keneralType;
- (BOOL)showBack;
- (long long)iconTheme;
- (void)setContainerBgColor:(id)arg0;
- (void)setIconTheme:(long long)arg0;
- (BOOL)enableFontScale;
- (void)setEnableFontScale:(BOOL)arg0;
- (BOOL)showFloatLive;
- (void)setShowFloatLive:(BOOL)arg0;
- (void)setInnerFallback:(BOOL)arg0;
- (id)sourceScene;
- (id)containerBgColor;
- (BOOL)openAnimate;
- (void)setFallbackUrl:(id)arg0;
- (void)setOpenAnimate:(BOOL)arg0;
- (void)setShowBack:(BOOL)arg0;
- (BOOL)disableOffline;
- (void)setDisableOffline:(BOOL)arg0;
- (void)setSourceScene:(id)arg0;
- (void)setPrepareInitDataStartTime:(long long)arg0;
- (void)setPrepareInitDataEndTime:(long long)arg0;
- (BOOL)innerFallback;
- (long long)prepareInitDataStartTime;
- (long long)prepareInitDataEndTime;
- (void)setKeneralType:(unsigned long long)arg0;
- (void)setDisableInputScroll:(BOOL)arg0;
- (void)setWebBgColor:(id)arg0;
- (void)setAutoShowNavBar:(BOOL)arg0;
- (void)setEnableLatchXBridge:(BOOL)arg0;
- (id)keneralTypeDesc;
- (BOOL)disableInputScroll;
- (id)webBgColor;
- (BOOL)autoShowNavBar;
- (BOOL)enableLatchXBridge;
- (void).cxx_destruct;
- (id)type;
- (void)setUrl:(id)arg0;
- (void)setAnimationType:(id)arg0;
- (void)setType:(id)arg0;
- (id)initWithParams:(id)arg0;
- (id)animationType;
- (id)url;
- (id)fallbackUrl;

@end