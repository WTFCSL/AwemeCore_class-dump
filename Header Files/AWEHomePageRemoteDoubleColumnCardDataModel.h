//
//     Generated by private class-dump
//

@class NSString, AWEHomePageRemoteCommonCardDataModel;

@interface AWEHomePageRemoteDoubleColumnCardDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing> {
    AWEHomePageRemoteCommonCardDataModel *_singleColumnModel;
    AWEHomePageRemoteCommonCardDataModel *_doubleColumnModel;
}

@property (retain, nonatomic) AWEHomePageRemoteCommonCardDataModel *singleColumnModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonCardDataModel *doubleColumnModel;
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