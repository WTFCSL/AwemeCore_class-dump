//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;

@interface TIMXFileORM : TIMXBaseORM <WCTTableCoding, TIMXFileModelProtocol> {
    NSString *_identifier;
    NSString *_belongingConversationID;
    NSString *_belongingMessageID;
    NSString *_localRelativePath;
    long long _length;
    NSString *_md5;
    NSString *_mime;
    NSString *_type;
    NSString *_displayType;
    NSString *_remoteURL;
    NSString *_encryptPath;
    NSString *_secretKey;
    NSString *_algorithm;
    NSDate *_createdAt;
    long long _status;
    NSString *_ext;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *belongingConversationID;
@property (retain, nonatomic) NSString *belongingMessageID;
@property (retain, nonatomic) NSString *localRelativePath;
@property (nonatomic) long long length;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *displayType;
@property (retain, nonatomic) NSString *remoteURL;
@property (copy, nonatomic) NSString *encryptPath;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *algorithm;
@property (retain, nonatomic) NSDate *createdAt;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *ext;
@property (retain, nonatomic) NSDictionary *extDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)belongingConversationID;
+ (const void *)belongingMessageID;
+ (const void *)encryptPath;
+ (const void *)algorithm;
+ (const void *)secretKey;
+ (const void *)displayType;
+ (const void *)remoteURL;
+ (const void *)status;
+ (const void *)type;
+ (const void *)length;
+ (const void *)identifier;
+ (const void *)createdAt;
+ (const void *)md5;
+ (const void *)localRelativePath;
+ (const void *)mime;
+ (const void *)ext;

- (void)setExt:(id)arg0;
- (id)extDictionary;
- (void)setExtDictionary:(id)arg0;
- (id)belongingConversationID;
- (void)setBelongingConversationID:(id)arg0;
- (id)belongingMessageID;
- (void)setBelongingMessageID:(id)arg0;
- (id)encryptPath;
- (void)setEncryptPath:(id)arg0;
- (id)fileURLWithRootObject:(id)arg0;
- (id)localDirWithRootObject:(id)arg0;
- (id)algorithm;
- (id)secretKey;
- (void)setLength:(long long)arg0;
- (id)displayType;
- (id)remoteURL;
- (void).cxx_destruct;
- (void)setDisplayType:(id)arg0;
- (void)setSecretKey:(id)arg0;
- (long long)status;
- (id)type;
- (void)setCreatedAt:(id)arg0;
- (long long)length;
- (id)identifier;
- (void)setType:(id)arg0;
- (void)setStatus:(long long)arg0;
- (void)setAlgorithm:(id)arg0;
- (id)createdAt;
- (void)setIdentifier:(id)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (void)setRemoteURL:(id)arg0;
- (id)localRelativePath;
- (void)setLocalRelativePath:(id)arg0;
- (id)initWithRootObject:(id)arg0;
- (id)mime;
- (void)setMime:(id)arg0;
- (id)ext;
- (id)localFileName;

@end
