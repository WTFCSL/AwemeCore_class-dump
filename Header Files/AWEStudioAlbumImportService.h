//
//     Generated by private class-dump
//

@class NSString, CAKModalTransitionDelegate;

@interface AWEStudioAlbumImportService : NSObject <AWEStudioAlbumService> {
    CAKModalTransitionDelegate *_albumTransitionDelegate;
}

@property (retain, nonatomic) CAKModalTransitionDelegate *albumTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAlbumWithConfigure:(id)arg0 bizName:(id)arg1 callerBiz:(id)arg2 extraInfo:(id)arg3 trackerInfoInject:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)openMainRecordAlbumWithPublishModel:(id)arg0 extraInfo:(id)arg1 configure:(id /* block */)arg2;
- (id)albumTransitionDelegate;
- (void)setAlbumTransitionDelegate:(id)arg0;
- (void).cxx_destruct;

@end
