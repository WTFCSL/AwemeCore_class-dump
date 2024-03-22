//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveInteractiveSettingGuidePanelSceneSwitchConfig : NSObject {
    NSString *_title;
    NSString *_backgroundColorName;
    NSString *_iconName;
    NSString *_alertStr;
    id /* block */ _tapBlock;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *backgroundColorName;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *alertStr;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)setAlertStr:(id)arg0;
- (id)alertStr;
- (void).cxx_destruct;
- (id)title;
- (id)iconName;
- (void)setIconName:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)backgroundColorName;
- (void)setBackgroundColorName:(id)arg0;

@end