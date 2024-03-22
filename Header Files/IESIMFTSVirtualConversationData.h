//
//     Generated by private class-dump
//

@class NSString;

@interface IESIMFTSVirtualConversationData : NSObject <WCTTableCoding, IESIMFTSConversationDataProtocol> {
    BOOL _deleted;
    BOOL _isAutoIncrement;
    long long _docId;
    NSString *_convId;
    NSString *_content;
    long long _contentType;
    NSString *_ext;
    long long _extType;
    double _timestamp;
    long long _sortOrder;
    NSString *_offsets;
}

@property (copy, nonatomic) NSString *offsets;
@property (nonatomic) long long docId;
@property (copy, nonatomic) NSString *convId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *ext;
@property (nonatomic) long long extType;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL deleted;
@property (nonatomic) long long sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)convId;
+ (const void *)extType;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)sortOrder;
+ (const void *)contentType;
+ (const void *)timestamp;
+ (const void *)content;
+ (const void *)deleted;
+ (const void *)ext;

- (id)convId;
- (void)setExt:(id)arg0;
- (void)setExtType:(long long)arg0;
- (long long)extType;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)arg0;
- (void)setConvId:(id)arg0;
- (long long)docId;
- (void)setDocId:(long long)arg0;
- (void)setContentType:(long long)arg0;
- (long long)sortOrder;
- (long long)contentType;
- (double)timestamp;
- (void).cxx_destruct;
- (id)content;
- (void)setDeleted:(BOOL)arg0;
- (void)setContent:(id)arg0;
- (void)setTimestamp:(double)arg0;
- (void)setSortOrder:(long long)arg0;
- (BOOL)deleted;
- (id)offsets;
- (void)setOffsets:(id)arg0;
- (id)ext;

@end
