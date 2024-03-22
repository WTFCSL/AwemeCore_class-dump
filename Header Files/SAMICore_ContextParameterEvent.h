//
//     Generated by private class-dump
//

@class NSString;

@interface SAMICore_ContextParameterEvent : NSObject {
    int _portIndex;
    int _parameterIndex;
    float _normalizedValue;
    float _plainValue;
    NSString *_processorName;
}

@property (nonatomic) int portIndex;
@property (nonatomic) int parameterIndex;
@property (nonatomic) float normalizedValue;
@property (nonatomic) float plainValue;
@property (retain, nonatomic) NSString *processorName;

- (int)parameterIndex;
- (void)setParameterIndex:(int)arg0;
- (int)portIndex;
- (void)setPortIndex:(int)arg0;
- (float)plainValue;
- (void)setPlainValue:(float)arg0;
- (void)setProcessorName:(id)arg0;
- (float)normalizedValue;
- (void)setNormalizedValue:(float)arg0;
- (id)processorName;

@end
