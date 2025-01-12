//
//     Generated by private class-dump
//

@class NSString, NSArray, BDUGLuckySettingsPopupReward;

@interface BDUGLuckySettingsPopup : BDUGLuckyJSONModel {
    BOOL _supportLandscape;
    BOOL _showCloseBtn;
    BOOL _forbidLandscape;
    BOOL _hideCloseBtn;
    BOOL _isColdStart;
    BOOL _block;
    BOOL _pollingSettingsUpdated;
    NSString *_activityName;
    long long _cycleId;
    long long _popupId;
    NSString *_title;
    NSString *_subTitle;
    NSString *_buttonText;
    long long _position;
    NSString *_picUrl;
    NSString *_schema;
    double _tsShowMs;
    double _tsExpireMs;
    BDUGLuckySettingsPopupReward *_reward;
    NSString *_bgColor;
    NSString *_closeColor;
    NSString *_callbackUrl;
    NSArray *_buttonBgColor;
    NSString *_buttonBgUrl;
    NSArray *_posUrl;
    long long _popupType;
    NSString *_lynxSchema;
    long long _priority;
    NSString *_extra;
    NSArray *_iosBlockList;
    NSArray *_androidBlockList;
    NSArray *_iosAllowList;
    NSArray *_androidAllowList;
    NSString *_popupKey;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) long long cycleId;
@property (nonatomic) long long popupId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSString *picUrl;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) double tsShowMs;
@property (nonatomic) double tsExpireMs;
@property (retain, nonatomic) BDUGLuckySettingsPopupReward *reward;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *closeColor;
@property (copy, nonatomic) NSString *callbackUrl;
@property (nonatomic) BOOL supportLandscape;
@property (copy, nonatomic) NSArray *buttonBgColor;
@property (copy, nonatomic) NSString *buttonBgUrl;
@property (nonatomic) BOOL showCloseBtn;
@property (copy, nonatomic) NSArray *posUrl;
@property (nonatomic) BOOL forbidLandscape;
@property (nonatomic) BOOL hideCloseBtn;
@property (nonatomic) long long popupType;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL isColdStart;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSArray *iosBlockList;
@property (copy, nonatomic) NSArray *androidBlockList;
@property (copy, nonatomic) NSArray *iosAllowList;
@property (copy, nonatomic) NSArray *androidAllowList;
@property (copy, nonatomic) NSString *popupKey;
@property (nonatomic) BOOL block;
@property (nonatomic) BOOL pollingSettingsUpdated;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void)setEnterFrom:(id)arg0;
- (void)setExtra:(id)arg0;
- (id)enterFrom;
- (id)lynxSchema;
- (long long)popupType;
- (void)setPopupType:(long long)arg0;
- (id)picUrl;
- (BOOL)isColdStart;
- (void)setButtonBgColor:(id)arg0;
- (id)buttonBgColor;
- (BOOL)hideCloseBtn;
- (id)popupKey;
- (void)setPopupKey:(id)arg0;
- (void)setSupportLandscape:(BOOL)arg0;
- (void)setForbidLandscape:(BOOL)arg0;
- (BOOL)supportLandscape;
- (long long)cycleId;
- (void)setCycleId:(long long)arg0;
- (id)closeColor;
- (id)reward;
- (long long)popupId;
- (id)callbackUrl;
- (void)setPopupId:(long long)arg0;
- (double)tsExpireMs;
- (void)setTsExpireMs:(double)arg0;
- (double)tsShowMs;
- (void)setTsShowMs:(double)arg0;
- (void)setIsColdStart:(BOOL)arg0;
- (BOOL)forbidLandscape;
- (id)posUrl;
- (void)setPosUrl:(id)arg0;
- (id)iosBlockList;
- (void)setIosBlockList:(id)arg0;
- (id)iosAllowList;
- (void)setIosAllowList:(id)arg0;
- (void)setLynxSchema:(id)arg0;
- (void)setReward:(id)arg0;
- (id)buttonBgUrl;
- (void)setButtonBgUrl:(id)arg0;
- (void)setCloseColor:(id)arg0;
- (void)setPicUrl:(id)arg0;
- (void)setHideCloseBtn:(BOOL)arg0;
- (void)setCallbackUrl:(id)arg0;
- (BOOL)showCloseBtn;
- (void)setShowCloseBtn:(BOOL)arg0;
- (id)androidBlockList;
- (void)setAndroidBlockList:(id)arg0;
- (id)androidAllowList;
- (void)setAndroidAllowList:(id)arg0;
- (BOOL)pollingSettingsUpdated;
- (void)setPollingSettingsUpdated:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (long long)position;
- (void)setPosition:(long long)arg0;
- (void)setBlock:(BOOL)arg0;
- (void)setPriority:(long long)arg0;
- (id)extra;
- (id)title;
- (id)buttonText;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (id)schema;
- (long long)priority;
- (BOOL)block;
- (void)setTitle:(id)arg0;
- (void)setButtonText:(id)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;
- (id)activityName;
- (void)setActivityName:(id)arg0;

@end
