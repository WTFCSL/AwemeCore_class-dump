//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface DIRSObservedEvent : NSObject <IRISEvent> {
    NSString *_key;
    NSString *_type;
    double _time;
    long long _index;
    NSNumber *_dbIndex;
    NSString *_logID;
    NSDictionary *_schemaObject;
    long long _schemaDataLength;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double time;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSNumber *dbIndex;
@property (copy, nonatomic) NSString *logID;
@property (retain, nonatomic) NSDictionary *schemaObject;
@property (nonatomic) long long schemaDataLength;
@property (retain, nonatomic) NSDictionary *properties;
@property (readonly) id dictionaryValue;
@property (readonly) long long dataLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)schemaDataLength;
- (id)dbIndex;
- (id)schemaObject;
- (void)setSchemaDataLength:(long long)arg0;
- (void)setSchemaObject:(id)arg0;
- (void)setDbIndex:(id)arg0;
- (id)key;
- (void)setIndex:(long long)arg0;
- (long long)dataLength;
- (void).cxx_destruct;
- (double)time;
- (id)type;
- (void)setTime:(double)arg0;
- (void)setKey:(id)arg0;
- (void)setType:(id)arg0;
- (long long)index;
- (id)dictionaryValue;
- (id)properties;
- (id)logID;
- (void)setLogID:(id)arg0;

@end