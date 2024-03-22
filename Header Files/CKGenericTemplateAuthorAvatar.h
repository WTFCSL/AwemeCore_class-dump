//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface CKGenericTemplateAuthorAvatar : MTLModel <MTLJSONSerializing> {
    NSString *_uri;
    NSArray *_urlList;
    NSString *_urlKey;
    NSString *_fileHash;
    NSString *_playerAccessKey;
    long long _dataSize;
    long long _width;
    long long _height;
}

@property (readonly, copy, nonatomic) NSString *uri;
@property (readonly, copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSString *urlKey;
@property (readonly, copy, nonatomic) NSString *fileHash;
@property (readonly, copy, nonatomic) NSString *playerAccessKey;
@property (readonly, nonatomic) long long dataSize;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)urlList;
- (id)playerAccessKey;
- (void).cxx_destruct;
- (long long)height;
- (long long)dataSize;
- (long long)width;
- (id)uri;
- (id)fileHash;
- (id)urlKey;

@end