//
//     Generated by private class-dump
//

@class IESLiveGuideToolBarItem, NSString, IESLiveNativeAppPermissionIntroModel;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppBeforeLiveEntryPlugin : NSObject <IESLiveNativeAppBeforeLiveEntryPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
    IESLiveGuideToolBarItem *_timorEntryItem;
    IESLiveNativeAppPermissionIntroModel *_permissionIntroModel;
}

@property (retain, nonatomic) IESLiveGuideToolBarItem *timorEntryItem;
@property (retain, nonatomic) IESLiveNativeAppPermissionIntroModel *permissionIntroModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)permissionModel;
- (id)permissionIntroModel;
- (void)setPermissionIntroModel:(id)arg0;
- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)refreshBeforeLiveTimorEntranceWithStamps:(id)arg0;
- (id)timorEntryItem;
- (void)updateTimorEntryItem;
- (void)updateTimorEntryButtonDisable:(BOOL)arg0;
- (void)removeTimorEntryButton;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)setTimorEntryItem:(id)arg0;
- (void)addTimorEntryButton;
- (void)requestPermissionInfoWhenSuccess:(id /* block */)arg0;
- (void)checkMountCache;
- (void)timorEntryButtonDidClick;
- (void)showManagerVCWithSource:(id)arg0;
- (void)showSquareVC;
- (BOOL)isWelfareEntryFull;
- (void).cxx_destruct;
- (id)pluginContext;

@end
