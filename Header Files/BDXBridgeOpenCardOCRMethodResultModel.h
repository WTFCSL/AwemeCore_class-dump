//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeOpenCardOCRMethodResultModel : BDXBridgeModel {
    NSString *_result;
    NSNumber *_status;
    NSNumber *_from;
}

@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *from;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)status;
- (id)result;
- (void)setStatus:(id)arg0;
- (id)from;
- (void)setFrom:(id)arg0;

@end