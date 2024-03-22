//
//     Generated by private class-dump
//

@class NSString, AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel;

@interface AWEAntiAddictStrategyOnTimeVideoModel : MTLModel <MTLJSONSerializing> {
    long long _onTimeVideoBeginTime;
    long long _onTimeVideoEndTime;
    long long _onTimeVideoPlayTime;
    AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel *_suppressLimitModel;
}

@property (readonly, nonatomic) long long onTimeVideoBeginTime;
@property (readonly, nonatomic) long long onTimeVideoEndTime;
@property (readonly, nonatomic) long long onTimeVideoPlayTime;
@property (readonly, nonatomic) AWEAntiAddictStrategyOnTimeVideoSuppressLimitModel *suppressLimitModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suppressLimitModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)onTimeVideoPlayTime;
- (id)suppressLimitModel;
- (long long)onTimeVideoBeginTime;
- (long long)onTimeVideoEndTime;
- (void).cxx_destruct;
- (BOOL)isValid;

@end