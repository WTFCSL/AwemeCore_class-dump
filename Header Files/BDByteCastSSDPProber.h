//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, NSString, NSSet, NSObject, BDGCDAsyncUdpSocket;
@protocol OS_dispatch_queue;

@interface BDByteCastSSDPProber : NSObject <BDGCDAsyncUdpSocketDelegate, BDByteCastProberProtocol> {
    NSString *_currentHostAddress;
    NSSet *_blackIpsSet;
    long long _probeTimes;
    id /* block */ _onProbeResult;
    NSObject<OS_dispatch_queue> *_taskQueue;
    BDGCDAsyncUdpSocket *_unicastUdpSocket;
    BDGCDAsyncUdpSocket *_multicastUdpSocket;
    NSTimer *_timer;
    long long _repeatTimes;
    NSMutableDictionary *_foundHosts;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) BDGCDAsyncUdpSocket *unicastUdpSocket;
@property (retain, nonatomic) BDGCDAsyncUdpSocket *multicastUdpSocket;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long repeatTimes;
@property (retain, nonatomic) NSMutableDictionary *foundHosts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *currentHostAddress;
@property (copy, nonatomic) NSSet *blackIpsSet;
@property (nonatomic) long long probeTimes;
@property (copy, nonatomic) id /* block */ onProbeResult;

- (void)udpSocket:(id)arg0 didReceiveData:(id)arg1 fromAddress:(id)arg2 withFilterContext:(id)arg3;
- (long long)repeatTimes;
- (void)setRepeatTimes:(long long)arg0;
- (id)headerValueForKey:(id)arg0 inData:(id)arg1;
- (id)initWithContextId:(id)arg0;
- (id)getPortFromUrl:(id)arg0;
- (id)unicastUdpSocket;
- (id)multicastUdpSocket;
- (void)setUnicastUdpSocket:(id)arg0;
- (void)setMulticastUdpSocket:(id)arg0;
- (id)foundHosts;
- (void)setBlackIpsSet:(id)arg0;
- (id)blackIpsSet;
- (void)setCurrentHostAddress:(id)arg0;
- (void)setProbeTimes:(long long)arg0;
- (void)setOnProbeResult:(id /* block */)arg0;
- (void)startProbe;
- (void)setFoundHosts:(id)arg0;
- (id)currentHostAddress;
- (long long)probeTimes;
- (id /* block */)onProbeResult;
- (void)stopProbe;
- (id)createAndInitSocket;
- (void)sendProbeMessage;
- (id)buildProbeMessageWithType:(int)arg0;
- (id)getHostFromUrl:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (void)setTimer:(id)arg0;
- (void)dealloc;

@end