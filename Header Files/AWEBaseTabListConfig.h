//
//     Generated by private class-dump
//

@interface AWEBaseTabListConfig : NSObject {
    BOOL _enableTabChangeAnimation;
    BOOL _disableTabContentScroll;
    BOOL _disableTabContentBounce;
    BOOL _disableTabContentManulPan;
    BOOL _enableDynamicTabContentViewHeight;
    BOOL _notifyHeaderAppearanceWhenScrolling;
    long long _layoutSubviewsOptions;
}

@property (nonatomic) BOOL enableTabChangeAnimation;
@property (nonatomic) BOOL disableTabContentScroll;
@property (nonatomic) BOOL disableTabContentBounce;
@property (nonatomic) BOOL disableTabContentManulPan;
@property (nonatomic) BOOL enableDynamicTabContentViewHeight;
@property (nonatomic) BOOL notifyHeaderAppearanceWhenScrolling;
@property (nonatomic) long long layoutSubviewsOptions;

- (void)setEnableDynamicTabContentViewHeight:(BOOL)arg0;
- (void)setDisableTabContentManulPan:(BOOL)arg0;
- (void)setEnableTabChangeAnimation:(BOOL)arg0;
- (void)setDisableTabContentBounce:(BOOL)arg0;
- (BOOL)enableTabChangeAnimation;
- (BOOL)disableTabContentScroll;
- (void)setDisableTabContentScroll:(BOOL)arg0;
- (BOOL)disableTabContentBounce;
- (BOOL)disableTabContentManulPan;
- (BOOL)enableDynamicTabContentViewHeight;
- (BOOL)notifyHeaderAppearanceWhenScrolling;
- (void)setNotifyHeaderAppearanceWhenScrolling:(BOOL)arg0;
- (long long)layoutSubviewsOptions;
- (void)setLayoutSubviewsOptions:(long long)arg0;

@end
