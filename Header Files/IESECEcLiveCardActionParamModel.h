//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary;

@interface IESECEcLiveCardActionParamModel : IESLiveBridgeModel {
    NSNumber *_actionType;
    NSDictionary *_params;
}

@property (retain, nonatomic) NSNumber *actionType;
@property (copy, nonatomic) NSDictionary *params;

+ (id)modelCustomPropertyMapper;

- (void)setActionType:(id)arg0;
- (id)actionType;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:(id)arg0;

@end