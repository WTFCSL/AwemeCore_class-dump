//
//     Generated by private class-dump
//

@class NSString;

@interface DitoMathExpression : NSObject {
    NSString *_resultValue;
    NSString *_errorDescription;
    NSString *_rawData;
}

@property (copy, nonatomic) NSString *resultValue;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *rawData;

+ (id)defaultVariable;

- (id)calculateWithVariable:(id)arg0;
- (void)setErrorDescription:(id)arg0;
- (void).cxx_destruct;
- (id)errorDescription;
- (id)rawData;
- (void)setRawData:(id)arg0;
- (id)initWithRawData:(id)arg0;
- (id)resultValue;
- (void)setResultValue:(id)arg0;

@end
