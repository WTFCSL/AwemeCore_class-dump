//
//     Generated by private class-dump
//

@class NSDictionary;

@interface DitoMultiTabDataModel : NSObject {
    id _stripDatas;
    NSDictionary *_pageData;
}

@property (copy, nonatomic) id stripDatas;
@property (copy, nonatomic) NSDictionary *pageData;

- (id)fetchBizQuery;
- (id)fetchTemplate;
- (id)fetchPageKey;
- (id)fetchPageID;
- (id)stripDatas;
- (void)setStripDatas:(id)arg0;
- (void).cxx_destruct;
- (id)pageData;
- (void)setPageData:(id)arg0;

@end