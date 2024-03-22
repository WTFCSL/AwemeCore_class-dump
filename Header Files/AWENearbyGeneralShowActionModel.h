//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWENearbyGeneralShowActionModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _actionType;
    NSString *_actionParam;
    NSNumber *_pollingLimit;
    NSNumber *_pollingInterval;
    NSString *_actionApiUrl;
}

@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *actionParam;
@property (retain, nonatomic) NSNumber *pollingLimit;
@property (retain, nonatomic) NSNumber *pollingInterval;
@property (copy, nonatomic) NSString *actionApiUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)actionApiUrl;
- (id)actionParam;
- (id)pollingLimit;
- (void)setPollingLimit:(id)arg0;
- (void)setActionParam:(id)arg0;
- (void)setActionApiUrl:(id)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (id)pollingInterval;
- (void)setPollingInterval:(id)arg0;

@end