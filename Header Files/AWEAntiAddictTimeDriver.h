//
//     Generated by private class-dump
//

@class NSDate, NSString, AWEAntiAddictTimeCounter;
@protocol AWEAntiAddictCounterProtocol;

@interface AWEAntiAddictTimeDriver : NSObject <AWEAntiAddictLogProtocol> {
    AWEAntiAddictTimeCounter *_timeCounter;
    NSDate *_lastActiveDate;
    NSDate *_lastResignDate;
}

@property (retain) AWEAntiAddictTimeCounter *timeCounter;
@property (retain) NSDate *lastActiveDate;
@property (retain) NSDate *lastResignDate;
@property (readonly) id<AWEAntiAddictCounterProtocol> counter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)counterClass;
+ (id)createCounterInstance;
+ (id)moduleName;

- (id)initWithCounter:(id)arg0 activeDate:(id)arg1;
- (void)updateDataToDate:(id)arg0;
- (void)loginStateChangedAtDate:(id)arg0;
- (void)appDidBecomeActiveAtDate:(id)arg0;
- (void)appWillResignActiveAtDate:(id)arg0;
- (void)appWillTerminateAtDate:(id)arg0;
- (void)updateCounterWithStartDate:(id)arg0 andEndDate:(id)arg1;
- (id)timeCounter;
- (void)setLastActiveDate:(id)arg0;
- (void)setLastResignDate:(id)arg0;
- (id)lastResignDate;
- (void)setTimeCounter:(id)arg0;
- (void).cxx_destruct;
- (id)counter;
- (id)lastActiveDate;

@end
