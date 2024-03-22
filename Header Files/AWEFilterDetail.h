//
//     Generated by private class-dump
//

@class NSString, AWEFilterDetailAuthorSecretInfoModel;

@interface AWEFilterDetail : MTLModel <MTLJSONSerializing> {
    NSString *_awemeID;
    NSString *_filterReason;
    NSString *_notice;
    NSString *_detailMsg;
    NSString *_icon;
    AWEFilterDetailAuthorSecretInfoModel *_authorSecretInfo;
}

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *filterReason;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *detailMsg;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) AWEFilterDetailAuthorSecretInfoModel *authorSecretInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorSecretInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (id)filterReason;
- (void)setFilterReason:(id)arg0;
- (void)setDetailMsg:(id)arg0;
- (id)detailMsg;
- (id)authorSecretInfo;
- (void)setAuthorSecretInfo:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (void)setIcon:(id)arg0;
- (id)notice;
- (void)setNotice:(id)arg0;

@end
