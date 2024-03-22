//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESIMClientTimestampAdjustManager : NSObject <TIMXStatisticProtocol, IESIMClientTimestampAdjustManagerProtocol> {
    NSObject<OS_dispatch_semaphore> *_sem;
    long long _staticTimestampDeltaCount;
    long long _totalStaticTimestampDelta;
    long long _avgStaticTimestampDelta;
    unsigned long long _innertNtpStatus;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) long long staticTimestampDeltaCount;
@property (nonatomic) long long totalStaticTimestampDelta;
@property (nonatomic) long long avgStaticTimestampDelta;
@property (nonatomic) unsigned long long innertNtpStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didReceiveTimestamp:(id)arg0;
- (long long)currentClientTimestampDelta;
- (void)setStaticTimestampDeltaCount:(long long)arg0;
- (long long)staticTimestampDeltaCount;
- (unsigned long long)ntpStauts;
- (long long)avgStaticTimestampDelta;
- (long long)calcuelateCurrentDeltaWithTimestamp:(id)arg0;
- (void)setAvgStaticTimestampDelta:(long long)arg0;
- (void)setInnertNtpStatus:(unsigned long long)arg0;
- (unsigned long long)innertNtpStatus;
- (long long)totalStaticTimestampDelta;
- (void)setTotalStaticTimestampDelta:(long long)arg0;
- (id)sem;
- (id)init;
- (void).cxx_destruct;
- (void)setSem:(id)arg0;

@end