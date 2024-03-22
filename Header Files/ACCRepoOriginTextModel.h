//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface ACCRepoOriginTextModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepositoryRequestParamsDeprecated, ACCRepoRegister, NSCopying, ACCRepoOriginTextData> {
    BOOL _isOriginTextMode;
    BOOL _shouldHandleBgOffline;
    BOOL _shouldUsePushTranslationDelegate;
    BOOL _enableSetShowInPostList;
    NSString *_bgColor;
    NSString *_bgEffectID;
    NSString *_textColor;
    NSString *_content;
    NSArray *_hashTagList;
    NSString *_businessBackgroundColorKey;
    unsigned long long _originTextStatus;
    long long _style;
    id /* block */ _editorBackDismissBlock;
    NSString *_configEffectID;
    NSString *_signatureContent;
    long long _initType;
    NSString *_hashtagText;
    NSString *_placeholderText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOriginTextMode;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *bgEffectID;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *hashTagList;
@property (copy, nonatomic) NSString *businessBackgroundColorKey;
@property (nonatomic) unsigned long long originTextStatus;
@property (nonatomic) BOOL shouldHandleBgOffline;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ editorBackDismissBlock;
@property (nonatomic) BOOL shouldUsePushTranslationDelegate;
@property (copy, nonatomic) NSString *configEffectID;
@property (nonatomic) BOOL enableSetShowInPostList;
@property (copy, nonatomic) NSString *signatureContent;
@property (nonatomic) long long initType;
@property (copy, nonatomic) NSString *hashtagText;
@property (copy, nonatomic) NSString *placeholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (long long)initType;
- (void)setInitType:(long long)arg0;
- (id)hashtagText;
- (void)setHashtagText:(id)arg0;
- (id)initWithDraft:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (void)draftWillBeSavedWithID:(id)arg0;
- (void)setEnableSetShowInPostList:(BOOL)arg0;
- (id)realContent;
- (id)textExtraModels;
- (BOOL)enableSetShowInPostList;
- (id)signatureContent;
- (void)setSignatureContent:(id)arg0;
- (BOOL)isOriginTextMode;
- (void)setIsOriginTextMode:(BOOL)arg0;
- (void)setOriginTextStatus:(unsigned long long)arg0;
- (void)setHashTagList:(id)arg0;
- (void)setBusinessBackgroundColorKey:(id)arg0;
- (unsigned long long)originTextStatus;
- (BOOL)shouldUsePushTranslationDelegate;
- (void)setBgEffectID:(id)arg0;
- (id)bgEffectID;
- (id)originTextCount;
- (void)setShouldUsePushTranslationDelegate:(BOOL)arg0;
- (void)setEditorBackDismissBlock:(id /* block */)arg0;
- (void)setConfigEffectID:(id)arg0;
- (id)hashTagList;
- (BOOL)preferredStatusBarDefault;
- (void)updateOriginTextStatusToNormalDraftIfNeeded;
- (id /* block */)editorBackDismissBlock;
- (id)businessBackgroundColorKey;
- (BOOL)shouldHandleBgOffline;
- (void)setShouldHandleBgOffline:(BOOL)arg0;
- (id)configEffectID;
- (void)addOriginTextExtraInfo:(id)arg0;
- (id)logicContent;
- (BOOL)isKeepEditorDraftStatus;
- (id)originTextForCheck;
- (long long)style;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setTextColor:(id)arg0;
- (void)setStyle:(long long)arg0;
- (id)textColor;
- (void)setPlaceholderText:(id)arg0;
- (id)placeholderText;
- (id)bgColor;
- (void)setBgColor:(id)arg0;

@end
