//
//     Generated by private class-dump
//

@class NSString;

@interface UTSelfStaticsManager : NSObject <UTMCLifeCycleProtocol> {
    long long mSwitchForeGroundTime;
    long long mLastBackGroundOccuredTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)getInstance;

- (void)switchBackGround;
- (void)switchForeGround;
- (void)onEventForCrash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end