//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface SECHybridAPIContextNotFoundEvent : SECHybridBaseEvent {
    NSString *_lynxViewURL;
    NSString *_methodName;
    NSString *_namescope;
    NSNumber *_hasRawData;
    NSNumber *_hasExtra;
}

@property (copy, nonatomic) NSString *lynxViewURL;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *namescope;
@property (retain, nonatomic) NSNumber *hasRawData;
@property (retain, nonatomic) NSNumber *hasExtra;

- (id)namescope;
- (void)setNamescope:(id)arg0;
- (id)hasExtra;
- (id)lynxViewURL;
- (void)setLynxViewURL:(id)arg0;
- (void)setHasRawData:(id)arg0;
- (void)setHasExtra:(id)arg0;
- (id)init;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)eventType;
- (id)methodName;
- (void)setMethodName:(id)arg0;
- (id)hasRawData;

@end
