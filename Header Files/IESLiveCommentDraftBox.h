//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface IESLiveCommentDraftBox : NSObject <IESLiveCommentDraftService> {
    NSMutableDictionary *_cacheDraft;
}

@property (retain, nonatomic) NSMutableDictionary *cacheDraft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)commentDraftFromSource:(long long)arg0;
- (void)clearCommentDraftForSource:(long long)arg0;
- (id)cacheDraft;
- (id)generateDraftModel;
- (void)setCacheDraft:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end