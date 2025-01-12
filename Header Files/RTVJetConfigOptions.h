//
//     Generated by private class-dump
//

@class NSString;

@interface RTVJetConfigOptions : JSONModel <RTVJetConfigOptionsProtocol> {
    int service;
    NSString *sdkVersion;
    unsigned long long httpMaxTry;
    unsigned long long webSocketMaxTry;
    double webSocketTimeout;
    double backoffDuration;
    double httpTimeout;
}

@property (nonatomic) int service;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) unsigned long long httpMaxTry;
@property (nonatomic) unsigned long long webSocketMaxTry;
@property (nonatomic) double backoffDuration;
@property (nonatomic) double webSocketTimeout;
@property (nonatomic) double httpTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (void)setWebSocketTimeout:(double)arg0;
- (void)setHttpMaxTry:(unsigned long long)arg0;
- (void)setWebSocketMaxTry:(unsigned long long)arg0;
- (void)setBackoffDuration:(double)arg0;
- (unsigned long long)httpMaxTry;
- (unsigned long long)webSocketMaxTry;
- (double)backoffDuration;
- (double)webSocketTimeout;
- (double)httpTimeout;
- (void)setHttpTimeout:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setService:(int)arg0;
- (int)service;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg0;

@end
