//
//     Generated by private class-dump
//

@protocol NSCopying;

@interface BDREOutputGraphNode : BDREGraphNode {
    id<NSCopying> _value;
}

@property (readonly, nonatomic) id<NSCopying> value;

- (id)initWithOutputValue:(id)arg0;
- (void)travelWithFootPrint:(id)arg0;
- (void).cxx_destruct;
- (id)value;

@end
