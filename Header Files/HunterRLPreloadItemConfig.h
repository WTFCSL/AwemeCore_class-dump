//
//     Generated by private class-dump
//

@class NSString, NSArray, BDXPreloadStrategy;

@interface HunterRLPreloadItemConfig : NSObject <HunterPreloadConfigItemProtocol> {
    BOOL _enableMemory;
    BOOL _serial;
    BOOL _isHighEfficiency;
    NSString *_type;
    NSArray *_keyPaths;
    long long _expire;
    BDXPreloadStrategy *_strategy;
    double _expireStart;
    double _expireEnd;
    NSString *_memoryPriority;
    long long _priority;
    NSString *_gurdChannel;
    NSString *_uri;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *keyPaths;
@property (nonatomic) BOOL enableMemory;
@property (nonatomic) long long expire;
@property (retain, nonatomic) BDXPreloadStrategy *strategy;
@property (nonatomic) double expireStart;
@property (nonatomic) double expireEnd;
@property (copy, nonatomic) NSString *memoryPriority;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL serial;
@property (copy, nonatomic) NSString *gurdChannel;
@property (nonatomic) BOOL isHighEfficiency;
@property (copy, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableMemory;
- (void)setEnableMemory:(BOOL)arg0;
- (double)expireStart;
- (void)setExpireStart:(double)arg0;
- (double)expireEnd;
- (void)setExpireEnd:(double)arg0;
- (id)memoryPriority;
- (void)setMemoryPriority:(id)arg0;
- (id)gurdChannel;
- (void)setGurdChannel:(id)arg0;
- (BOOL)isHighEfficiency;
- (void)setIsHighEfficiency:(BOOL)arg0;
- (id)strategy;
- (void).cxx_destruct;
- (id)keyPaths;
- (long long)expire;
- (id)type;
- (void)setKeyPaths:(id)arg0;
- (void)setPriority:(long long)arg0;
- (id)identifier;
- (void)setType:(id)arg0;
- (BOOL)serial;
- (void)setUri:(id)arg0;
- (long long)priority;
- (id)uri;
- (void)setExpire:(long long)arg0;
- (void)setStrategy:(id)arg0;
- (void)setSerial:(BOOL)arg0;

@end
