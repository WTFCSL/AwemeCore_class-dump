//
//     Generated by private class-dump
//

@class NSArray;

@interface IESGurdSettingsRequestInfo : NSObject {
    long long _delay;
    NSArray *_paramsInfosArray;
}

@property (nonatomic) long long delay;
@property (copy, nonatomic) NSArray *paramsInfosArray;

+ (id)infoWithDictionary:(id)arg0;

- (id)paramsInfosArray;
- (void)setParamsInfosArray:(id)arg0;
- (void)setDelay:(long long)arg0;
- (void).cxx_destruct;
- (long long)delay;

@end
