//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface EAIMapValueProcessor : NSObject <EAIValueProcessor> {
    NSArray *_keys;
    NSArray *_values;
}

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSArray *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)process:(id)arg0 rule:(id)arg1 currentValues:(id)arg2 output:(id)arg3;
- (id)keys;
- (void)setKeys:(id)arg0;
- (void).cxx_destruct;
- (id)values;
- (id)initWithKeys:(id)arg0 values:(id)arg1;
- (void)setValues:(id)arg0;

@end
