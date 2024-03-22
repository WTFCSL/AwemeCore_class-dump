//
//     Generated by private class-dump
//

@class NSString, VECaptureProcessParam;

@interface VEAlgorithmSessionParamsCameraProcessParams : NSObject {
    BOOL _enabled;
    BOOL _flag1;
    int _processType;
    float _framteRate;
    NSString *_graph_config_path;
    id _callback1;
    id _callback4;
    id _callback2;
    id _callback3;
    VECaptureProcessParam *_param;
}

@property (nonatomic) int processType;
@property (retain, nonatomic) NSString *graph_config_path;
@property (nonatomic) BOOL enabled;
@property (nonatomic) float framteRate;
@property (nonatomic) BOOL flag1;
@property (retain, nonatomic) id callback1;
@property (copy, nonatomic) id callback4;
@property (retain, nonatomic) id callback2;
@property (retain, nonatomic) id callback3;
@property (retain, nonatomic) VECaptureProcessParam *param;

- (id)graph_config_path;
- (void)setGraph_config_path:(id)arg0;
- (float)framteRate;
- (void)setFramteRate:(float)arg0;
- (BOOL)flag1;
- (void)setFlag1:(BOOL)arg0;
- (id)callback1;
- (void)setCallback1:(id)arg0;
- (id)callback4;
- (void)setCallback4:(id)arg0;
- (id)callback2;
- (void)setCallback2:(id)arg0;
- (id)callback3;
- (void)setCallback3:(id)arg0;
- (void)setParam:(id)arg0;
- (id)init;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)param;
- (void)setEnabled:(BOOL)arg0;
- (int)processType;
- (void)setProcessType:(int)arg0;

@end