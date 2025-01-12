//
//     Generated by private class-dump
//

@class NSString;

@interface IESIMFTSData : NSObject <WCTTableCoding, IESIMFTSDataProtocol> {
    BOOL isAutoIncrement;
    long long _docid;
    NSString *_busid;
    NSString *_groupid;
    long long _busType;
    long long _contentType;
    double _timestamp;
    long long _extType;
    NSString *_ext;
    NSString *_content;
    long long _updateTime;
    long long lastInsertedRowID;
}

@property (nonatomic) long long docid;
@property (copy, nonatomic) NSString *busid;
@property (copy, nonatomic) NSString *groupid;
@property (nonatomic) long long busType;
@property (nonatomic) long long contentType;
@property (nonatomic) double timestamp;
@property (nonatomic) long long extType;
@property (copy, nonatomic) NSString *ext;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long updateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)extType;
+ (const void *)groupid;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)docid;
+ (const void *)busid;
+ (const void *)contentType;
+ (const void *)busType;
+ (const void *)timestamp;
+ (const void *)updateTime;
+ (const void *)content;
+ (const void *)ext;

- (void)setExt:(id)arg0;
- (void)setExtType:(long long)arg0;
- (long long)extType;
- (void)setGroupid:(id)arg0;
- (id)groupid;
- (void)setLastInsertedRowID:(long long)arg0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg0;
- (long long)docid;
- (id)busid;
- (void)setDocid:(long long)arg0;
- (void)setBusid:(id)arg0;
- (void)setContentType:(long long)arg0;
- (long long)contentType;
- (long long)busType;
- (double)timestamp;
- (void).cxx_destruct;
- (long long)updateTime;
- (id)content;
- (long long)lastInsertedRowID;
- (void)setContent:(id)arg0;
- (void)setTimestamp:(double)arg0;
- (void)setUpdateTime:(long long)arg0;
- (void)setBusType:(long long)arg0;
- (id)ext;

@end
