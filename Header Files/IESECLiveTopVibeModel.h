//
//     Generated by private class-dump
//

@class NSArray, NSNumber, NSString;

@interface IESECLiveTopVibeModel : MTLModel <MTLJSONSerializing> {
    NSArray *_interactionVibes;
    NSNumber *_serverTime;
    NSString *_logID;
    NSNumber *_statusCode;
    NSString *_statusMsg;
    NSString *_ttStable;
}

@property (retain, nonatomic) NSArray *interactionVibes;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSString *ttStable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interactionVibesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (void)setServerTime:(id)arg0;
- (id)interactionVibes;
- (void)setInteractionVibes:(id)arg0;
- (id)ttStable;
- (void)setTtStable:(id)arg0;
- (id)statusCode;
- (void)setStatusCode:(id)arg0;
- (id)serverTime;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:(id)arg0;

@end