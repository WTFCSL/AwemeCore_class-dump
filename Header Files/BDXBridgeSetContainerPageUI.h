//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeSetContainerPageUI : BDXBridgeModel {
    NSString *_title;
    NSString *_titleColor;
    NSString *_navBarColor;
    NSString *_statusBarBgColor;
    long long _statusFontMode;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *navBarColor;
@property (copy, nonatomic) NSString *statusBarBgColor;
@property (nonatomic) long long statusFontMode;

+ (id)statusFontModeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setNavBarColor:(id)arg0;
- (id)navBarColor;
- (id)statusBarBgColor;
- (void)setStatusBarBgColor:(id)arg0;
- (long long)statusFontMode;
- (void)setStatusFontMode:(long long)arg0;
- (void).cxx_destruct;
- (id)titleColor;
- (id)title;
- (void)setTitleColor:(id)arg0;
- (void)setTitle:(id)arg0;

@end
