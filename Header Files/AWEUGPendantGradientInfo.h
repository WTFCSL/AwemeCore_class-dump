//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface AWEUGPendantGradientInfo : MTLModel <MTLJSONSerializing> {
    NSArray *_gradientColors;
    NSArray *_gradientStart;
    NSArray *_gradientEnd;
    NSArray *_gradientLocation;
    NSArray *_gradientStartStrArr;
    NSArray *_gradientEndStrArr;
    NSArray *_gradientLocationStrArr;
}

@property (copy, nonatomic) NSArray *gradientStartStrArr;
@property (copy, nonatomic) NSArray *gradientEndStrArr;
@property (copy, nonatomic) NSArray *gradientLocationStrArr;
@property (copy, nonatomic) NSArray *gradientColors;
@property (copy, nonatomic) NSArray *gradientStart;
@property (copy, nonatomic) NSArray *gradientEnd;
@property (copy, nonatomic) NSArray *gradientLocation;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)gradientLocation;
- (void)setGradientLocation:(id)arg0;
- (id)gradientStart;
- (void)setGradientStart:(id)arg0;
- (id)gradientEnd;
- (void)setGradientEnd:(id)arg0;
- (id)gradientStartStrArr;
- (id)gradientEndStrArr;
- (id)gradientLocationStrArr;
- (void)setGradientStartStrArr:(id)arg0;
- (void)setGradientEndStrArr:(id)arg0;
- (void)setGradientLocationStrArr:(id)arg0;
- (void).cxx_destruct;
- (id)gradientColors;
- (void)setGradientColors:(id)arg0;

@end
