//
//     Generated by private class-dump
//

@class NSString, AWEOriginalAdModel;

@interface AWEAdSearchDataModel : MTLModel <MTLJSONSerializing> {
    AWEOriginalAdModel *_searchDownloadModel;
}

@property (retain, nonatomic) AWEOriginalAdModel *searchDownloadModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchDownloadModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)searchDownloadModel;
- (void)setSearchDownloadModel:(id)arg0;
- (void).cxx_destruct;

@end