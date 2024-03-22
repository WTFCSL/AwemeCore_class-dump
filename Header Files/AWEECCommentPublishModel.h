//
//     Generated by private class-dump
//

@class NSString, AWEStudioVideoAnchorModel;
@protocol ACCPublishRepository;

@interface AWEECCommentPublishModel : NSObject <AWERepositoryDraftProtocol, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated> {
    id<ACCPublishRepository> repoDeprecated;
    AWEStudioVideoAnchorModel *_anchorModel;
    long long _createScene;
    NSString *_commentText;
    long long _rankType;
    long long _storySourceType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEStudioVideoAnchorModel *anchorModel;
@property (nonatomic) long long createScene;
@property (copy, nonatomic) NSString *commentText;
@property (nonatomic) long long rankType;
@property (nonatomic) long long storySourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;

+ (id)createWithInfoDictionary:(id)arg0;

- (long long)storySourceType;
- (void)setStorySourceType:(long long)arg0;
- (id)initWithDraft:(id)arg0;
- (id)anchorModel;
- (void)setAnchorModel:(id)arg0;
- (id)acc_publishRequestParams:(id)arg0;
- (void)saveWithDraft:(id)arg0;
- (id)repoDeprecated;
- (void)setRepoDeprecated:(id)arg0;
- (void)setCreateScene:(long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setRankType:(long long)arg0;
- (long long)rankType;
- (id)commentText;
- (void)setCommentText:(id)arg0;
- (long long)createScene;

@end