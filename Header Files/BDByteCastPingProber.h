//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSSet;

@interface BDByteCastPingProber : NSObject <BDByteCastProberProtocol> {
    NSString *_currentHostAddress;
    NSSet *_blackIpsSet;
    long long _probeTimes;
    id /* block */ _onProbeResult;
    NSMutableDictionary *_foundHosts;
}

@property (retain, nonatomic) NSMutableDictionary *foundHosts;
@property (copy, nonatomic) NSString *currentHostAddress;
@property (copy, nonatomic) NSSet *blackIpsSet;
@property (nonatomic) long long probeTimes;
@property (copy, nonatomic) id /* block */ onProbeResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContextId:(id)arg0;
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
- (void)addHostsFrom:(id)arg0 tag:(id)arg1;
- (void)onProbeCompleted;
- (void).cxx_destruct;

@end
