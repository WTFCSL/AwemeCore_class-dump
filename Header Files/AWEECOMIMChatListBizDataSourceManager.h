//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEECOMIMChatListBizDataSourceManager : NSObject {
    NSDictionary *_dataSourceDict;
    NSDictionary *_convTypeToDataSourceDictKey;
}

@property (copy) NSDictionary *dataSourceDict;
@property (copy, nonatomic) NSDictionary *convTypeToDataSourceDictKey;

- (void)setDataSource:(id)arg0 WithConvType:(long long)arg1;
- (id)dataSourceWithConvType:(long long)arg0;
- (id)allDataSource;
- (id)dataSourceDict;
- (void)setDataSourceDict:(id)arg0;
- (id)convTypeToDataSourceDictKey;
- (void)setConvTypeToDataSourceDictKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
