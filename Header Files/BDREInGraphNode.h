//
//     Generated by private class-dump
//

@class NSString;

@interface BDREInGraphNode : BDREGraphNode {
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier;

- (id)valueWithFootPrint:(id)arg0;
- (BOOL)canPassWithFootPrint:(id)arg0;
- (void)visitWithFootPrint:(id)arg0 previousNode:(id)arg1;
- (id)initWithRightIdentifier:(id)arg0;
- (void).cxx_destruct;
- (id)identifier;
- (void)setIdentifier:(id)arg0;

@end
