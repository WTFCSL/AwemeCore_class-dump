//
//     Generated by private class-dump
//

@class NSString, IESLiveNativeAppStorageDataModel;
@protocol IESLiveAnchorGameNativeAPPStorageHelper, IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppStoragePlugin : NSObject <IESLiveNativeAppStoragePlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
    IESLiveNativeAppStorageDataModel *_dataModel;
    id<IESLiveAnchorGameNativeAPPStorageHelper> _storageHelper;
}

@property (retain, nonatomic) id<IESLiveAnchorGameNativeAPPStorageHelper> storageHelper;
@property (retain, nonatomic) IESLiveNativeAppStorageDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)requestMemoryStatus:(id /* block */)arg0;
- (id)storageHelper;
- (void)setStorageHelper:(id)arg0;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:(id)arg0;
- (id)pluginContext;

@end
