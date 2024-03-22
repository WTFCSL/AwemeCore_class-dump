//
//     Generated by private class-dump
//

@class NSDictionary, IESPlayTimePredictConfig, IESPlayTimePredictLinkedList;
@protocol IESPlayTimePredictEngineDelegate;

@interface IESPlayTimeSceneDataPredictor : NSObject {
    IESPlayTimePredictConfig *_config;
    id<IESPlayTimePredictEngineDelegate> _predictEngine;
    IESPlayTimePredictLinkedList *_inputFeaturesList;
    NSDictionary *_cachePredictResult;
}

@property (retain, nonatomic) IESPlayTimePredictConfig *config;
@property (retain, nonatomic) IESPlayTimePredictLinkedList *inputFeaturesList;
@property (copy, nonatomic) NSDictionary *cachePredictResult;
@property (weak, nonatomic) id<IESPlayTimePredictEngineDelegate> predictEngine;

+ (id)predictorWithConfig:(id)arg0 predictEngine:(id)arg1;

- (void)setPredictEngine:(id)arg0;
- (id)predictEngine;
- (void)addPredictInputFeature:(id)arg0;
- (void)predictWithCompletion:(id /* block */)arg0;
- (id)currentPredictResult;
- (id)inputFeaturesList;
- (void)setInputFeaturesList:(id)arg0;
- (void)setCachePredictResult:(id)arg0;
- (id)cachePredictResult;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;

@end
