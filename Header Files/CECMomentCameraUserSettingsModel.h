//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface CECMomentCameraUserSettingsModel : NSObject {
    BOOL _enable;
    UIImage *_icon;
    NSString *_title;
    id /* block */ _switchBlock;
}

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) id /* block */ switchBlock;

+ (id)autoSaveWhenPublishSettingModel;
+ (id)saveWithPolaroidSettingModel;
+ (id)autoSaveWhenPublishExchangeSettingModel;
+ (id /* block */)p_goToSystemSettingBlock;

- (id /* block */)switchBlock;
- (void)setSwitchBlock:(id /* block */)arg0;
- (BOOL)enable;
- (id)icon;
- (void).cxx_destruct;
- (id)title;
- (void)setIcon:(id)arg0;
- (void)setEnable:(BOOL)arg0;
- (void)setTitle:(id)arg0;

@end
