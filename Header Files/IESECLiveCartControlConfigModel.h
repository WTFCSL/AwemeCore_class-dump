//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECLiveCartControlConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _isNaturalTime;
    NSString *_limitKey;
    long long _singleRoomShowTimes;
    long long _totalShowTimes;
    long long _period;
    NSArray *_cancelActions;
}

@property (retain, nonatomic) NSString *limitKey;
@property (nonatomic) long long singleRoomShowTimes;
@property (nonatomic) long long totalShowTimes;
@property (nonatomic) long long period;
@property (nonatomic) BOOL isNaturalTime;
@property (retain, nonatomic) NSArray *cancelActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cancelActionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isNaturalTime;
- (long long)totalShowTimes;
- (void)setTotalShowTimes:(long long)arg0;
- (void)setIsNaturalTime:(BOOL)arg0;
- (id)limitKey;
- (void)setLimitKey:(id)arg0;
- (long long)singleRoomShowTimes;
- (void)setSingleRoomShowTimes:(long long)arg0;
- (id)cancelActions;
- (void)setCancelActions:(id)arg0;
- (long long)period;
- (void).cxx_destruct;
- (void)setPeriod:(long long)arg0;

@end