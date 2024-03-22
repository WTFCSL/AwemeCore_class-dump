//
//     Generated by private class-dump
//

@class NSString;

@interface HMDOTSpanApiAllData : NSObject <HMDOTSpanMovinglineDataProtocol> {
    NSString *_url;
    unsigned long long _duration;
    unsigned long long _status;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateMovinglineData;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setUrl:(id)arg0;
- (unsigned long long)duration;
- (void)setStatus:(unsigned long long)arg0;
- (id)url;
- (void)setDuration:(unsigned long long)arg0;

@end
