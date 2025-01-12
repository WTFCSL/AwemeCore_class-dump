//
//     Generated by private class-dump
//

@class AWEHomePageRemoteCommonButtonDataModel, NSString;

@interface AWEHomePageRemoteDoubleColumnButtonDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing> {
    AWEHomePageRemoteCommonButtonDataModel *_singleColumnModel;
    AWEHomePageRemoteCommonButtonDataModel *_doubleColumnModel;
}

@property (retain, nonatomic) AWEHomePageRemoteCommonButtonDataModel *singleColumnModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonButtonDataModel *doubleColumnModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleColumnModelJSONTransformer;
+ (id)doubleColumnModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)singleColumnModel;
- (id)doubleColumnModel;
- (void)setSingleColumnModel:(id)arg0;
- (void)setDoubleColumnModel:(id)arg0;
- (void).cxx_destruct;

@end
