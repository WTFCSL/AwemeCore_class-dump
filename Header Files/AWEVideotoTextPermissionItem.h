//
//     Generated by private class-dump
//

@class NSString, UIImage, AWEAwemeModel, NSNumber;

@interface AWEVideotoTextPermissionItem : NSObject <AWEAfterPublishAdvanceSettingItemProtocol> {
    BOOL _shouldHideLineView;
    BOOL _switcherState;
    BOOL _controlEnabled;
    Class _cellClass;
    NSString *_title;
    NSString *_toast;
    UIImage *_iconImage;
    NSNumber *_danmakuPermission;
    AWEAwemeModel *_awemeModel;
    long long _scene;
}

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) BOOL switcherState;
@property (nonatomic) BOOL controlEnabled;
@property (retain, nonatomic) NSNumber *danmakuPermission;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSNumber *duetPermission;
@property (retain, nonatomic) NSNumber *commentPermission;
@property (copy, nonatomic) NSString *introText;
@property (nonatomic) BOOL selectedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (BOOL)shouldHideLineView;
- (BOOL)controlEnabled;
- (void)setShouldHideLineView:(BOOL)arg0;
- (id)danmakuPermission;
- (void)setDanmakuPermission:(id)arg0;
- (void)setControlEnabled:(BOOL)arg0;
- (id)sceneTypeForTrack;
- (BOOL)switcherState;
- (void)setSwitcherState:(BOOL)arg0;
- (void)onSwitherToggled:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (void)postVideotoTextPermissionSetting:(long long)arg0 withCompletion:(id /* block */)arg1;
- (id)iconImage;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (Class)cellClass;
- (id)title;
- (void)setIconImage:(id)arg0;
- (long long)scene;
- (void)setTitle:(id)arg0;
- (void)setToast:(id)arg0;
- (id)toast;
- (void)setCellClass:(Class)arg0;

@end
