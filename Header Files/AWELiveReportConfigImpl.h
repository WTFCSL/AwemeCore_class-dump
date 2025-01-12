//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveInternalRouter;

@interface AWELiveReportConfigImpl : NSObject <IESLiveReportService> {
    id<IESLiveInternalRouter> _internalRouter;
}

@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)performReportActionForHostCompletion:(id /* block */)arg0;
- (id)getReportCachedRoomIDs:(id)arg0;
- (void)reportUser:(id)arg0 room:(id)arg1 source:(unsigned long long)arg2 reportContent:(id)arg3 contentId:(id)arg4;
- (void)reportUser:(id)arg0 room:(id)arg1 source:(unsigned long long)arg2 reportContent:(id)arg3 contentId:(id)arg4 completion:(id /* block */)arg5;
- (void)reportUser:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)reportUser:(BOOL)arg0 params:(id)arg1;
- (void)cacheReportRoomID:(id)arg0 cacheKey:(id)arg1;
- (void)executeReport;
- (long long)reportAnchorABType;
- (long long)reportCommentABType;
- (void).cxx_destruct;

@end
