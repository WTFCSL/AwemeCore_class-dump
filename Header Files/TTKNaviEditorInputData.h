//
//     Generated by private class-dump
//

@class TTKNaviTemplateContext, NSArray, TTKNaviRouterServiceConfig, AWENaviCategoryNotificationCenter, AWENaviEffectContextModel, NSMutableDictionary, TTKNaviUIConfigModel;

@interface TTKNaviEditorInputData : NSObject {
    BOOL _isLandingWithLokiItems;
    AWENaviCategoryNotificationCenter *_notificationCenter;
    TTKNaviRouterServiceConfig *_routerConfig;
    TTKNaviTemplateContext *_templateContext;
    AWENaviEffectContextModel *_contextModel;
    NSArray *_categoryArray;
    NSArray *_ownedLimitedEffectNameArray;
    NSMutableDictionary *_effectNameToEffectMapping;
    TTKNaviUIConfigModel *_uiConfigModel;
    id /* block */ _afterUploadAvatarBlock;
    id /* block */ _onCloseBlock;
}

@property (retain, nonatomic) AWENaviCategoryNotificationCenter *notificationCenter;
@property (retain, nonatomic) TTKNaviRouterServiceConfig *routerConfig;
@property (retain, nonatomic) TTKNaviTemplateContext *templateContext;
@property (retain, nonatomic) AWENaviEffectContextModel *contextModel;
@property (copy, nonatomic) NSArray *categoryArray;
@property (copy, nonatomic) NSArray *ownedLimitedEffectNameArray;
@property (retain, nonatomic) NSMutableDictionary *effectNameToEffectMapping;
@property (retain, nonatomic) TTKNaviUIConfigModel *uiConfigModel;
@property (copy, nonatomic) id /* block */ afterUploadAvatarBlock;
@property (copy, nonatomic) id /* block */ onCloseBlock;
@property (nonatomic) BOOL isLandingWithLokiItems;

- (id)routerConfig;
- (id)categoryArray;
- (void)setCategoryArray:(id)arg0;
- (id)uiConfigModel;
- (void)setUiConfigModel:(id)arg0;
- (void)setContextModel:(id)arg0;
- (void)setEffectNameToEffectMapping:(id)arg0;
- (void)setOnCloseBlock:(id /* block */)arg0;
- (void)setAfterUploadAvatarBlock:(id /* block */)arg0;
- (id)effectNameToEffectMapping;
- (id)contextModel;
- (id /* block */)onCloseBlock;
- (BOOL)isLandingWithLokiItems;
- (void)setRouterConfig:(id)arg0;
- (void)setOwnedLimitedEffectNameArray:(id)arg0;
- (void)setTemplateContext:(id)arg0;
- (id /* block */)afterUploadAvatarBlock;
- (void)setIsLandingWithLokiItems:(BOOL)arg0;
- (id)ownedLimitedEffectNameArray;
- (id)templateContext;
- (id)init;
- (void).cxx_destruct;
- (void)setNotificationCenter:(id)arg0;
- (id)notificationCenter;

@end