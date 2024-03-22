//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWELiveNewAutoEnterFrequencyControll : NSObject {
    NSDictionary *_autoEnterConfig;
}

@property (retain, nonatomic) NSDictionary *autoEnterConfig;

+ (long long)countDownDuration:(id)arg0;
+ (id)autoEnterConfig;
+ (id)getAutoEnterConfigParams:(id)arg0 enterFrom:(id)arg1;
+ (void)updateGuideRoomIdList:(id)arg0 enterFrom:(id)arg1 model:(id)arg2 configDict:(id)arg3;
+ (BOOL)isliveTabWithEnterFrom:(id)arg0;
+ (id)frequencyConfig:(id)arg0;
+ (void)updateAfterAutoEnter:(id)arg0;
+ (BOOL)useSildeOut:(id)arg0;
+ (void)negativeAction:(id)arg0 roomID:(id)arg1 anchorID:(id)arg2 requestID:(id)arg3 enterFrom:(id)arg4 configDict:(id)arg5;
+ (id)autoEnterBadFeedCountWithParams:(id)arg0;
+ (long long)waitDuration:(id)arg0;
+ (BOOL)canStartAutoEnterWithRoom:(id)arg0 enterFrom:(id)arg1 configDict:(id)arg2;
+ (BOOL)disableStartAutoEnterWithRoomID:(id)arg0 enterFrom:(id)arg1 configDict:(id)arg2;
+ (id)disableAutoEnterTimeWithParams:(id)arg0;

- (id)autoEnterConfig;
- (void)setAutoEnterConfig:(id)arg0;
- (void).cxx_destruct;

@end