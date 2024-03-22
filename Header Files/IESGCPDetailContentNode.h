//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, IESGCPDetailContentStyle;

@interface IESGCPDetailContentNode : NSObject {
    NSDictionary *_originalResponse;
    NSString *_id_p;
    NSArray *_children;
    NSString *_className;
    NSDictionary *_data;
    NSDictionary *_metaData;
    IESGCPDetailContentStyle *_style;
}

@property (retain, nonatomic) NSDictionary *originalResponse;
@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) IESGCPDetailContentStyle *style;

+ (id)filterNSNullWithDict:(id)arg0;
+ (id)contentWithDict:(id)arg0;

- (id)filterContentUsing:(id /* block */)arg0;
- (id)originalResponse;
- (id)noneFloatChildren;
- (void)setOriginalResponse:(id)arg0;
- (id)childrenWithFloatType:(id)arg0;
- (id)metaData;
- (id)style;
- (void)setClassName:(id)arg0;
- (void)setChildren:(id)arg0;
- (id)className;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)children;
- (void)setStyle:(id)arg0;
- (void)setMetaData:(id)arg0;
- (id)id_p;
- (void)setId_p:(id)arg0;

@end