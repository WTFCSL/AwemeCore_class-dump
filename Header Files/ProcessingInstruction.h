//
//     Generated by private class-dump
//

@class NSString;

@interface ProcessingInstruction : Node {
    NSString *target;
    NSString *data;
}

@property (retain, nonatomic) NSString *target;
@property (retain, nonatomic) NSString *data;

- (id)initProcessingInstruction:(id)arg0 value:(id)arg1;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setTarget:(id)arg0;
- (id)target;

@end
