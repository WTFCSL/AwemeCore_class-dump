//
//     Generated by private class-dump
//

@class NSDictionary;

@interface CameraParamModel : NSObject <NSCoding> {
    NSDictionary *_paramsMap;
}

@property (retain, nonatomic) NSDictionary *paramsMap;

- (id)obtainParamsForClass:(Class)arg0;
- (id)initWithParamClasses:(id)arg0;
- (void)addParams:(id)arg0 withClass:(Class)arg1;
- (void)addParams:(id)arg0;
- (id)paramsMap;
- (void)setParamsMap:(id)arg0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;

@end
