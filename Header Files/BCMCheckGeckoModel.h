//
//     Generated by private class-dump
//

@class BCMCheckParamsListModel, NSString;

@interface BCMCheckGeckoModel : MTLModel <MTLJSONSerializing> {
    BCMCheckParamsListModel *_data;
}

@property (retain, nonatomic) BCMCheckParamsListModel *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;

@end
