//
//     Generated by private class-dump
//

@class NSNumber;

@interface BDXBridgeScanCodeMethodParamModel : BDXBridgeModel {
    BOOL _cameraOnly;
    BOOL _enableAnalysis;
    NSNumber *_autoJump;
}

@property (nonatomic) BOOL cameraOnly;
@property (retain, nonatomic) NSNumber *autoJump;
@property (nonatomic) BOOL enableAnalysis;

+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setAutoJump:(id)arg0;
- (id)autoJump;
- (BOOL)cameraOnly;
- (void)setCameraOnly:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)enableAnalysis;
- (void)setEnableAnalysis:(BOOL)arg0;

@end
