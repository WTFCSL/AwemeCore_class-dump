//
//     Generated by private class-dump
//

@class AWEPerfFPSMonitor;

@interface AWEIMPerfFPSMonitorWrapper : NSObject {
    AWEPerfFPSMonitor *_fpsMonitor;
}

@property (retain, nonatomic) AWEPerfFPSMonitor *fpsMonitor;

- (id)endSceneWithName:(id)arg0 context:(id)arg1;
- (void)beginSceneWithName:(id)arg0 context:(id)arg1;
- (id)fpsMonitor;
- (id)__dictOfRecord:(id)arg0 stageSuffix:(id)arg1;
- (id)__key:(id)arg0 suffix:(id)arg1;
- (id)phaseDictWithSceneName:(id)arg0 context:(id)arg1;
- (void)setFpsMonitor:(id)arg0;
- (void).cxx_destruct;

@end