//
//     Generated by private class-dump
//

@class BDCertConditionModel;

@interface BDCertCondition : NSObject {
    BDCertConditionModel *_model;
}

@property (retain, nonatomic) BDCertConditionModel *model;

- (id)validateCertUnit:(id)arg0;
- (void)parseParams:(id)arg0;
- (id)extractConfigParams;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end
