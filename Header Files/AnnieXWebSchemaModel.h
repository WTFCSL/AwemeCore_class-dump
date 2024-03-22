//
//     Generated by private class-dump
//

@class BDArrayParam, NSNumber, NSString;

@interface AnnieXWebSchemaModel : NSObject {
    BOOL _disableBounce;
    BOOL _appendCommonParams;
    BOOL _autoPlayBgm;
    BOOL _disableAllBounces;
    BOOL _disableBounces;
    BOOL _disableSaveImage;
    BOOL _enableSecureLink;
    BOOL _disableWebviewSelectMenus;
    BOOL _enableWebviewSelectSearch;
    BOOL _hideSource;
    BOOL _ignoreCachePolicy;
    BOOL _useWebViewTitle;
    BOOL _webviewProgressBar;
    BOOL _webAutoMoveWithKeyboard;
    BOOL _ADBlock;
    BDArrayParam *_appendGlobalProps;
    NSNumber *_clickStart;
    NSString *_secLinkScene;
}

@property (nonatomic) BOOL disableBounce;
@property (nonatomic) BOOL appendCommonParams;
@property (retain, nonatomic) BDArrayParam *appendGlobalProps;
@property (nonatomic) BOOL autoPlayBgm;
@property (retain, nonatomic) NSNumber *clickStart;
@property (nonatomic) BOOL disableAllBounces;
@property (nonatomic) BOOL disableBounces;
@property (nonatomic) BOOL disableSaveImage;
@property (nonatomic) BOOL enableSecureLink;
@property (copy, nonatomic) NSString *secLinkScene;
@property (nonatomic) BOOL disableWebviewSelectMenus;
@property (nonatomic) BOOL enableWebviewSelectSearch;
@property (nonatomic) BOOL hideSource;
@property (nonatomic) BOOL ignoreCachePolicy;
@property (nonatomic) BOOL useWebViewTitle;
@property (nonatomic) BOOL webviewProgressBar;
@property (nonatomic) BOOL webAutoMoveWithKeyboard;
@property (nonatomic) BOOL ADBlock;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)arg0;

- (void)setHideSource:(BOOL)arg0;
- (BOOL)useWebViewTitle;
- (void)setUseWebViewTitle:(BOOL)arg0;
- (BOOL)disableAllBounces;
- (void)setDisableAllBounces:(BOOL)arg0;
- (void)updateWithSchemaData:(id)arg0;
- (void)setIgnoreCachePolicy:(BOOL)arg0;
- (void)setDisableBounces:(BOOL)arg0;
- (BOOL)disableBounces;
- (void)setSecLinkScene:(id)arg0;
- (id)secLinkScene;
- (void)setDisableSaveImage:(BOOL)arg0;
- (BOOL)disableSaveImage;
- (BOOL)ignoreCachePolicy;
- (BOOL)disableBounce;
- (void)setDisableBounce:(BOOL)arg0;
- (BOOL)appendCommonParams;
- (id)appendGlobalProps;
- (void)setAutoPlayBgm:(BOOL)arg0;
- (void)setEnableSecureLink:(BOOL)arg0;
- (void)setWebAutoMoveWithKeyboard:(BOOL)arg0;
- (void)setAppendCommonParams:(BOOL)arg0;
- (void)setAppendGlobalProps:(id)arg0;
- (BOOL)autoPlayBgm;
- (id)clickStart;
- (void)setClickStart:(id)arg0;
- (BOOL)enableSecureLink;
- (BOOL)disableWebviewSelectMenus;
- (void)setDisableWebviewSelectMenus:(BOOL)arg0;
- (BOOL)enableWebviewSelectSearch;
- (void)setEnableWebviewSelectSearch:(BOOL)arg0;
- (BOOL)hideSource;
- (BOOL)webviewProgressBar;
- (void)setWebviewProgressBar:(BOOL)arg0;
- (BOOL)webAutoMoveWithKeyboard;
- (BOOL)ADBlock;
- (void)setADBlock:(BOOL)arg0;
- (void).cxx_destruct;

@end