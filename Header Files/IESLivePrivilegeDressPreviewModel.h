//
//     Generated by private class-dump
//

@class HTSLiveMemberMessageEffectConfigModel, HTSLiveProfileCardPreviewDock, HTSLiveProfileCardPreviewButton;

@interface IESLivePrivilegeDressPreviewModel : NSObject {
    HTSLiveProfileCardPreviewButton *_rightButton;
    HTSLiveProfileCardPreviewDock *_profileCardData;
    unsigned long long _previewType;
    HTSLiveMemberMessageEffectConfigModel *_userEnterEffectConfig;
    id _giftNode;
    unsigned long long _previewSource;
}

@property (retain, nonatomic) HTSLiveProfileCardPreviewButton *rightButton;
@property (retain, nonatomic) HTSLiveProfileCardPreviewDock *profileCardData;
@property (nonatomic) unsigned long long previewType;
@property (retain, nonatomic) HTSLiveMemberMessageEffectConfigModel *userEnterEffectConfig;
@property (retain, nonatomic) id giftNode;
@property (nonatomic) unsigned long long previewSource;

- (id)profileCardData;
- (void)setProfileCardData:(id)arg0;
- (id)userEnterEffectConfig;
- (void)setUserEnterEffectConfig:(id)arg0;
- (id)giftNode;
- (void)setGiftNode:(id)arg0;
- (unsigned long long)previewSource;
- (void)setPreviewSource:(unsigned long long)arg0;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (unsigned long long)previewType;
- (void)setPreviewType:(unsigned long long)arg0;

@end
