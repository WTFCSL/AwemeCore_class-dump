//
//     Generated by private class-dump
//

@class NSDictionary, NSString, BDTuringVerifyModel;

@interface BDTuringParameterVerifyModel : BDTuringVerifyModel <BDTuringVerifyModelCreator> {
    NSString *_type;
    NSDictionary *_verifyData;
    BDTuringVerifyModel *_actualModel;
    NSString *_verifyScene;
}

@property (copy, nonatomic) NSDictionary *verifyData;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *verifyScene;
@property (retain, nonatomic) BDTuringVerifyModel *actualModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithParameter:(id)arg0;
+ (BOOL)canHandleParameter:(id)arg0;
+ (void)initialize;

- (void)setVerifyData:(id)arg0;
- (void)setVerifyScene:(id)arg0;
- (id)verifyData;
- (void)setActualModel:(id)arg0;
- (id)actualModel;
- (void)appendCommonKVParameters:(id)arg0;
- (void)appendKVToEventParameters:(id)arg0;
- (id)verifyScene;
- (BOOL)supportLandscape;
- (void)appendKVToQueryParameters:(id)arg0;
- (void)configVerifyView:(id)arg0;
- (id)createVerifyView;
- (id)init;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)setType:(id)arg0;
- (id)appID;
- (id)plugin;
- (void)setRegionType:(long long)arg0;
- (id)handlerName;

@end