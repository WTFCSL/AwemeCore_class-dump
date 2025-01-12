//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEAwemeModel, NSDictionary, AWEAwemeLongPressDownloadFunctionModel, AWEShareContext;

@interface AWESharePanelViewModel : NSObject {
    BOOL _shareTitleIsDisabled;
    BOOL _needShowTranspondList;
    unsigned long long _panelType;
    NSString *_shareTitle;
    NSString *_dismissTitle;
    NSArray *_firstRowItems;
    NSArray *_secondRowItems;
    NSString *_fromGroupID;
    AWEAwemeModel *_aweme;
    AWEShareContext *_context;
    AWEAwemeLongPressDownloadFunctionModel *_currentExposeExternalShareModel;
    NSDictionary *_exposeExternalShareModelsDict;
    long long _currentExposeExternalSharePlatform;
}

@property (nonatomic) unsigned long long panelType;
@property (copy, nonatomic) NSString *shareTitle;
@property (copy, nonatomic) NSString *dismissTitle;
@property (nonatomic) BOOL shareTitleIsDisabled;
@property (copy, nonatomic) NSArray *firstRowItems;
@property (copy, nonatomic) NSArray *secondRowItems;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) BOOL needShowTranspondList;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEShareContext *context;
@property (retain, nonatomic) AWEAwemeLongPressDownloadFunctionModel *currentExposeExternalShareModel;
@property (retain, nonatomic) NSDictionary *exposeExternalShareModelsDict;
@property (nonatomic) long long currentExposeExternalSharePlatform;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (unsigned long long)panelType;
- (void)setShareTitle:(id)arg0;
- (void)setPanelType:(unsigned long long)arg0;
- (id)fromGroupID;
- (void)setFromGroupID:(id)arg0;
- (id)firstRowItems;
- (id)secondRowItems;
- (BOOL)needShowTranspondList;
- (BOOL)shareTitleIsDisabled;
- (void)tweakExposedExternalSharePositionIfNeeded:(id)arg0 downloadModel:(id)arg1 downloadCompletion:(id /* block */)arg2 copyCommandCompletion:(id /* block */)arg3;
- (id)fetchExternalShareEventContext;
- (id)currentExposeExternalShareModel;
- (BOOL)shouldShowToken;
- (BOOL)isExposedExternalShareWithModel:(id)arg0;
- (id)offsiteShareTypesAfterExposing;
- (BOOL)shouldShowCopyCommandOnExternalShare;
- (BOOL)shouldHideExternalShare;
- (id)allShareTypes;
- (id)filteredLongPressFunctionModels:(id)arg0;
- (BOOL)isHostUser;
- (void)tweakExternalSharePosition:(id)arg0 externalShareModel:(id)arg1 douPlusModel:(id)arg2 permissionModel:(id)arg3;
- (BOOL)shouldSkipWechatOrQQ:(id)arg0;
- (BOOL)shouldExposeCopyCommand;
- (void)setShareTitleIsDisabled:(BOOL)arg0;
- (void)setFirstRowItems:(id)arg0;
- (void)setSecondRowItems:(id)arg0;
- (void)setNeedShowTranspondList:(BOOL)arg0;
- (void)setCurrentExposeExternalShareModel:(id)arg0;
- (id)exposeExternalShareModelsDict;
- (void)setExposeExternalShareModelsDict:(id)arg0;
- (long long)currentExposeExternalSharePlatform;
- (void)setCurrentExposeExternalSharePlatform:(long long)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)dismissTitle;
- (void)setDismissTitle:(id)arg0;
- (id)shareTitle;

@end
