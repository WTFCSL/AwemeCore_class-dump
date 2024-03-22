//
//     Generated by private class-dump
//

@class HGAlertControllerContentTheme, HGAlertControllerSeparatorTheme, HGAlertControllerTitleTheme, HGAlertControllerActionTheme, HGAlertControllerAlertViewTheme;

@interface HGAlertControllerTheme : HGAlertControllerThemeBase {
    HGAlertControllerAlertViewTheme *_alertView;
    HGAlertControllerTitleTheme *_title;
    HGAlertControllerContentTheme *_content;
    HGAlertControllerSeparatorTheme *_separator;
    HGAlertControllerActionTheme *_action;
}

@property (retain, nonatomic) HGAlertControllerAlertViewTheme *alertView;
@property (retain, nonatomic) HGAlertControllerTitleTheme *title;
@property (retain, nonatomic) HGAlertControllerContentTheme *content;
@property (retain, nonatomic) HGAlertControllerSeparatorTheme *separator;
@property (retain, nonatomic) HGAlertControllerActionTheme *action;

+ (id)defaultAlertTheme;
+ (id)hostCustomedAlertTheme;

- (id)init;
- (void).cxx_destruct;
- (id)separator;
- (void)setAlertView:(id)arg0;
- (void)setSeparator:(id)arg0;
- (id)content;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (id)alertView;
- (void)setTitle:(id)arg0;

@end