//
//     Generated by private class-dump
//

@interface AWELiveEnterGuideFrequencyControll : NSObject

+ (unsigned long long)vsType;
+ (long long)waitDuration;
+ (void)negativeWithRoomID:(id)arg0 enterFrom:(id)arg1;
+ (void)updateAfterEnterGuide;
+ (void)updateGuideRoomIdList:(id)arg0 enterFrom:(id)arg1 isVSRoom:(BOOL)arg2;
+ (id)guideClickNameWithShowType:(unsigned long long)arg0 guideType:(unsigned long long)arg1;
+ (id)guideNameWithType:(unsigned long long)arg0;
+ (BOOL)canStartEnterGuideWithRoomID:(id)arg0 enterFrom:(id)arg1 isVSRoom:(BOOL)arg2;
+ (BOOL)disableStartEnterGuideWithRoomID:(id)arg0 enterFrom:(id)arg1 isVSRoom:(BOOL)arg2;
+ (BOOL)enableFrequency;
+ (double)limitEnterGuideSecond;
+ (long long)maxIgnoreEnterRoomTimes;
+ (unsigned long long)type;

@end