//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface ACCEffectDownloadParam : MTLModel <MTLJSONSerializing> {
    BOOL _needUpzip;
    NSArray *_urlList;
}

@property (nonatomic) BOOL needUpzip;
@property (copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (BOOL)needUpzip;
- (void)setNeedUpzip:(BOOL)arg0;
- (void).cxx_destruct;

@end
