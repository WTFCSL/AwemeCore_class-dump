//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeDcardTestFreqControlMethodResultModel : BDXBridgeModel {
    BOOL _shouldBeControlled;
    NSString *_reason;
}

@property (nonatomic) BOOL shouldBeControlled;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setShouldBeControlled:(BOOL)arg0;
- (BOOL)shouldBeControlled;
- (void).cxx_destruct;
- (id)reason;
- (void)setReason:(id)arg0;

@end