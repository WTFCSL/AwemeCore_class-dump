//
//     Generated by private class-dump
//

@class NSString, AWEStoryTextImageModel;
@protocol ACCPublishRepository;

@interface ACCRepoTextModeModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, ACCRepoRegister, NSCopying, ACCRepoTextModeData, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated> {
    BOOL _isTextMode;
    id<ACCPublishRepository> repoDeprecated;
    AWEStoryTextImageModel *_textModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isTextMode;
@property (retain, nonatomic) AWEStoryTextImageModel *textModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)repo_dataProtocol;

- (void)setIsTextMode:(BOOL)arg0;
- (id)textModel;
- (void)setTextModel:(id)arg0;
- (id)initWithDraft:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)repoDeprecated;
- (void)modelDidRetrievedFromDraftWithID:(id)arg0;
- (void)setRepoDeprecated:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isTextMode;

@end