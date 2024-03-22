//
//     Generated by private class-dump
//

@class VELensDirtyLensDetectorConfig;

@interface VELensDirtyLensDetector : NSObject {
    VELensDirtyLensDetectorConfig *_config;
    struct ILensEngineInterface { void /* function */ **x0; } *_enginePtr;
    struct ILensFlowGraphInterface { void /* function */ **x0; } *_algorithmPtr;
    id /* block */ _resultBlock;
}

@property (retain) VELensDirtyLensDetectorConfig *config;
@property (nonatomic) struct ILensEngineInterface { void /* function */ **x0; } *enginePtr;
@property (nonatomic) struct ILensFlowGraphInterface { void /* function */ **x0; } *algorithmPtr;
@property (copy, nonatomic) id /* block */ resultBlock;

- (BOOL)setupWithConfig:(id)arg0;
- (struct ILensEngineInterface { void /* function */ **x0; } *)enginePtr;
- (void)setEnginePtr:(struct ILensEngineInterface { void /* function */ **x0; } *)arg0;
- (struct ILensFlowGraphInterface { void /* function */ **x0; } *)algorithmPtr;
- (void)setAlgorithmPtr:(struct ILensFlowGraphInterface { void /* function */ **x0; } *)arg0;
- (BOOL)processPixelBuffer:(struct __CVBuffer { } *)arg0 newLifeCycle:(BOOL)arg1;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)dealloc;
- (id /* block */)resultBlock;

@end