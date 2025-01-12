//
//     Generated by private class-dump
//

@class NSDictionary, PerfAnalysisContext;

@interface PerfAnalysisPlugin : NSObject {
    NSDictionary *_config;
    PerfAnalysisContext *_context;
}

@property (retain, nonatomic) NSDictionary *config;

+ (id)name;

- (id)initWithConfig:(id)arg0 context:(id)arg1;
- (void)saveResult:(id)arg0;
- (void)willLaunch;
- (void)didLaunch;
- (void)setConfig:(id)arg0;
- (void)willTerminate;
- (void).cxx_destruct;
- (id)config;
- (void)onLoad;

@end
