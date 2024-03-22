//
//     Generated by private class-dump
//

@class NSNumber;

@protocol AWEPostPageDraftService <AWEPostPageBaseService>

@property (readonly, nonatomic) NSNumber *saveDraftStateSignal;

- (void)saveDraft:(id /* block */)arg0;
- (void)saveDraft:(id /* block */)arg0 backup:(BOOL)arg1;
- (void)savePollImageToDisk;
- (BOOL)saveDraftIfNeed:(id /* block */)arg0;
- (void)saveOrignalDraftWithCompletion:(id /* block */)arg0;
- (void)beginSaveDraft;
- (void)endSaveDraft;
- (id)saveDraftStateSignal;
- (void)viewDidLoad;
- (void)initData;
- (void)deleteDraft;

@end