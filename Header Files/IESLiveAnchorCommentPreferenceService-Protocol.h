//
//     Generated by private class-dump
//

@class NSNumber;

@protocol IESLiveAnchorCommentPreferenceService <NSObject>

@property (readonly, nonatomic) NSNumber *commentAuthNumForRequest;
@property (nonatomic) BOOL allowComment;

- (void)setAllowComment:(BOOL)arg0;
- (BOOL)allowComment;
- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (void)updateAllowCommentSetting:(BOOL)arg0 roomID:(id)arg1 completion:(id /* block */)arg2;
- (id)commentAuthNumForRequest;

@end