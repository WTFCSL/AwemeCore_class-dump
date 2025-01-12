//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEStoryDataManager : NSObject <AWEPublishTaskMessage, AWEStoryDataManagerProtocol> {
    BOOL _isHostStatus;
    BOOL _isNewEducationGuideStyle;
    AWEAwemeModel *_innerOfficialModel;
    AWEAwemeModel *_innerNewEducationOfficialModel;
}

@property (retain, nonatomic) AWEAwemeModel *innerOfficialModel;
@property (retain, nonatomic) AWEAwemeModel *innerNewEducationOfficialModel;
@property (nonatomic) BOOL isHostStatus;
@property (nonatomic) BOOL isNewEducationGuideStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)calcDaysFromBegin:(id)arg0 end:(id)arg1;
+ (id)sharedInstance;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)loadPreviousStoryWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (void)loadMoreStoryWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (void)fetchStoryWithAwemeModel:(id)arg0 completion:(id /* block */)arg1;
- (void)p_postRequest:(id)arg0 completion:(id /* block */)arg1;
- (id)p_commonParam:(id)arg0 story:(id)arg1;
- (void)storyLoadRequestMonitorWithAwemeModel:(id)arg0 loadType:(long long)arg1;
- (void)storyLoadResponseMonitorWithAwemeModel:(id)arg0 loadType:(long long)arg1 storyGroup:(id)arg2 error:(id)arg3;
- (void)updateStoryGroup:(id)arg0 awemeModel:(id)arg1;
- (id)p_storyLoadStatusDict:(id)arg0 error:(id)arg1 loadType:(long long)arg2;
- (void)setIsHostStatus:(BOOL)arg0;
- (id)innerOfficialModel;
- (BOOL)isHostStatus;
- (id)innerNewEducationOfficialModel;
- (BOOL)isNewEducationGuideStyle;
- (void)setInnerNewEducationOfficialModel:(id)arg0;
- (void)setInnerOfficialModel:(id)arg0;
- (void)fetchOfficialAwemeIsHostStatus:(BOOL)arg0 Completion:(id /* block */)arg1;
- (void)setIsNewEducationGuideStyle:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
