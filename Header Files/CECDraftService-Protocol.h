//
//     Generated by private class-dump
//

@class NSArray;

@protocol CECDraftService <NSObject>

@property (readonly, nonatomic) NSArray *draftModels;

- (void)removeDraftID:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)extendDraftValidityWithDraftID:(id)arg0 UserID:(id)arg1;
- (id)draftModels;
- (void)removeDraft:(id)arg0 completion:(id /* block */)arg1;
- (void)setPublishSuccessWithDraftID:(id)arg0;
- (void)addDraft:(id)arg0;

@end
