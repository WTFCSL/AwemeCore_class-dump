//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDouPlusOrderResultModel : AWEBaseApiModel {
    long long _state;
    NSString *_stateDesc;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *stateDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (id)stateDesc;
- (void)setStateDesc:(id)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;

@end