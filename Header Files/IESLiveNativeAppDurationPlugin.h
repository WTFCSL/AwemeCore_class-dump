//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppDurationPlugin : NSObject <IESLiveNativeAppDurationPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
    id /* block */ _frameDropCallback;
    NSMutableDictionary *_durationCostDict;
    double _createTime;
}

@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) NSMutableDictionary *durationCostDict;
@property (nonatomic) double createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id /* block */)frameDropCallback;
- (void)setFrameDropCallback:(id /* block */)arg0;
- (id)initWithDIContext:(id)arg0 pluginContext:(id)arg1;
- (void)updateRecord:(id)arg0 customStorageKey:(id)arg1 stage:(id)arg2 extra:(id)arg3;
- (void)updateRecord:(id)arg0 stage:(id)arg1 extra:(id)arg2;
- (void)openDropFpsMonitorWithScene:(id)arg0;
- (void)closeDropFpsMonitor;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)setDurationCostDict:(id)arg0;
- (void)tractEvent:(id)arg0 customParams:(id)arg1 srcParams:(id)arg2;
- (id)durationCostDict;
- (BOOL)isValidWithEvent:(id)arg0 customStorageKey:(id)arg1 stage:(id)arg2 extra:(id)arg3;
- (void)addTimeStamp:(id)arg0 state:(id)arg1;
- (void).cxx_destruct;
- (void)setCreateTime:(double)arg0;
- (double)createTime;
- (id)pluginContext;

@end