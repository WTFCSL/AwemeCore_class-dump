//
//     Generated by private class-dump
//

@interface VECaptureProcessParamScan : VECaptureProcessParam {
    int _scanType;
    float _scriptTimeout;
    int _maxObjNum;
    int _maxTrackNum;
}

@property (nonatomic) int scanType;
@property (nonatomic) float scriptTimeout;
@property (nonatomic) int maxObjNum;
@property (nonatomic) int maxTrackNum;

- (void)setScriptTimeout:(float)arg0;
- (float)scriptTimeout;
- (int)maxObjNum;
- (void)setMaxObjNum:(int)arg0;
- (int)maxTrackNum;
- (void)setMaxTrackNum:(int)arg0;
- (id)init;
- (int)scanType;
- (void)setScanType:(int)arg0;

@end