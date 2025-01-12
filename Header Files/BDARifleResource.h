//
//     Generated by private class-dump
//

@class NSString, NSData;

@interface BDARifleResource : NSObject <BDARifleResourceProtocol> {
    BOOL _isGeckoUpdate;
    NSString *_sourceUrl;
    NSString *_cdnUrl;
    NSString *_channel;
    unsigned long long _version;
    NSString *_bundle;
    NSString *_absolutePath;
    NSData *_resourceData;
    NSString *_accessKey;
    long long _resourceType;
    NSString *_originSourceURL;
}

@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *absolutePath;
@property (copy, nonatomic) NSData *resourceData;
@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *originSourceURL;
@property (nonatomic) BOOL isGeckoUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cdnUrl;
- (BOOL)isGeckoUpdate;
- (void)setCdnUrl:(id)arg0;
- (id)originSourceURL;
- (void)setOriginSourceURL:(id)arg0;
- (void)setIsGeckoUpdate:(BOOL)arg0;
- (id)bundle;
- (id)channel;
- (long long)resourceType;
- (void)setVersion:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (void)setResourceType:(long long)arg0;
- (void)setBundle:(id)arg0;
- (id)resourceData;
- (unsigned long long)version;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (void)setResourceData:(id)arg0;
- (id)absolutePath;
- (void)setAbsolutePath:(id)arg0;

@end
