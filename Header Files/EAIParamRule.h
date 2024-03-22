//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol EAIValueProcessor;

@interface EAIParamRule : NSObject {
    NSArray *_filters;
    NSString *_paramName;
    NSString *_inputName;
    id<EAIValueProcessor> _valueProcessor;
}

@property (retain, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSString *paramName;
@property (copy, nonatomic) NSString *inputName;
@property (retain, nonatomic) id<EAIValueProcessor> valueProcessor;

- (void)setParamName:(id)arg0;
- (id)paramName;
- (id)valueProcessor;
- (void)setValueProcessor:(id)arg0;
- (void)setFilters:(id)arg0;
- (void).cxx_destruct;
- (id)filters;
- (id)inputName;
- (void)setInputName:(id)arg0;

@end