//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEInteractBarModel : AWEBaseApiModel {
    BOOL _recordWordAlreadyDisappear;
    long long _type;
    NSString *_bizInfo;
    NSArray *_bars;
    long long _currentBarStatus;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *bizInfo;
@property (retain, nonatomic) NSArray *bars;
@property (nonatomic) long long currentBarStatus;
@property (nonatomic) BOOL recordWordAlreadyDisappear;

+ (id)barsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)checkInfoAvailable;
- (id)bizInfo;
- (void)setBizInfo:(id)arg0;
- (long long)currentBarStatus;
- (void)setCurrentBarStatus:(long long)arg0;
- (BOOL)recordWordAlreadyDisappear;
- (void)setRecordWordAlreadyDisappear:(BOOL)arg0;
- (id)bars;
- (void).cxx_destruct;
- (void)setBars:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;

@end
