//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSObject;

@interface CJPayHybridBaseConfig : JSONModel {
    BOOL _openAnimate;
    BOOL _hardware_back;
    BOOL _swipeDisable;
    BOOL _useForest;
    NSString *_scheme;
    NSString *_url;
    NSString *_cjSettingsKeys;
    NSString *_cjAbtestKeys;
    NSDictionary *_initialParams;
    NSString *_secLinkScene;
    NSObject *_WKDelegate;
    NSString *_openMethod;
}

@property (nonatomic) BOOL useForest;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL openAnimate;
@property (copy, nonatomic) NSString *cjSettingsKeys;
@property (copy, nonatomic) NSString *cjAbtestKeys;
@property (nonatomic) BOOL hardware_back;
@property (copy, nonatomic) NSDictionary *initialParams;
@property (copy, nonatomic) NSString *secLinkScene;
@property (nonatomic) BOOL swipeDisable;
@property (weak, nonatomic) NSObject *WKDelegate;
@property (copy, nonatomic) NSString *openMethod;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;
+ (BOOL)propertyIsIgnored:(id)arg0;

- (id)initialParams;
- (void)setInitialParams:(id)arg0;
- (void)setUseForest:(BOOL)arg0;
- (id)openMethod;
- (void)setOpenMethod:(id)arg0;
- (void)setSecLinkScene:(id)arg0;
- (id)secLinkScene;
- (BOOL)openAnimate;
- (void)setOpenAnimate:(BOOL)arg0;
- (void)p_setDefaultUIConfig;
- (id)cjSettingsKeys;
- (id)cjAbtestKeys;
- (id)p_toHybridScheme;
- (long long)enginetype;
- (id)WKDelegate;
- (void)setCjSettingsKeys:(id)arg0;
- (void)setCjAbtestKeys:(id)arg0;
- (BOOL)hardware_back;
- (void)setHardware_back:(BOOL)arg0;
- (BOOL)swipeDisable;
- (void)setSwipeDisable:(BOOL)arg0;
- (void)setWKDelegate:(id)arg0;
- (BOOL)useForest;
- (void)setScheme:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)scheme;
- (void)setUrl:(id)arg0;
- (id)url;
- (id)toContext;

@end
