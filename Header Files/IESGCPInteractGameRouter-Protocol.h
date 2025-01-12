//
//     Generated by private class-dump
//

@class NSString;

@protocol IESGCPInteractGameRouter <NSObject>

@property (readonly, nonatomic) BOOL isInAnchorAudiencePlayTogether;
@property (readonly, copy, nonatomic) NSString *gameStatusTrackString;

- (void)preloadInteractGameWithSchema:(id)arg0;
- (void)closeInteractGameWithSchema:(id)arg0;
- (void)openInteractGameWithSchema:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)recordAnchorAudiencePlayTogether:(BOOL)arg0;
- (BOOL)isInAnchorAudiencePlayTogether;
- (id)gameStatusTrackString;

@end
