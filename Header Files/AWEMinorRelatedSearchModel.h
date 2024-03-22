//
//     Generated by private class-dump
//

@class NSString, AWEMinorRelatedSearchWordModel;

@interface AWEMinorRelatedSearchModel : MTLModel <MTLJSONSerializing> {
    NSString *_iconURL;
    NSString *_prefixTitle;
    AWEMinorRelatedSearchWordModel *_queryWord;
}

@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *prefixTitle;
@property (retain, nonatomic) AWEMinorRelatedSearchWordModel *queryWord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryWordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)queryWord;
- (void)setQueryWord:(id)arg0;
- (void)setPrefixTitle:(id)arg0;
- (id)prefixTitle;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;

@end
