//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWERepoTemplateInfoModel : NSObject <AWERepositoryDraftProtocol, ACCRepoRegister, ACCRepoTemplateInfoData> {
    NSArray *_allTemplateAssets;
    NSArray *_segInfoArray;
}

@property (retain, nonatomic) NSArray *allTemplateAssets;
@property (retain, nonatomic) NSArray *segInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)segInfoArray;
- (void)setSegInfoArray:(id)arg0;
- (void)setAllTemplateAssets:(id)arg0;
- (id)allTemplateAssets;
- (void)p_assembleSegInfos:(id)arg0 repoCutSame:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end