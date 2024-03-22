//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HGExitPopupManager : NSObject <HGApplicationLifeCycleMessage> {
    NSMutableDictionary *_revisitInfos;
}

@property (retain, nonatomic) NSMutableDictionary *revisitInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (void)applicationLoadFinishWithUniqueID:(id)arg0 logParam:(id)arg1 isSuccess:(BOOL)arg2;
- (void)setRevisitInfos:(id)arg0;
- (id)revisitInfos;
- (BOOL)_hasShownInLifeCycle:(id)arg0;
- (void)_recordLaunchTimeInLifeCycle:(id)arg0;
- (void)prepareRevisitEdu:(id)arg0;
- (void)presentViewControllerIfNeededWithUniqueID:(id)arg0 exitAction:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)dealloc;

@end