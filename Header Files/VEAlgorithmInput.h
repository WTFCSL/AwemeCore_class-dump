//
//     Generated by private class-dump
//

@class VEAlgorithmInputMomentTIM, VEAlgorithmInputMomentAIM, VEAlgorithmInputMVMoment, VEAlgorithmInputData;

@interface VEAlgorithmInput : NSObject {
    VEAlgorithmInputData *_inputData;
    VEAlgorithmInputMVMoment *_mvMomentInput;
    VEAlgorithmInputMomentAIM *_momentAIMInput;
    VEAlgorithmInputMomentTIM *_momentTIMInput;
}

@property (retain, nonatomic) VEAlgorithmInputData *inputData;
@property (retain, nonatomic) VEAlgorithmInputMVMoment *mvMomentInput;
@property (retain, nonatomic) VEAlgorithmInputMomentAIM *momentAIMInput;
@property (retain, nonatomic) VEAlgorithmInputMomentTIM *momentTIMInput;

- (void)setMomentAIMInput:(id)arg0;
- (void)setMomentTIMInput:(id)arg0;
- (id)mvMomentInput;
- (id)momentAIMInput;
- (id)momentTIMInput;
- (void)setMvMomentInput:(id)arg0;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end