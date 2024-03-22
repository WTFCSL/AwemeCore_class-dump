//
//     Generated by private class-dump
//

@class VEAIMomentAlgorithm, ACCMomentMediaDataProvider, NSObject;
@protocol OS_dispatch_queue;

@interface ACCMomentCIMManager : NSObject {
    VEAIMomentAlgorithm *_aiAlgorithm;
    ACCMomentMediaDataProvider *_dataProvider;
    NSObject<OS_dispatch_queue> *_cimQueue;
}

@property (retain, nonatomic) ACCMomentMediaDataProvider *dataProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cimQueue;
@property (weak, nonatomic) VEAIMomentAlgorithm *aiAlgorithm;

- (void)setAiAlgorithm:(id)arg0;
- (id)aiAlgorithm;
- (id)cimQueue;
- (void)calculateCIMResult:(id /* block */)arg0;
- (void)setCimQueue:(id)arg0;
- (id)dataProvider;
- (void)setDataProvider:(id)arg0;
- (id)initWithDataProvider:(id)arg0;
- (void).cxx_destruct;

@end
