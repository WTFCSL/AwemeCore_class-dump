//
//     Generated by private class-dump
//

@class BDXResourceModel, NSString, BDXContainerModel, BDXWebKitModel, NSURL, AnnieXLynxSchemaModel;
@protocol BDSchemaDataProtocol;

@interface BDXSchemaParam : NSObject {
    id<BDSchemaDataProtocol> _schemaData;
    BDXContainerModel *_containerModel;
    AnnieXLynxSchemaModel *_lynxModel;
    BDXWebKitModel *_webModel;
    BDXResourceModel *_resourceModel;
    NSURL *_originURL;
    NSURL *_resolvedURL;
    NSString *_uniqueUrlString;
}

@property (retain, nonatomic) NSString *puzzleContextKey;
@property (retain, nonatomic) id<BDSchemaDataProtocol> schemaData;
@property (retain, nonatomic) BDXContainerModel *containerModel;
@property (retain, nonatomic) AnnieXLynxSchemaModel *lynxModel;
@property (retain, nonatomic) BDXWebKitModel *webModel;
@property (retain, nonatomic) BDXResourceModel *resourceModel;
@property (retain, nonatomic) NSURL *originURL;
@property (retain, nonatomic) NSURL *resolvedURL;
@property (retain, nonatomic) NSString *uniqueUrlString;

+ (id)paramWithSchemaData:(id)arg0;

- (void)setWebModel:(id)arg0;
- (id)webModel;
- (id)lynxModel;
- (void)setLynxModel:(id)arg0;
- (void)setResourceModel:(id)arg0;
- (id)resourceModel;
- (void)setPuzzleContextKey:(id)arg0;
- (id)containerModel;
- (id)puzzleContextKey;
- (void)updateWithSchemaData:(id)arg0;
- (void)setContainerModel:(id)arg0;
- (id)uniqueUrlString;
- (void)updateWithParam:(id)arg0;
- (void)setUniqueUrlString:(id)arg0;
- (id)queryItems;
- (id)resolvedURL;
- (void)updateWithDictionary:(id)arg0;
- (void).cxx_destruct;
- (id)originURL;
- (void)setOriginURL:(id)arg0;
- (void)setResolvedURL:(id)arg0;
- (id)schemaData;
- (void)setSchemaData:(id)arg0;

@end
