//
//     Generated by private class-dump
//

@class NSString;

@interface BDPAppPreloadRecord : NSObject <NSCopying> {
    NSString *_appID;
    NSString *_schemaString;
    long long _timestamp;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *schemaString;
@property (nonatomic) long long timestamp;

- (id)schemaString;
- (void)setSchemaString:(id)arg0;
- (void)setAppID:(id)arg0;
- (long long)timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)appID;
- (void)setTimestamp:(long long)arg0;

@end