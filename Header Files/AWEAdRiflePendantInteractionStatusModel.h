//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEAdRiflePendantInteractionStatusModel : BDXBridgeModel {
    NSNumber *_pendantActionType;
    NSString *_refer;
}

@property (retain, nonatomic) NSNumber *pendantActionType;
@property (copy, nonatomic) NSString *refer;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setRefer:(id)arg0;
- (id)refer;
- (id)pendantActionType;
- (void)setPendantActionType:(id)arg0;
- (void).cxx_destruct;

@end