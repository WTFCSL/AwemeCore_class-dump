//
//     Generated by private class-dump
//

@class NSString, ACCVoiceEffectEditSession, UIView;

@interface ACCVoiceEffectManager : NSObject {
    BOOL _shouldShowToast;
    BOOL _voiceHadRecovered;
    BOOL _toastHasDisplayed;
    unsigned long long _logTag;
    UIView *_toastReferenceView;
    NSString *_panelName;
    NSString *_categoryKey;
    ACCVoiceEffectEditSession *_editSession;
}

@property (retain, nonatomic) NSString *panelName;
@property (retain, nonatomic) NSString *categoryKey;
@property (retain, nonatomic) ACCVoiceEffectEditSession *editSession;
@property (nonatomic) BOOL toastHasDisplayed;
@property (nonatomic) BOOL voiceHadRecovered;
@property (nonatomic) unsigned long long logTag;
@property (nonatomic) BOOL shouldShowToast;
@property (weak, nonatomic) UIView *toastReferenceView;

+ (id)voiceEffectForEffectID:(id)arg0;

- (unsigned long long)logTag;
- (void)setLogTag:(unsigned long long)arg0;
- (void)setCategoryKey:(id)arg0;
- (void)downloadEffect:(id)arg0 completion:(id /* block */)arg1;
- (void)downloadEffects:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)shouldShowToast;
- (void)setShouldShowToast:(BOOL)arg0;
- (void)recoverVoiceEffectsToEditService:(id)arg0 withPublishViewModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setEditSession:(id)arg0;
- (id)editSession;
- (void)clearVoiceEffectToEditService:(id)arg0 withPublishViewModel:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)voiceHadRecovered;
- (void)setToastReferenceView:(id)arg0;
- (void)recoverVoiceEffect:(id)arg0 toEditService:(id)arg1 withPublishViewModel:(id)arg2 recoverCompletion:(id /* block */)arg3;
- (void)setVoiceHadRecovered:(BOOL)arg0;
- (void)loadEffectsByEffectIDs:(id)arg0 completion:(id /* block */)arg1;
- (id)toastReferenceView;
- (BOOL)toastHasDisplayed;
- (void)setToastHasDisplayed:(BOOL)arg0;
- (void)toastFailure;
- (long long)downloadStatusForEffectModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)panelName;
- (void)setPanelName:(id)arg0;
- (id)categoryKey;

@end
